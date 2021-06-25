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
        cin>>n;
        string a,b;
        cin>>a;
        cin>>b;
        bool ok=true;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
            ok=false;
            break;
            }
        }
        if(ok==false){
            cout<<"-1"<<endl;
            continue;
        }
        int ans=0;
        for(char c='a';c<='t';c++){
            char minimum='z';
            vector<int>pos;
            for(int i=0;i<n;i++){
                if(a[i]==c and a[i]!=b[i]){
                    minimum=min(minimum,b[i]);
                    pos.push_back(i);
                    
                }
            }
            if(pos.size()!=0){
            ans++;
            for(auto it:pos)
            a[it]=minimum;
            
            }
        }
        cout<<ans<<endl;
        
    }
}