#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,e;
        stack<long long int>s;
        cin>>n;
        for(long long int i=0;i<n;i++)
        {
            cin>>e;
            s.push(e);
        }
        vector<long long int>v1,v2;
        long long int a,ans=0;
        while(!s.empty())
        {
           a=s.top();
           s.pop();
           if(a<0)
           {
               if(v2.size()==0)
               v1.push_back(a);
               
               else if(v2.size()!=0)
               {
                   ans+=*max_element(v2.begin(), v2.end());
                   v2.clear();
                   v1.push_back(a);
               }
           }
           else if(a>0)
           {
               if(v1.size()==0)
               v2.push_back(a);
               
               else if(v1.size()!=0)
               {
                   ans+=*max_element(v1.begin(), v1.end());
                   v1.clear();
                   v2.push_back(a);
                   
               }
           }
          
        }
           if(v1.size()==0)
           ans+=*max_element(v2.begin(), v2.end());
           else
           ans+=*max_element(v1.begin(), v1.end());
        
        
         cout<<ans<<endl;
    }
}