#include<bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
int32_t main(){
    //FOR FUCK'S SAKE DON'T FUCK UP 
    io;
    int t=1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        set<int>left;
        set<int>right;
        int prev=-1;
        for(int i=0;i<n;i++){
            if(v[i]>prev){
                left.insert(v[i]);
                prev=v[i];
            }
            else
            break;
        }
        prev=-1;
        for(int i=n-1;i>=0;i--){
            // if(left.find(v[i])!=left.end())
            // break;
            if(v[i]>prev){
                right.insert(v[i]);
                prev=v[i];
            }
            else
            break;
        }
        
        string res;
        while(left.size()!=0 or right.size()!=0){
            if(left.size()!=0 and right.size()!=0){
                int l=*left.begin();
                int r=*right.begin();
                if(l<r){
                    res.push_back('L');
                    left.erase(l);
                }
                else if(r<l){
                    res.push_back('R');
                    right.erase(r);
                }
                else if(l==r){
                    if(left.size()>=right.size()){
                        for(auto it:left){
                            res.push_back('L');
                        }
                        break;
                    }
                    else if(right.size()>=left.size()){
                        for(auto it:right){
                            res.push_back('R');
                        }
                        break;
                    }
                }
            }
            else if(left.size()!=0 and right.size()==0){
                int l=*left.begin();
                res.push_back('L');
                left.erase(l);
            }
            else if(right.size()!=0 and left.size()==0){
                int r=*right.begin();
                res.push_back('R');
                right.erase(r);
            }
        }
        cout<<res.length()<<endl;
        cout<<res<<endl;
        
    }
 
 
}