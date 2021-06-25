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
       int n;
       cin>>n;
       vector<int>v(2*n);
       for(int i=0;i<2*n;i++)
       cin>>v[i];
       sort(v.begin(),v.end());
       for(int i=0;i<n;i++){
           cout<<v[i]<<" "<<v[(2*n)-1-i]<<" ";
       }
       cout<<endl;
       
       
        
    }
 
 
}