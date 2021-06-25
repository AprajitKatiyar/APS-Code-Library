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
       int n;
       cin>>n;
       vector<int>v(n+2,0);
       v[0]=n+1;
       v[n+1]=n+1;
       int l=1,r=n;
       int res;
       if(n==1){
		cout<<"! "<<1<<endl;
		continue;
	}
	cout<<"? "<<1<<endl;
	cout<<flush;
	int xx;
	cin>>xx;
	cout<<"? "<<2<<endl;
	cout<<flush;
	int yy;
	cin>>yy;
	if(xx<yy){
		cout<<"! "<<1<<endl;
		continue;
	}
	//int res;
       while(l<=r){
           int mid=(r+l)/2;
           int left=n+1,right=n+1,middle;
           
               if(v[mid]==0){
               cout<<"? "<<mid<<endl;
               cout<<flush;
               cin>>middle;
               v[mid]=middle;
               }
               else
               middle=v[mid];
               
               if(mid+1<=n){
               if(v[mid+1]==0){
               cout<<"? "<<mid+1<<endl;
               cout<<flush;
               cin>>right;
               v[mid+1]=right;
               }
               else
               right=v[mid+1];
               }
               
           
               if(mid-1>=1){
               if(v[mid-1]==0){
               cout<<"? "<<mid-1<<endl;
               cout<<flush;
               cin>>left;
               v[mid-1]=left;
               }
               else
               left=v[mid-1];
               }
              
           
           if(middle<left and middle<right){
               res=mid;
               break;
           }
           
           if(middle>left)
           r=mid-1;
           else
           l=mid+1;
       }
       cout<<"! "<<res<<endl;
       cout<<flush;
        
    }
      
}