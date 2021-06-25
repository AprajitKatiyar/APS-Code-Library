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
       int sum=0;
       while(n>=10){
           sum+=((n/10)*10);
           n=(n%10)+(n/10);
       }
       cout<<sum+n<<endl;
        
         
    }
}