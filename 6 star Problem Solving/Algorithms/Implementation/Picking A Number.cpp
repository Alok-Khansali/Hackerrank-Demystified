#include <bits/stdc++.h>
using namespace std;
int pickingNumbers(vector<int> a) {
    int ar[100]={0};
          int an=0;
        for (int i=0;i<a.size();i++)
              ar[a[i]-1]++;
        for (int i=0;i<a.size()-1;i++)
              if(ar[i]+ar[i+1]>an)
                  an=ar[i]+ar[i+1];
      return(an);    
}
int main()
{
    int n;
    cin>>n;
  vector<int> a(n);
    for (int i = 0; i < n; i++)
       cin>> a[i];
    int result = pickingNumbers(a);
      cout<<result;
    return 0;
}
