#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    //FOR FUCK'S SAKE DON'T FUCK UP
    io;
    int t=1;
   // cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<string>v;
        for(int i=1;i<=min(k,n);i++){
            string x=s.substr(0,i);
            v.push_back(x);
        }
        set<string>st;
        for(auto it:v){
            string temp="";
            while(temp.size()<k)
            temp+=it;
            while(temp.size()>k)
            temp.pop_back();
            st.insert(temp);
        }
        auto it=st.begin();
        cout<<*it<<endl;
        
    }
 
 
}