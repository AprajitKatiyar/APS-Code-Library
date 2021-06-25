#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    io;
    int t=1;
   // cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n/2);
        for(int i=0;i<n/2;i++)
        cin>>b[i];
        int l=0,r=b[0];
        //cout<<l<<" "<<r<<endl;
        for(int i=0;i<n/2;i++){ //l=0 r=2
            if(b[i]-l>r){
                a[n-1-i]=r;
                a[i]=(b[i]-r);
            }
            else{
            a[i]=l;
            a[n-1-i]=b[i]-l;
            }
            l=a[i];
            r=a[n-1-i];
            //cout<<l<<" "<<r<<endl;
        }
        for(auto it:a)
        cout<<it<<" ";
    }
      
}