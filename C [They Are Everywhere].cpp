#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
bool check(string s,int req,int mid){
    int temp=0;
    map<char,int>mp;
    for(int i=0;i<s.length();i++){
        if(mp[s[i]]==0)
        temp++;
        mp[s[i]]++;
        if(i<mid-1)
        continue;
        if(mp.size()==req)
        return true;
        if(mp[s[i-mid+1]]==1)
        mp.erase(s[i-mid+1]);
        else
        mp[s[i-mid+1]]--;
    }
    return false;
}
int32_t main(){
    //FOR FUCK'S SAKE DON'T FUCK UP 
    io;
    int t=1;
   // cin>>t;
    while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       set<int>st;
       for(auto it:s)
       st.insert(it);
       if(st.size()==1){
           cout<<1<<endl;
           continue;
       }
       int req=st.size();
       int l=1,r=n,ans;
       while(l<=r){
           int mid=l+(r-l)/2;
           if(check(s,req,mid)==true){
               ans=mid;
               r=mid-1;
           }
           else
           l=mid+1;
       }
       cout<<ans<<endl;
       
    }
 
 
}