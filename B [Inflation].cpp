#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int ceel(int a,int b){
    return (a+b-1)/b;
}
int32_t main(){
    io;
    int t=1;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      
	  vector<int>v(n);
	  for(int i=0;i<n;i++)
	  cin>>v[i];
	  
	  int prev=v[0];
	  int res=0;
	  int curr=0;
	  vector<int>prefix(n+1,0);
	  prefix[0]=v[0];
	  for(int i=1;i<n;i++){
		  prefix[i]=prefix[i-1]+v[i];
		  int temp=0;
		  int cal=ceel(v[i]*100,k);
		  if(cal>prefix[i-1]){
			  temp=ceel(v[i]*100,k);
			  temp-=prefix[i-1];
			  res+=ceel(v[i]*100,k);
			  res-=prefix[i-1];
			  prefix[i]=prefix[i]+temp;
		  }
	  }
	  cout<<res<<endl;
    }
}