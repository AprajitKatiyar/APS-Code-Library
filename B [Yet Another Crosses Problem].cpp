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
       int n,m;
       cin>>n>>m;
       string s[n];
       for(int i=0;i<n;i++)
       cin>>s[i];
       int cnt=0;
       int pre_row[n][m],pre_col[n][m];
       
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(s[i][j]=='*')
               cnt++;
               pre_row[i][j]=cnt;
           }
       }
       cnt=0;
       for(int j=0;j<m;j++){
           for(int i=0;i<n;i++){
               if(s[i][j]=='*')
               cnt++;
               pre_col[i][j]=cnt;
           }
       }
       
    //   for(int i=0;i<n;i++){
    //       tot=pre_row[i][m-1]-pre_row[i][0];
    //       if(s[i][0]=='*')
    //       tot++;
    //       minimum1=min(minimum1,m-tot);
    //   }
    //   for(int j=0;j<m;j++){
    //       tot=pre_col[n-1][j]-pre_col[0][j];
    //       if(s[0][j]=='*')
    //       tot++;
    //       minimum2=min(minimum2,n-tot);
    //   }
    int minimum=LLONG_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int tot1=pre_row[i][m-1]-pre_row[i][0];
               if(s[i][0]=='*')
               tot1++;
            int tot2=pre_col[n-1][j]-pre_col[0][j];
               if(s[0][j]=='*')
               tot2++; 
            int tot=(n-tot1)+(m-tot2);
            if(s[i][j]=='.')
            tot--;
            minimum=min(minimum,tot);
            
        }
    }
       cout<<minimum<<endl;
      
       
    }
         
    
      
    
        
        
    
}