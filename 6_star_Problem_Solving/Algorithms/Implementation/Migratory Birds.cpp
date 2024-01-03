#include <bits/stdc++.h>
using namespace std;
int migratoryBirds(vector<int> a) {
    vector<int> v(a.size()+1);
    for(int i=0;i<a.size();i++)
       v[a[i]]++;
    int x=find(v.begin(),v.end(),*max_element(v.begin(),v.end()))-v.begin();
     return(x);
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
            cin>>a[i];
    int result = migratoryBirds(a);
    cout << result << "\n";
    return 0;
}

