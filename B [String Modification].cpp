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
        vector<pair<string,int>>res;
        res.push_back({s,1});
        for(int i=2;i<=s.length();i++){
            string temp1=s.substr(i-1,n-i+1);
            string temp2=s.substr(0,i-1);
            if((i%2!=0 and n%2!=0) or (i%2==0 and n%2==0))
            reverse(temp2.begin(),temp2.end());
            temp1+=temp2;
            res.push_back({temp1,i});
        }
        sort(res.begin(),res.end());
        cout<<res[0].first<<endl;
        cout<<res[0].second<<endl;
        
    }
      
}