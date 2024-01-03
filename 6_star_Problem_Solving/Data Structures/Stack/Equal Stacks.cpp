#include <bits/stdc++.h>
using namespace std;
int equalStacks(vector<int> h1,vector<int> h2,vector<int> h3,int s1,int s2,int s3) 
{
    if(s1==s2 && s2==s3)
      return(s1);
    while(s1!=s2||s1!= s3)
        if(s1==min({s1,s2,s3}))           // Equalising the stacks as per the stack with minimum value
           {
             while(s2>s1)
               s2-=h2.front(),h2.erase(h2.begin());
             while(s3>s1)
               s3-=h3.front(),h3.erase(h3.begin());
           }
        else if(s2==min({s1,s2,s3}))
           {
             while(s1>s2)
               s1-=h1.front(),h1.erase(h1.begin());
             while(s3>s2)
               s3-=h3.front(),h3.erase(h3.begin());
           }
        else
           {
             while(s2>s3)
               s2-=h2.front(),h2.erase(h2.begin());
             while(s1>s3)
               s1-=h1.front(),h1.erase(h1.begin());
           }
    return(s1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x,y,z,s1=0,s2=0,s3=0;
    cin>>x>>y>>z;
    vector<int> h1(x),h2(y),h3(z);
    for(int i=0;i<x;i++)
        cin>>h1[i],s1+=h1[i];
    for(int i=0;i<y;i++)
        cin>>h2[i],s2+=h2[i];
    for(int i=0;i<z;i++)
       cin>>h3[i],s3+=h3[i];
    cout<<equalStacks(h1, h2, h3,s1,s2,s3)<<"\n";
    return 0;
}

