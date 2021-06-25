#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int cal(int a,int b){
    return (a/__gcd(a,b))*b;
}
int32_t main(){
    io;
    int t=1;
    cin>>t;
    while(t--){
        string s;
        string t;
		cin>>s>>t;
		int a=max(s.size(),t.size());
		int b=min(s.size(),t.size());	
		int val;
		val=cal(a,b);
		vector<char>a1;
		vector<char>a2;
		while(a1.size()<val){
			for(int i=0;i<s.size();i++)
			a1.push_back(s[i]);
		}
		while(a2.size()<val){
			for(int i=0;i<t.size();i++)
			a2.push_back(t[i]);
		}
		if(a1==a2){
			for(int i=0;i<a1.size();i++)
			cout<<a1[i];
			cout<<endl;
		}
		else
			cout<<"-1"<<endl;
         
    }
}