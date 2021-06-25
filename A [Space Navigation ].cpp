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
       int x,y;
       cin>>x>>y;
       string s;
       cin>>s;
       int left=0,right=0,up=0,down=0;
       for(int i=0;i<s.length();i++){
           if(s[i]=='L')
           left++;
           else if(s[i]=='R')
           right++;
           else if(s[i]=='D')
           down++;
           else
           up++;
       }
       if(x>=0 and y>=0){
           if(right>=x and up>=y)
           cout<<"YES"<<endl;
           else
           cout<<"NO"<<endl;
       }
       else if(x<0 and y>=0){
           if(left>=abs(x) and up>=y)
           cout<<"YES"<<endl;
           else
           cout<<"NO"<<endl;
       }
       else if(x<0 and y<0){
           if(down>=abs(y) and left>=abs(x))
           cout<<"YES"<<endl;
           else
           cout<<"NO"<<endl;
       }
       else if(x>=0 and y<0){
           if(down>=abs(y) and right>=x)
           cout<<"YES"<<endl;
           else
           cout<<"NO"<<endl;
       }
    }
      
}