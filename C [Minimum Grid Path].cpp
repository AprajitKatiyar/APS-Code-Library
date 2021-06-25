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
       vector<int>c(n);
       for(int i=0;i<n;i++)
       cin>>c[i];
       int minimum=LLONG_MAX,prefix=0;
       priority_queue<int,vector<int>,greater<int>>odd,even;
       for(int i=0;i<n;i++){
           prefix+=c[i];
           if(i%2==0)
           even.push(c[i]);
           else
           odd.push(c[i]);
           if(even.size()!=0 and odd.size()!=0){
               int temp1=n-even.size()+1;
               int temp2=n-odd.size()+1;
           minimum=min(minimum,even.top()*temp1+odd.top()*temp2+(prefix-even.top()-odd.top()));
           }
       }
       cout<<minimum<<endl;
        
    }
      
}