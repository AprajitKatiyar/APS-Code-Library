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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        vector<int>sum(n,0);
        for(int i=0;i<n;i++){
            if(v[i]==0)
            continue;
            if(i+1<n)
            sum[i+1]-=1;
            int l=i+1-v[i];
            if(l<0)
            l=0;
            sum[l]+=1;
        }
        for(int i=1;i<n;i++){
            sum[i]+=sum[i-1];
        }
        for(int i=0;i<n;i++){
            if(sum[i]==0)
            cout<<0<<" ";
            else
            cout<<1<<" ";
        }
        cout<<endl;
        
    }
      
}