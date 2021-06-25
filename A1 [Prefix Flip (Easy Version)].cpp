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
        string a,b;
        cin>>a>>b;
        int sum=0;
        vector<int>res;
        string temp="";
        for(int i=n-1;i>=0;i--){
            if(a[i]!=b[i]){
                if(b[i]==a[0]){
                   res.push_back(1);
                   if(a[0]=='1')
                   a[0]='0';
                   else
                   a[0]='1';
                  
                }
                //else{
                    res.push_back(i+1);
                    string temp="";
                    for(int j=i;j>=0;j--){
                        char c=a[j];
                        if(c=='1')
                        c='0';
                        else
                        c='1';
                        temp.push_back(c);
                        //cout<<a[j]<<endl;
                    }
                    for(int j=0;j<=i;j++){
                        a[j]=temp[j];
                    }
                    
                //}
            }
        }
        cout<<res.size()<<" ";
        if(res.size()!=0){
        for(auto it:res)
        cout<<it<<" ";
        }
        cout<<endl;
        
    }
}