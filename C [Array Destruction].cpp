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
        n*=2;
        vector<int>v(n);
        multiset<int,greater<int>>ms;
        for(int i=0;i<n;i++){
        cin>>v[i];
        ms.insert(v[i]);
        }
        sort(v.begin(),v.end());
        bool ok=false;
        for(int i=0;i<n-1;i++){
            int x=v[n-1]+v[i];
            multiset<int,greater<int>>ms2;
            ms2=ms;
            vector<pair<int,int>>res;
            while(!ms2.empty()){
                auto it=ms2.begin();
                int a=*it;
                ms2.erase(it);
                int b=x-a;
                if(ms2.find(b)!=ms2.end()){
                    res.push_back({b,a});
                    ms2.erase(ms2.find(b));
                    x=max(a,b);
                }
                else
                break;
            }
            if(ms2.empty()){
                ok=true;
                cout<<"YES"<<endl;
                cout<<v[n-1]+v[i]<<endl;
                for(auto it:res)
                cout<<it.first<<" "<<it.second<<endl;
                break;
            }
            
        }
        if(ok==false)
        cout<<"NO"<<endl;
        
    }
}