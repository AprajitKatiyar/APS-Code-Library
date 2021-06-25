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
      string s;
      cin>>s;
      bool ok=false;
      string ans;
      //1 test 
      set<string>test;
      for(int i=0;i<n;i++){
          string temp="";
          temp.push_back(s[i]);
          test.insert(temp);
      }
     for(char x='a';x<='z';x++){
         string t="";
         t.push_back(x);
         if(test.find(t)==test.end()){
             ok=true;
             ans=t;
             break;
         }
     }
     if(ok==true){
         cout<<ans<<endl;
         continue;
     }
     //2 test 
     test.clear();
     for(int i=0;i<n-1;i++){
         string temp="";
         temp.push_back(s[i]);
         temp.push_back(s[i+1]);
         test.insert(temp);
     }
     string str="..";
     for(char x='a';x<='z';x++){
         str[0]=x;
         for(char y='a';y<='z';y++){
             str[1]=y;
             if(test.find(str)==test.end()){
             ok=true;
             ans=str;
             break;
         }
        }
         if(ok==true)
         break;
     }
     if(ok==true){
         cout<<ans<<endl;
         continue;
     }
     //3 test 
     test.clear();
     for(int i=0;i<n-2;i++){
         string temp="";
         temp.push_back(s[i]);
         temp.push_back(s[i+1]);
         temp.push_back(s[i+2]);
         test.insert(temp);
     }
     string str1="...";
     for(char x='a';x<='z';x++){
         str1[0]=x;
         for(char y='a';y<='z';y++){
             str1[1]=y;
             for(char z='a';z<='z';z++){
                 str1[2]=z;
                 if(test.find(str1)==test.end()){
                 ok=true;
                 ans=str1;
                 break;
                 
             }
         }
         if(ok==true)
         break;
     }
     if(ok==true)
     break;
    }
    if(ok==true){
        cout<<ans<<endl;
        continue;
    }
    }
 
 
}