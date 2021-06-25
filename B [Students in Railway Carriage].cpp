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
       int n,a,b;
       cin>>n>>a>>b;
       string s;
       cin>>s;
       s.push_back('*');
       int pos=-1;
       if(b>a)
       swap(a,b);
       int temp1=a,temp2=b;
       for(int i=0;i<n+1;i++){
           if(s[i]=='*'){
               if(i-pos>1){
                   if(temp2>temp1)
                   swap(temp1,temp2);
               int tot=i-pos-1;
               int req1=(tot+1)/2;
               int req2=tot-req1;
               temp1-=min(temp1,req1);
               temp2-=min(temp2,req2);
               }
               pos=i;
               
           }
       }
       cout<<(a-temp1)+(b-temp2)<<endl;
      
       
    }
         
    
      
    
        
        
    
}