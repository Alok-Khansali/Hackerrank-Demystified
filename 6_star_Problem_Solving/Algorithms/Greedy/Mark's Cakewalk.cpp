#include <bits/stdc++.h>
using namespace std;
long marcsCakewalk(vector<int> c) {
      int n=c.size()-1;
      long s=0;
      sort(c.begin(),c.end());
      for(int i=0;i<c.size();i++)
        s+=(round)(pow(2,n--))*c[i];
      return(s);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> calorie(n);
    for (int i = 0; i < n; i++)
       cin>>calorie[i];
    long result = marcsCakewalk(calorie);
    cout << result << "\n";
    return 0;
}
