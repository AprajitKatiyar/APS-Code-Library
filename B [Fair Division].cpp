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
       int x,sum=0;
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++){
           cin>>x;
           sum+=x;
           mp[x]++;
       }
       if(sum%2!=0){
           cout<<"NO"<<endl;
           continue;
       }
       int half=sum/2;
       int temp=half;
       bool ok=false;
       while(temp>=0){
           if(mp[1]>=temp and mp[2]>=(half-temp)/2){
               ok=true;
               break;
           }
           temp-=2;
       }
       if(ok==true)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
      
       
    }
         
    
      
    
        
        
    
}