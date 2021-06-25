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
        int sum=0; 
        cin >>n;
       if(n<2020) {
           cout<< "NO"<<endl; 
           continue;
       }    
       else{
           while(n>=2020){
                n-=2020;
                sum++;
            }
            if(sum>=n)
            cout<< "YES"<<endl;
            else 
            cout<< "NO"<<endl;
        
        }
    }
}