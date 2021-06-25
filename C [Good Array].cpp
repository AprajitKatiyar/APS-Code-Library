#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    io;
    int t=1;
   // cin>>t;
    while(t--){
        int n;
        cin>>n;
       multiset<int>ms;
        int sum=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            ms.insert(v[i]);
        }
        vector<int>res;
        for(int i=0;i<n;i++){
           int temp=v[i];
           ms.erase(ms.find(temp));
           auto it=ms.end();
           it--;
           int largest=*it;
           if(sum-temp==2*largest)
           res.push_back(i+1);
           ms.insert(temp);
        }
        cout<<res.size()<<endl;
        if(res.size()){
        for(auto it:res)
        cout<<it<<" ";
        }
    }
      
}