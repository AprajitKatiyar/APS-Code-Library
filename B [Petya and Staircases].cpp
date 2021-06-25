#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    io;
    int t=1;
    //cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
       vector<int>v(m);
       bool ok=true;
        for(int i=0;i<m;i++){
        cin>>v[i];
        if(v[i]==1 or v[i]==n)
        ok=false;
        }
        if(ok==false){
            cout<<"NO"<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        int prev;
        if(v.size()!=0)
         prev=v[0]-1;
        int count=0;
        //int maximum=LLONG_MIN;
        ok=true;
        for(int i=0;i<m;i++){
            if(v[i]==prev+1){
            count++;
            if(count==3){
                ok=false;
                break;
            }
            }
            else{
                //cout<<count<<endl;
                //maximum=max(maximum,count);
                count=1;
            }
            prev=v[i];
        }
        //cout<<count;
        // if(maximum>=3)
        // cout<<"NO"<<endl;
        // else
        // cout<<"YES"<<endl;
        if(ok==true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
        
    }
}