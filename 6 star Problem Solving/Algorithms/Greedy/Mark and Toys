#include <bits/stdc++.h>
using namespace std;
int maximumToys(vector<int> p, int k) {
    int c=0;
       sort(p.begin(),p.end());
       for(int i=0;i<p.size();i++)
          if(k-p[i]>0){
              k-=p[i];
              c++;
          }
          return(c);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long k;
    cin>>n>>k;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) 
           cin>> prices[i];
       int result = maximumToys(prices, k);
    cout << result << "\n";
    return 0;
}
