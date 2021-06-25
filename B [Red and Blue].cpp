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
         int n, m, x, sum=0;
         cin >> n;
        vector<int> v1, v2,presum1,presum2;
        for(int i=0;i<n;i++){
            cin >> x; 
            v1.push_back(x);
            sum+=x;
            presum1.push_back(sum);
        }
        
        cin >> m;
        sum=0;
        for(int i=0;i<m;i++){
            cin >> x; 
            v2.push_back(x);
            sum+=x;
            presum2.push_back(sum);
        }
        
        int ans =0;
       int val1=*max_element(presum1.begin(), presum1.end());
       int val2=*max_element(presum2.begin(), presum2.end());
        
        if(val1>0) {
            
        }
        else val1=0;
        if(val2>0) {
            
        }
        else val2=0;
        
        ans+=val1+val2;
        if(ans<=0) 
        cout<< 0 << endl;
        else
        cout << ans << endl;
        }
      
    
        
        
    
}