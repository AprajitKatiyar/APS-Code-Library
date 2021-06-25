#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007

bool check(string s,string temp){
    int j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==temp[j]){
            j++;
        
        }
        
    }
    return j==temp.size();
}
int32_t main(){
    io;
    int t=1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        int res=-1;
        string s=to_string(n);
        for(int i=sqrt(n);i>=1;i--){
            
            string temp=to_string(i*i);
            if(check(s,temp)==true){
                res=s.size()-temp.size();
                break;
            }
            
        }
        cout<<res;
    }
         
    
      
    
        
        
    
}