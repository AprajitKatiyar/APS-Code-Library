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
       string s;
       cin>>s;
       int n=s.length();
       if(n==1){
           cout<<s<<endl;
           continue;
       }
       int ans=0;
       ans+=(9*(n-1));
       int temp=0;
       int x=s[0]-'0';
       ans+=(x-1);
       for(int i=n-1;i>=0;i--){
           temp+=(x*pow(10,i));
       }
        int num=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            int y=s[i]-'0';
            num+=(y*pow(10,i));
        }
        if(num>=temp)
        ans++;
        cout<<ans<<endl;
        
    }
 
 
}