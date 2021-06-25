#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
bool check(string str1,string str2){
   int pos = 0;
   int index;
   while((index = str1.find(str2, pos)) != string::npos) {
      return true;
      pos = index + 1;
   }
   return false;
}
int32_t main(){
    //FOR FUCK'S SAKE DON'T FUCK UP 
    io;
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>odd;
        int e=0,o=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0)
            e++;
            else{
                o++;
                odd.push_back(v[i]);
            }
        }
        int sum=0;
        sum+=(e*o);
        sum+=(e*(e-1)/2);
        sort(odd.begin(),odd.end());
        for(int i=0;i<odd.size();i++){
            for(int j=i+1;j<odd.size();j++){
                if(__gcd(odd[i],2*odd[j])>1)
                sum++;
            }
        }
        cout<<sum<<endl;
    }
 
 
}