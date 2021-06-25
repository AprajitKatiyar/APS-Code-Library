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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        priority_queue<int>pq;
        string s;
        cin>>s;
        int sum=0;
        s.push_back('.');
       // cout<<s;
        char prev=s[0];
        for(int i=0;i<s.length();i++){
            if(s[i]!=prev){
                int temp=0;
                while(!pq.empty()){
                    sum+=pq.top();
                    pq.pop();
                    temp++;
                    if(temp==k)
                    break;
                }
                while(!pq.empty())
                pq.pop();
                pq.push(v[i]);
                prev=s[i];
            }
            else{
                pq.push(v[i]);
            }
        }
        cout<<sum<<endl;
        
    }
      
}