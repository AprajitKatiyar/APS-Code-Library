#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
vector<int>v;
int32_t main(){
    io;
    int t=1;
    cin>>t;
    for(int i=0;i<10;i++)
    v.push_back(i);
    while(t--){
        int n;
        cin>>n;
		if(n==1)
			cout<<"9"<<endl;
		
		else if(n==2)
			cout<<"98"<<endl;
		else{
			cout<<"989";
			n=n-3;
			for(int i=0;i<n;i++)
				cout<<v[i%10];
			
			cout<<endl;
		}
    }
}