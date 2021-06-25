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
        string s;
        cin>>s;
        int count=0;
        char prev='a';
        for(int i=0;i<s.length();i++){
            if(s[i]<=prev){
                count++;
                s[i]=prev;
                if(prev=='z')
                break;
                prev++;
                
            }
        }
        if(count<26)
        cout<<-1<<endl;
        else
        cout<<s<<endl;
        
    }
      
}