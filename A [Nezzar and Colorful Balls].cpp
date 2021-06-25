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
      int ele;
      int max=LLONG_MIN;
        cin >>n;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>ele;
            mp[ele]++;
        }
        for(auto it:mp)
            if(it.second>max) 
            max=it.second;
        cout<<max<< endl;
       
    }
}