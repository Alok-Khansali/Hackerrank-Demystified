#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);
int hurdleRace(int k, vector<int> v) {
    int x=*max_element(v.begin(),v.end());
    return(k>=x?0:x-k);    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> height(n);
    for (int i = 0; i < n; i++) 
        cin>>height[i];
    cout << hurdleRace(k, height) << "\n";
    return 0;
}
