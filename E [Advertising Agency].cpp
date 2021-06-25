#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int power(int x, int y, int p)
{
    int res = 1; // Initialize result
 
    x = x % p; // Update x if it is more than or
    // equal to p
 
    while (y > 0) 
    {
     
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
 
// Returns n^(-1) mod p
int modInverse(int n,  int p)
{
    return power(n, p - 2, p);
}
int ncr(int n,int r, int p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;
 
    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    int fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
 
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}
int32_t main(){
    io;
    int t=1;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       unordered_map<int,int>mp;
       vector<int>v(n);
       for(int i=0;i<n;i++){
       cin>>v[i];
       mp[v[i]]++;
      }
       sort(v.begin(),v.end(),greater<int>());
       set<int,greater<int>>s;
       for(int i=0;i<k;i++)
        s.insert(v[i]);
       auto it=s.end();
       it--;
       int last=*it;
       int count=0;
       for(int i=0;i<k;i++){
           if(v[i]==last)
           count++;
       }
       int x=mp[last];
       int ans=ncr(x,count,mod)%mod;
       ans+=mod;
       ans%=mod;
       ans+=mod;
       ans%=mod;
       cout<<ans<<endl;
        
        
       
        
        
    }
}