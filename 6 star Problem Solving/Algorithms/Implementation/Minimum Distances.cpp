#include <bits/stdc++.h>
using namespace std;
int minimumDistances(vector<int> a) { 
    map<int,int> m; 
    int mn = INT_MAX;   
    int p=0,c=0;  
    for (int i=0;i<a.size();i++) {  
        if (m.find(a[i])!=m.end()) 
        {  
            c=i; 
            p=m[a[i]];   
            mn=min((c-p),mn);  
            if(mn==1)
              return(1);
        }  
        m[a[i]]=i;  
    }  
    if(mn!=INT_MAX)
      return(mn);
    return (-1);  
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int result = minimumDistances(a);
    cout << result << "\n";
    return 0;
}
