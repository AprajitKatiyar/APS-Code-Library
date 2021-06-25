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
       int n,x;
       cin>>n>>x;
       queue<pair<int,int>>q;
       int sum=0,ele;
       for(int i=0;i<n;i++){
           cin>>ele;
           q.push({ele,1});
       }
       int ok=true;
       while(!q.empty()){
           int curr=q.front().first;
           int times=q.front().second;
           q.pop();
           sum+=(curr*times);
           if(curr%x!=0)
           ok=false;
           if(curr%x==0 and ok==true){
               //sum+=(curr+curr);
               q.push({curr/x,(x*times)});
           }
        //   else
        //   break;
       }
       cout<<sum<<endl;
      
       
    }
         
    
      
    
        
        
    
}