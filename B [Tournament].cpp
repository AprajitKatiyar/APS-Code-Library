#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    //FOR FUCK'S SAKE DON'T FUCK UP 
    io;
    int t=1;
   // cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b;
        vector<int>v[n+5];
        vector<int>in(n+5,0);
        set<pair<int,int>>s;
        int lim=n*(n-1)/2;
        lim--;
        //cout<<lim;
        while(lim--){
            //cout<<"yes"<<" ";
            cin>>a>>b;
            v[a].push_back(b);
            in[b]++;
            s.insert({a,b});
        }
        queue<int>q;
        for(int i=1;i<=n;i++){
            if(in[i]==0)
            q.push(i);
        }
        vector<int>res;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            res.push_back(curr);
            for(auto it:v[curr]){
                in[it]--;
                if(in[it]==0)
                q.push(it);
            }
        }
        int k,l;
        bool ok=false;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if((s.find({i,j})==s.end()) and (s.find({j,i})==s.end())){
                    k=i;
                    l=j;
                    ok=true;
                    break;
                }
            }
            if(ok)
            break;
        }
        int posk,posl;
        for(int i=0;i<res.size();i++){
            if(res[i]==k)
            posk=i;
            if(res[i]==l)
            posl=i;
        }
        if(posk<posl)
        cout<<k<<" "<<l<<endl;
        else
        cout<<l<<" "<<k<<endl;
        
        
       
    }
 
 
}