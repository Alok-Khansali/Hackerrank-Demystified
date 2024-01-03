#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i=0;i<n;i++)
      cin>>v[i];
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if (binary_search(v.begin(),v.end(),x))
          cout<<"Yes "<<lower_bound(v.begin(),v.end(),x)-v.begin()+1<<'\n';  //lower_bound is way faster than find() in the case of sorted order
        else
          cout<<"No "<<lower_bound(v.begin(),v.end(),x)-v.begin()+1<<'\n';     
    }
    return 0;
}
