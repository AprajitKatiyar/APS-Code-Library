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
       int w,h,n;
       cin>>w>>h>>n;
       int count1=1,count2=1;
       while(w%2==0){
           w/=2;
           count1*=2;
       }
       while(h%2==0){
           h/=2;
           count2*=2;
       }
       if((count1*count2)>=n)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
    }
         
    
      
    
        
        
    
}