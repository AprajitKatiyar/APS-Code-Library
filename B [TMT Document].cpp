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
       string s;
       cin>>s;
       int temp_m=0,temp_t=0;
       for(int i=0;i<n;i++){
           if(s[i]=='M')
           temp_m++;
           else
           temp_t++;
       }
       if(temp_m!=(n/3) or temp_t!=((n*2)/3)){
           cout<<"NO"<<endl;
           continue;
       }
       int count_m=0,count_t=0;
       bool ok=true;
       for(int i=0;i<n;i++){
           if(s[i]=='T')
           count_t++;
           else if(s[i]=='M'){
               count_m++;
               if(count_m>count_t){
                   ok=false;
                   break;
               }
           }
       }
       if(ok==false){
           cout<<"NO"<<endl;
           continue;
       }
       reverse(s.begin(),s.end());
       count_m=0,count_t=0;
        for(int i=0;i<n;i++){
           if(s[i]=='T')
           count_t++;
           else if(s[i]=='M'){
               count_m++;
               if(count_m>count_t){
                   ok=false;
                   break;
               }
           }
       }
       if(ok==false)
       cout<<"NO"<<endl;
       else
       cout<<"YES"<<endl;
    }
   
      
}