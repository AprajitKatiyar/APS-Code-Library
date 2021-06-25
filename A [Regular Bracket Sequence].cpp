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
        string s;
        cin>>s;
        
        if(s.length()%2!=0)
        cout<<"NO"<<endl;
        else{
            char temp;
            for(int i=0;i<s.length();i++){
                
                if(s[i]!='?'){
                    temp=s[i];
                    break;
                }
            }
            if(temp=='(')
            cout<<"YES"<<endl;
            else if(temp==')'){
                if(s[0]=='?' and s[s.length()-1]=='?')
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
        }
      
    }
        
        
    
}