#include <bits/stdc++.h>
using namespace std;
void bonAppetit(vector<int> v, int k, int b) 
{
     int s=0;
     for(int i=0;i<v.size();i++)
       if(i!=k)
         s+=v[i];
      if(s/2==b)
         cout<<"Bon Appetit\n";
      else
        cout<<b-s/2<<"\n";
}
int main()
{
    int n,k,b;
    cin>>n>>k;
    vector<int> bill(n);
    for (int i = 0; i < n; i++)
      cin>>bill[i];
    cin>>b; 
    bonAppetit(bill,k,b);
    return 0;
}



//WITHOUT VECTOR
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,b,s=0,x;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
      {
          cin>>x;
          if(i!=k)
             s+=x;
      }
    cin>>b; 
    if(s/2==b)
         cout<<"Bon Appetit\n";
      else
        cout<<b-s/2<<"\n";
    return 0;
}
