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
      string s="L";
      string temp;
      cin>>temp;
      s+=temp;
      vector<int>dp_left(n+1);
      vector<int>dp_right(n+1);
      dp_left[0]=0;
      for(int i=1;i<=n;i++){
          if(s[i]=='R')
          dp_left[i]=0;
          else if(s[i]=='L'){
              dp_left[i]=1;
              if(i>=2 and s[i-1]=='R')
              dp_left[i]++;
              if(i>=3 and s[i-1]=='R' and s[i-2]=='L')
              dp_left[i]+=dp_left[i-2];
              
          }
      }
      dp_right[n]=0;
      s=temp;
      s.push_back('L');
      for(int i=n-1;i>=0;i--){
          if(s[i]=='L')
          dp_right[i]=0;
          else if(s[i]=='R'){
              dp_right[i]=1;
              if(i<=n-2 and s[i+1]=='L')
              dp_right[i]++;
              if(i<=n-3 and s[i+1]=='L' and s[i+2]=='R')
              dp_right[i]+=dp_right[i+2];
          }
      }
      for(int i=0;i<=n;i++)
      cout<<dp_right[i]+dp_left[i]+1<<" ";
      cout<<endl;
      
      
    }
}