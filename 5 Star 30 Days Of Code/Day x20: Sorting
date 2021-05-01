#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,s=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n-1;i++)  {  
      for (int j=0;j<n-1-i;j++)
        if (a[j]>a[j+1]) {
            swap(a[j], a[j+1]);
             s++;
        }
            if (s==0) 
              break;
    }
    cout<<"Array is sorted in "<<s<<" swaps.\nFirst Element: "<<a[0]<<"\nLast Element: "<<a[n-1];
    return 0;
}
