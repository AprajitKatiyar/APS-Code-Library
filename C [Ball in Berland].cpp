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
        //multiset<pair<int,int>>ms;
        int a,b,k;
        cin>>a>>b>>k;
        vector<int>v1(k);
        vector<int>v2(k);
        for(int i=0;i<k;i++)
        cin>>v1[i];
        for(int i=0;i<k;i++)
        cin>>v2[i];
        //int boy[200005]={0};
        //int girl[200005]={0};
        map<int,int>boy,girl;
        int temp=k-1;
        int tot=temp*(temp+1)/2;
        for(int i=0;i<k;i++){
            tot-=boy[v1[i]];
            tot-=girl[v2[i]];
           // tot+=ms.count({v1[i],v2[i]});
            boy[v1[i]]++;
            girl[v2[i]]++;
           // ms.insert({v1[i],v2[i]});
            
        }
        cout<<tot<<endl;
        
        
    }
}