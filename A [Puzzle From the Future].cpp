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
        string s;
        cin>>s;
        int prev=-1;
        string res="";
        for(int i=0;i<n;i++){
            int x=s[i]-'0';
            if(x+1!=prev){
                prev=x+1;
                cout<<1;
                //res.push_back('1');
            }
            else{
                prev=x+0;
                cout<<0;
                //res.push_back('0');
            }
        }
        cout<<endl;
        
         
    }
}