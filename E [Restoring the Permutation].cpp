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
        vector<int>q(n);
        for(int i=0;i<n;i++)
        cin>>q[i];
        int prev=0;
        vector<int>first(n,0);
        for(int i=0;i<n;i++){
            if(q[i]!=prev){
                first[i]=q[i];
                prev=q[i];
            }
        }
        
        //test
        //for(int i=0;i<n;i++)
        //cout<<first[i]<<" ";
        //cout<<endl;
        //test
        
        set<int>s;
        for(int i=1;i<=n+1;i++)
        s.insert(i);
        for(int i=0;i<n-1;i++){
            if(q[i]==q[i+1]){
                auto it=s.begin();
                first[i+1]=*it;
                s.erase(it);
            }
            else{
                s.erase(q[i]);
            }
        }
        s.clear();
        for(int i=1;i<=n+1;i++)
        s.insert(i);
        prev=0;
        vector<int>second(n,0);
        for(int i=0;i<n;i++){
            if(q[i]!=prev){
                second[i]=q[i];
                prev=q[i];
            }
        }
        
        //test
        //for(int i=0;i<n;i++)
        //cout<<second[i]<<" ";
        //cout<<endl;
        //test
        
        for(int i=0;i<n-1;i++){
            if(q[i]==q[i+1]){
                auto it=s.lower_bound(q[i]);
                it--;
                second[i+1]=*it;
                s.erase(it);
            }
            else
            s.erase(q[i]);
        }
        for(int i=0;i<n;i++)
        cout<<first[i]<<" ";
        cout<<endl;
        for(int i=0;i<n;i++)
        cout<<second[i]<<" ";
        cout<<endl;
        
    }   
}