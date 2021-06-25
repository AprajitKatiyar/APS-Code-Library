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
        int n,x;
        cin>>n>>x;
        vector<int>v;
        int ele,sum=0;
        for(int i=0;i<n;i++){
            cin>>ele;
            if(ele>=x)
            sum++;
            else
            v.push_back(ele);
        }
        sort(v.begin(),v.end(),greater<int>());
        int count=0,minimum=LLONG_MAX;
        if(v.size()!=0){
        for(int i=0;i<v.size();i++){
            minimum=min(minimum,v[i]);
            count++;
            if(minimum*count>=x){
                sum++;
                minimum=LLONG_MAX;
                count=0;
            }
        }
        }
        cout<<sum<<endl;
    }
}