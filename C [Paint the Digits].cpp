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
        string s;
        cin>>s;
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
        int x=s[i]-'0';
        v.push_back(x);
        //cout<<x;
        }
        sort(v.begin(),v.end());
        int j=0;
        for(int i=0;i<n;i++){
            if((s[i]-'0')==v[j]){
                mp[i]=1;
                j++;
            }
        }
        //cout<<v.size();
        // for(auto &it:v)
        // cout<<it;
        //cout<<j<<endl;
        // if(j==v.size()){
        //     for(int i=0;i<n;i++)
        //     cout<<1;
        //     cout<<endl;
        //     continue;
        // }
        bool ok=true;
        vector<int>v2;
        for(int i=0;i<n;i++){
            if(mp[i]!=1)
            v2.push_back(s[i]-'0');
        }
        sort(v2.begin(),v2.end());
        j=0;
        for(int i=0;i<n;i++){
            if(mp[i]!=1 and (s[i]-'0')==v2[j])
            j++;
            else if(mp[i]!=1 and (s[i]-'0'!=v2[j])){
                ok=false;
                break;
            }
        }
        //if(j!=v.size())
        //ok=false;
        //cout<<j<<endl;
        if(ok==false)
        cout<<"-"<<endl;
        else{
            for(int i=0;i<n;i++){
                if(mp[i]==1)
                cout<<1;
                else
                cout<<2;
            }
            cout<<endl;
        }
        
        
    }
}