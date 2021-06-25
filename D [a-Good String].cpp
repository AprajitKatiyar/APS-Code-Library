#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
string s;
int calculate(int l,int r,char c){
    if(l==r){
        if(s[l]==c)
        return 0;
        else
        return 1;
    }
    int first=0,last=0;
    int mid=(l+r)/2;
    for(int i=l;i<=mid;i++){
        if(s[i]!=c)
        first++;
    }
    for(int i=mid+1;i<=r;i++){
        if(s[i]!=c)
        last++;
    }
    return min(first+calculate(mid+1,r,c+1),calculate(l,mid,c+1)+last);
}
int32_t main(){
    io;
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin>>s;
        int ans=calculate(0,n-1,'a');
        cout<<ans<<endl;
        
        
        
         
    }
}