#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    //FOR FUCK'S SAKE DON'T FUCK UP 
    io;
    int t=1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int start=n;
        vector<int>v(10);
        for(int i=1;i<=9;i++)
        cin>>v[i];
        for(int i=0;i<n;i++){
            if((s[i]-'0')<v[s[i]-'0']){
                start=i;
                break;
            }
        }
        for(int i=start;i<n;i++){
            if((s[i]-'0')<v[s[i]-'0']){
            s[i]=v[s[i]-'0']+'0';
            }
            else if((s[i]-'0')>v[s[i]-'0'])
            break;
        }
        cout<<s<<endl;
    }
 
 
}