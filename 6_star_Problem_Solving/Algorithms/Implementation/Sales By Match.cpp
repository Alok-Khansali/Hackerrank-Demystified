#include <bits/stdc++.h>
using namespace std;
int sockMerchant(int n, vector<int> a) {
      map<int, int> ct;
      int s=0;
      for (int i=0;i<a.size();i++)  
        if (ct.find(a[i])!=ct.end()) 
             ct[a[i]]++;
        else  
          ct.insert({a[i],1});
      map<int, int>::iterator itr;
      for (itr = ct.begin(); itr != ct.end(); ++itr) 
        s+=itr->second/2;
        return(s);
}
int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++) 
            cin>>ar[i];
    cout << sockMerchant(n, ar)<< "\n";
    return 0;
}
