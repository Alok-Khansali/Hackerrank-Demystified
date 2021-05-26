#include <bits/stdc++.h>              // My Average Method
using namespace std;
vector<int> permutationEquation(vector<int> v) {
    vector<int> p;
    for(int i=0;i<v.size();i++)
    {
        int x=(find(v.begin(),v.end(),i+1)-v.begin())+1,y=find(v.begin(),v.end(),x)-v.begin()+1;
        p.push_back(y);
    }
     return(p);
}
int main()
{
    int n,i;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
       cin>>p[i];
    vector<int> result = permutationEquation(p);
    for (i = 0; i < result.size(); i++) 
        cout << result[i]<<"\n";
    return 0;
}
/*     Better 
#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin >> n;
    int p[n+1];
    for(int i=1; i<=n; i++){
        cin >> k;
        p[k]=i;
     }
    for(int i=1;i<=n;i++)
        cout << p[p[i]] << endl;
    return 0;
}    */
