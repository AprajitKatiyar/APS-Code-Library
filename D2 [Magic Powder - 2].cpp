#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int n;
vector<int>a;
vector<int>b;
bool check(int mid,int k){
    for(int i=0;i<n;i++){
        if(b[i]>=(mid*a[i]))
        continue;
        int req=(mid*a[i])-b[i];
        if(k<req)
        return false;
        else
        k-=req;
    }
    return true;
}
int32_t main(){
    //FOR FUCK'S SAKE DON'T FUCK UP 
    io;
    int t=1;
   // cin>>t;
    while(t--){
       int k;
       cin>>n>>k;
       int x;
       for(int i=0;i<n;i++){
           cin>>x;
           a.push_back(x);
       }
       for(int i=0;i<n;i++){
           cin>>x;
           b.push_back(x);
       }
       int l=0,r=2e9+10,ans;
       while(l<=r){
           int mid=l+(r-l)/2;
           if(check(mid,k)==true){
               ans=mid;
               l=mid+1;
           }
           else
           r=mid-1;
       }
       cout<<ans<<endl;
       
    }
 
 
}