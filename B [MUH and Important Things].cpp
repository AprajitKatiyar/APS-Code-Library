#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    io;
    int t=1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        map<int,int>mp;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            mp[x]++;
            v.push_back({x,i+1});
        }
        sort(v.begin(),v.end());
        int three=-1;
        vector<int>two;
        set<int>s;
        for(auto it:mp){
            if(it.second>=3){
                three=it.first;
                break;
            }
            else if(it.second==2){
            two.push_back(it.first);
            s.insert(it.first);
            if(two.size()==2)
            break;
            
            }
        }
        if(three==-1){
            if(two.size()<2)
            cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                int vis[100000]={0};
                int j=0;
                for(auto it:v)
                cout<<it.second<<" ";
                cout<<endl;
                int f=-1;
                for(int i=0;i<v.size();i++){
                    if(s.find(v[i].first)!=s.end() and vis[v[i].first]==0 and f==-1){
                        cout<<v[i+1].second<<" "<<v[i].second<<" ";
                        vis[v[i].first]=1;
                        f=0;
                        i++;
                        
                    }
                    else
                    cout<<v[i].second<<" ";
                }
                cout<<endl;
                f=-1;
                for(int i=0;i<v.size();i++){
                    if(s.find(v[i].first)!=s.end() and vis[v[i].first]==0 and f==-1){
                        cout<<v[i+1].second<<" "<<v[i].second<<" ";
                        vis[v[i].first]=1;
                        f=0;
                        i++;
                        
                    }
                    else
                    cout<<v[i].second<<" ";
                }
                cout<<endl;
                
            }
        }
        else{
            cout<<"YES"<<endl;
            for(auto it:v)
            cout<<it.second<<" ";
            cout<<endl;
            int vis[100000]={0};
            for(int i=0;i<v.size();i++){
                if(v[i].first==three and vis[three]==0){
                    cout<<v[i].second<<" "<<v[i+2].second<<" "<<v[i+1].second<<" ";
                    vis[three]=1;
                    i+=2;
                }
                else
                cout<<v[i].second<<" ";
            }
            cout<<endl;
            vis[three]=0;
            for(int i=0;i<v.size();i++){
                if(v[i].first==three and vis[three]==0){
                    cout<<v[i+1].second<<" "<<v[i].second<<" "<<v[i+2].second<<" ";
                    vis[three]=1;
                    i+=2;
                }
                else
                cout<<v[i].second<<" ";
            }
            cout<<endl;
        }
    }
         
    
      
    
        
        
    
}