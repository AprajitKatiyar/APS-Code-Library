//                 ....
//             ....      ..
//          ...           .
//        ..        .......
//     ...          .......
//   ...          .. .......
//  ..          ..     .......
// ..          ..        ......
// ..         ..          .......
// ..        ..            .... ..
//  .........                .......
//                            ... ...
//                              ......
//                               .......
//                                 ......
//                                  ......
//                                   .......
//                                     ......
//                                      .......
//                                       .......
//                                         ......                 ......
//                                          .......           ........ ..
//                                            ......      ........ ........
//                                             ....... ............ ........
//                                              .............................
//                                              ...................... ........
//                                           ...................................
//                                       ................................ .......
//                                    ............................................
//                                   ............................................
//                                 ............................................
//                                 ..........................................
//                                  ......................................
//                                   ..................................
//                                     .............................
//                                      .........................
//                                        .........................
//                                   ................................
//                                   ..............................
//                                      ....................
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    io;
    int t=1;
    //cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,t;
        cin>>s;
        cin>>t;
        vector<int>minimum,maximum;
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i]==t[j]){
                minimum.push_back(i);
                j++;
                if(j>=m)
                break;
            }
        }
        j=m-1;
        for(int i=n-1;i>=0;i--){
            if(s[i]==t[j]){
                maximum.push_back(i);
                j--;
                if(j<0)
                break;
            }
        }
        reverse(maximum.begin(),maximum.end());
       int maxi=LLONG_MIN;
       for(int i=0;i<m-1;i++){
           maxi=max(maxi,maximum[i+1]-minimum[i]);
       }
       cout<<maxi<<endl;
        
        
    }
      
}