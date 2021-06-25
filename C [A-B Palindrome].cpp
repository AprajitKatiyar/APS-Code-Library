#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    //FOR FUCK'S SAKE DON'T FUCK UP 
    io;
    int t=1;
    cin>>t;
    while(t--){
       int a,b;
       cin>>a>>b;
       string s;
       cin>>s;
       int n=a+b;
       vector<pair<int,int>>v;
       bool ok=true;
       for(int i=0;i<n;i++){
           if((s[i]!='?' and s[n-1-i]!='?') and s[i]!=s[n-1-i]){
               ok=false;
               break;
           }
           if(s[i]=='0')
           a--;
           if(s[i]=='1')
           b--;
       }
       if(ok==false){
           cout<<-1<<endl;
           continue;
       }
       ok=true;
       for(int i=0;i<n/2;i++){
           int req;
           if(s[i]=='?' and s[n-1-i]!='?'){
           req=s[n-1-i]-'0';
           if(req==0){
               if(a<=0){
               ok=false;
               break;
               }
               else{
               s[i]='0';
               a--;
              }
           }
           if(req==1){
               if(b<=0){
               ok=false;
               break;
               }
               else{
               s[i]='1';
               b--;
              }
           }
           
           }
           else if(s[i]!='?' and s[n-1-i]=='?'){
           req=s[i]-'0';
            if(req==0){
               if(a<=0){
               ok=false;
               break;
               }
               else{
               s[n-1-i]='0';
               a--;
              }
           }
           if(req==1){
               if(b<=0){
               ok=false;
               break;
               }
               else{
               s[n-1-i]='1';
               b--;
              }
           }
           
           }
           else if(s[i]=='?' and s[n-1-i]=='?'){
               v.push_back({i,n-1-i});
           }
           
               
       }
       if(ok==false){
           cout<<-1<<endl;
           continue;;
       }
       if(v.size()!=0){
           for(auto it:v){
               if(a<2 and b<2){
                   ok=false;
                   break;
               }
               else if(a>=2){
                   s[it.first]='0';
                   s[it.second]='0';
                   a-=2;
               }
               else if(b>=2){
                   s[it.first]='1';
                   s[it.second]='1';
                   b-=2;
               }
               
           }
       }
       if(ok==false){
           cout<<-1<<endl;
           continue;
       }
       if(n%2!=0 and s[n/2]=='?'){
           if(a==1 and b==0){
               s[n/2]='0';
               a--;
           }
           else if(a==0 and b==1){
               s[n/2]='1';
               b--;
           }
           else{
               ok=false;
           }
       }
       if(ok==false){
           cout<<-1<<endl;
           continue;
       }
       if(a!=0 or b!=0)
       ok=false;
       
       if(ok==false){
           cout<<-1<<endl;
           continue;
       }
       cout<<s<<endl;
       
       
        
    }
 
 
}