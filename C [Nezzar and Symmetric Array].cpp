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
        map<int,int>mp;
        int x;
        for(int i=0;i<2*n;i++){
            cin>>x;
            mp[x]++;
        }
        if(mp.size()!=n){
            cout<<"NO"<<endl;
            continue;
        }
        bool ok=true;
        set<int,greater<int>>s;
        for(auto it:mp){
            if(it.first%2!=0 or it.second!=2){
                ok=false;
                break;
            }
            s.insert(it.first);
        }
        if(ok==false){
            cout<<"NO"<<endl;
            continue;
        }
        int sum=0,i=n;
        ok=true;
        for(auto it:s){
            if((it-sum)==0 or (it-sum)%i!=0){
                ok=false;
                break;
            }
            else if((it-sum)<2){
                ok=false;
                break;
            }
            else{
                sum+=((it-sum)/i);
                if(sum%2!=0){
                    ok=false;
                    break;
                }
                i--;
            }
        }
        if(ok==true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
      
}