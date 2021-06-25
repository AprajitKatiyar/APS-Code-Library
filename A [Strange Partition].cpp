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
       vector<int> v;
       int n, sum=0, k; 
       cin >> n>> k;
       int x;
       for(int i=0;i<n;i++){
           cin >> x;
           v.push_back(x);
           sum+=x;
       }
       int val=0;
       for(int i=0;i<n;i++)
        val +=((v[i]+k-1)/k);
       
       cout<< (sum+k-1)/k<<" "<< val<< endl; 
      
       
    }
         
    
      
    
        
        
    
}