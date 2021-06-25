#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    io;
    int t=1;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int>arr(n);
      set<int>s;
      vector<int>v;
      int maximum=LLONG_MIN;
      int zero=0;
      for(int i=0;i<n;i++){
          cin>>arr[i];
          if(arr[i]==0)
          zero++;
          maximum=max(maximum,arr[i]);
          s.insert(arr[i]);
          v.push_back(arr[i]);
      }
      if(maximum==0){
          cout<<n<<endl;
          continue;
      }
      auto it=s.begin();
      if(*it>0){
          cout<<1<<endl;
          continue;
      }
      sort(v.begin(),v.end());
      int neg=0;
      for(int i=0;i<n;i++){
          if(v[i]<=0)
          neg++;
          else
          break;
      }
      int prev=LLONG_MAX,mn=LLONG_MAX,f=0,ans=0;
      for(auto it:s){
          if(it<0){
            ans++;
            if(prev!=LLONG_MAX)
            mn=min(mn,(int)abs(prev-it));
            }
            else {
                if(it==0)
                ans++;
                else{
                if(it<=mn){
                 ans++;
                break;
                }
            }
        }
        prev=it;
      }
      cout<<max(ans,neg)<<endl;
      
      
      
    
  }
 
 
}