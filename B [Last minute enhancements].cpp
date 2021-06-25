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
        int n, x;
        cin >> n;
        vector<int> v;
        set<int> s;
        map<int, int> mp;
        for(int i=0;i<n;i++){
            cin >> x; 
            mp[x]++;
        }
        reverse(v.begin(),v.end());
         for(auto &it:mp){
             if(it.second>=2) {
             s.insert(it.first);
             s.insert(it.first +1 );
             }
             else if(it.second==1) 
             v.push_back(it.first);
         }
        for(int i=0;i<v.size();i++){
            if(s.find(v[i])!=s.end()) 
            s.insert(v[i]+1);
            else 
            s.insert(v[i]);
        }
        cout<< s.size()<< endl;
    }
         
    
      
    
        
        
    
}