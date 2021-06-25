#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int n;
int arr[300005];
int check(int i){
    if(i==0 or i==n-1)
    return 0;
    else if((arr[i]>arr[i-1] and arr[i]>arr[i+1]) or (arr[i]<arr[i-1] and arr[i]<arr[i+1]))
    return 1;
    else
    return 0;
}
int32_t main(){
    io;
    int t=1;
    cin>>t;
    while(t--){
        cin>>n;
        
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int count=0;
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1] and arr[i]>arr[i+1])
            count++;
            
            else if(arr[i]<arr[i-1] and arr[i]<arr[i+1])
            count++;
            
        }
        int minimum=count;
        for(int i=1;i<n-1;i++){
            int curr=arr[i];
            int temp=count;
            int previous=check(i-1)+check(i)+check(i+1);
            arr[i]=arr[i-1];
            int now=check(i-1)+check(i)+check(i+1);
            temp-=previous;
            temp+=now;
            minimum=min(minimum,temp);
            temp=count;
            arr[i]=arr[i+1];
            now=check(i-1)+check(i)+check(i+1);
            temp-=previous;
            temp+=now;
            minimum=min(minimum,temp);
            arr[i]=curr;
        }
        cout<<minimum<<endl;
        
        
    }
}