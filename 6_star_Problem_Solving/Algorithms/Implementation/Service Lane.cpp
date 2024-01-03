#include <bits/stdc++.h>
using namespace std;
vector<int> serviceLane(int t, vector<vector<int>> c,vector<int> w) {
     vector<int> v;
     for(int i=0;i<t;i++)
        v.push_back(*min_element(w.begin()+c[i][0],w.begin()+c[i][1]+1));    
        return(v);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    vector<int> width(n);
    for (int i = 0; i < n; i++) 
        cin>>width[i];
    vector<vector<int>> cases(t);
    for (int i = 0; i < t; i++) {
        cases[i].resize(2);
        for (int j = 0; j < 2; j++) 
            cin >> cases[i][j];
    }
    vector<int> result = serviceLane(t, cases,width);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1)
            cout << "\n";
    }
    cout << "\n";
    return 0;
}
