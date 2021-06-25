#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
vector<int>v;
void factors(int x){
    for(int i = 2; i * i <= x; i++){
		if(x % i == 0){       
			int cnt = 0;
			while(x % i == 0){
			    v.push_back(i);
				cnt++;
				x /= i;
			}
			//v.push_back({i,cnt});
		}
	}
	if(x != 1){
		//v.push_back({x,1});
		v.push_back(x);
	}
}
int32_t main(){
    io;
    int t=1;
    cin>>t;
    while(t--){
        v.clear();
        int n;
        cin>>n;
        int temp=n;
        factors(temp);
        sort(v.begin(),v.end());
        unordered_map<int,int>mp;
        if(v.size()==1){
            cout<<"NO"<<endl;
            continue;
        }
        int a=v[0];
        mp[v[0]]=1;
        int b=1;
        for(int i=1;i<v.size();i++){
            b*=v[i];
            if(mp[b]==0)
            break;
        }
        mp[b]=1;
        int c=n/(a*b);
        if(mp[c]==0 and c!=1){
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else
        cout<<"NO"<<endl;
        
        
    }
}