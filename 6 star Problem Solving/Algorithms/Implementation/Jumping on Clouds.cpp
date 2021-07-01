#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);
int jumpingOnClouds(vector<int> c,int n) {
    int j=0;
    for (int i=0;i<n-1;i++)
        if(c[i+1]==0 && c[i+2]==1)
            j++;
        else
            j++,i++;
   return(j);
}
int main()
{
    int n;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
       cin>> c[i];
    cout<<jumpingOnClouds(c,n);
    return 0;
}
