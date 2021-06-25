#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
bool check(vector<int>arr){
    int sum=0;
        for(auto it:arr)
            sum+=it;
        if(sum%2!=0)
            return false;
        int s=sum/2,n=arr.size();
        int dp[n+1][s+1];
        for(int i=0;i<=n;i++)
            dp[i][0]=1;
        for(int i=1;i<=s;i++)
            dp[0][i]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=s;j++){
                if(arr[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
            }
        }
        if(dp[n][s]==0)
            return false;
        else
            return true;
}
int32_t main(){
    io;
    int t=1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int sum=0,possible=-1;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2!=0)
            possible=i+1;
            sum+=v[i];
        }
        if(sum%2!=0){
            cout<<0<<endl;
            continue;
        }
        if(check(v)==true and possible!=-1){
            cout<<1<<endl;
            cout<<possible<<endl;
        }
        else if(check(v)==true and possible==-1){
            //brute -->every element 
            for(int i=0;i<n;i++){
                int temp=v[i];
                v[i]=0;
                if(check(v)==false){
                    possible=i+1;
                    break;
                }
                else
                v[i]=temp;
            }
            cout<<1<<endl;
            cout<<possible<<endl;
            
        }
        else
        cout<<0<<endl;
        
        
    }
   
      
}