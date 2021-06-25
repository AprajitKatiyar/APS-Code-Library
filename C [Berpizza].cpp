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
        unordered_map<int,priority_queue<int,vector<int>,greater<int>>>mp2;
        queue<pair<int,int>>q;
        unordered_map<int,int>mp1;
        priority_queue<pair<int,int>>pq;
        int queries;
        cin>>queries;
        int count=0;
        for(int i=0;i<queries;i++){
            int x;
            cin>>x;
            if(x==1){
                int y;
                cin>>y;
                count++;
                q.push({y,count});
                pq.push({y,count});
                mp2[y].push(count);
            }
            else if(x==2){
                while(mp1[q.front().second]==1)
                q.pop();
                cout<<q.front().second<<" ";
                mp1[q.front().second]=1;
            }
            else if(x==3){
                while(mp1[pq.top().second]==1)
                pq.pop();
                cout<<mp2[pq.top().first].top()<<" ";
                mp1[mp2[pq.top().first].top()]=1;
                mp2[pq.top().first].pop();
                
            }
        }
        
        
         
    }
}