#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
double Area(double dX0, double dY0, double dX1, double dY1, double dX2, double dY2)
{
    double dArea = ((dX1 - dX0)*(dY2 - dY0) - (dX2 - dX0)*(dY1 - dY0))/2.0;
    return (dArea > 0.0) ? dArea : -dArea;
}
int32_t main(){
    io;
    int t=1;
    cin>>t;
    while(t--){
        set<double>s;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                s.insert(Area(0.0,1.0,double(arr[i]),0.0,double(arr[j]),0.0));
            }
        }
        cout<<s.size()<<endl;
        
         
    }
      
    
        
        
    
}