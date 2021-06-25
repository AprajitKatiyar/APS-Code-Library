#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int n,cnt=0;
vector<int> v[100005];
vector<int>in(100005,0);
vector<int>res;
set<int>s;
bool kahns(){
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(in[i]==0)
        q.push(i);
    }
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        res.push_back(curr);
        for(auto child:v[curr]){
            in[child]--;
            if(in[child]==0)
            q.push(child);
        }
    }
    return res.size()==n;
}
int32_t main(){
    io;
    int t=1;
    //cin>>t;
    while(t--){
      int m,k;
      cin>>n>>m>>k;
     
      map<string,int>mp;
      for(int i=0;i<n;i++){
          string s;
          cin>>s;
          mp[s]=i+1;
      }
      int x;
      bool ok;
      for(int i=0;i<m;i++){
          ok=false;
          string temp;
          cin>>temp;
          cin>>x;
          for(int j=0;j<(1<<k);j++){
              string combi(k,'_');
              for(int l=0;l<k;l++){
                  if((j&(1<<l))!=0)
                      combi[k-1-l]=temp[k-1-l];
                  else
                      combi[k-1-l]='_';
              }
              //cout<<combi<<endl;
              if(mp[combi]!=0){
                  //s.insert(x);
                  if(mp[combi]!=x){
                  v[x].push_back(mp[combi]);
                  in[mp[combi]]++;
                  //s.insert(mp[combi]);
                  }
                  if(mp[combi]==x){
                  ok=true;
                  continue;
                  }
                  //cnt++;
              }
              
          }
          if(ok==false)
              break;
      }
      //cnt+=m;
      if(ok==false){
          cout<<"NO"<<endl;
          continue;
      }
      if(kahns()){
          cout<<"YES"<<endl;
          for(auto it:res)
          cout<<it<<" ";
          cout<<endl;
      }
      else
      cout<<"NO"<<endl;
    // for(auto it:s)
    // cout<<it<<" ";
      
    }
}