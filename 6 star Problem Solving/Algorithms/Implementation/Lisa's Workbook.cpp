#include <bits/stdc++.h>
using namespace std;
int workbook(int n, int k, vector<int> v) {
    int c=0,pg=1;
    for(int i=0;i<n;i++)
          for(int j=1;j<=v[i];j+=k,pg+=1)
              if(pg>=j && pg<=min(j+k-1,v[i]))
                c++;
      return(c);     
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
      cin>>v[i];
    cout <<workbook(n, k, v)<< "\n";
    return 0;
}
