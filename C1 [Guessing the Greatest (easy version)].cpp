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
int binary_search_left(int l,int r,int second_max){
    int res;
    while(l<=r){
        int mid=l+(r-l)/2;
        int temp;
        cout<<"? "<<mid<<" "<<second_max<<endl;
        cin>>temp;
        if(temp==second_max){
            res=mid;
            l=mid+1;
        }
        else
        r=mid-1;
        
    }
    return res;
}
int binary_search_right(int l,int r,int second_max){
    int res;
    while(l<=r){
        int mid=l+(r-l)/2;
        int temp;
        cout<<"? "<<second_max<<" "<<mid<<endl;
        cin>>temp;
        if(temp==second_max){
            res=mid;
            r=mid-1;
        }
        else
        l=mid+1;
        
    }
    return res;
}
int32_t main(){
    io;
    int t=1;
    //cin>>t;
    while(t--){
        int n,res;
        cin>>n;
        cout<<"? "<<1<<" "<<n<<endl;
        int second_max;
        cin>>second_max;
        if(second_max==1){
            if(n==2)
            res=2;
            else
            res=binary_search_right(2,n,second_max);
        }
        else if(second_max==n){
            if(n==2)
            res=1;
            else
            res=binary_search_left(1,n-1,second_max);
        }
        else{
            int temp;
            cout<<"? "<<1<<" "<<second_max<<endl;
            cin>>temp;
            if(temp==second_max){
                res=binary_search_left(1,second_max-1,second_max);
            }
            else{
                res=binary_search_right(second_max+1,n,second_max);
            }
        }
        cout<<"! "<<res<<endl;
        
    }
      
}