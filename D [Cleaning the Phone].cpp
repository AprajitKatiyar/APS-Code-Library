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
       int n,m;
       cin>>n>>m;
       vector<int>v(n);
       vector<int>imp,reg;
       for(int i=0;i<n;i++)
       cin>>v[i];
       int x;
       for(int i=0;i<n;i++){
           cin>>x;
           if(x==1)
           reg.push_back(v[i]);
           else
           imp.push_back(v[i]);
       }
       sort(reg.begin(),reg.end(),greater<int>());
       sort(imp.begin(),imp.end(),greater<int>());
       for(int i=1;i<imp.size();i++)
       imp[i]=imp[i-1]+imp[i];
       for(int i=1;i<reg.size();i++)
       reg[i]=reg[i-1]+reg[i];
       
       int minimum=LLONG_MAX;
       for(int i=0;i<=imp.size();i++){
           int cost=2*i;
           int curr,temp;
           if(i==0)
           curr=0;
           else
           curr=imp[i-1];
           if(curr>=m)
           minimum=min(minimum,cost);
           else{
               temp=m-curr;
               int pos=lower_bound(reg.begin(),reg.end(),temp)-reg.begin()+1;
               if(pos<=reg.size())
               minimum=min(minimum,cost+pos);
           }
           
           
       }
       if(minimum==LLONG_MAX)
       cout<<"-1"<<endl;
       else
       cout<<minimum<<endl;
    }
}