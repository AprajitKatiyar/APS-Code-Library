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
    cin>>t;
    while(t--){
        int p,a,b,c; 
        cin>>p>>a>>b>>c; 
        if(p%a==0 or p%b==0 or p%c==0) 
        cout<<0<<endl;
        else
        cout<<min(a-(p%a),min(b-(p%b),c-(p%c)))<<endl;
        
    }
      
}