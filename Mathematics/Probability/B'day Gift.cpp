#include <bits/stdc++.h>
using namespace std;
double solve(vector<int> b) 
{
    double s=0;
       for(int i=0;i<b.size();i++)
           s+=b[i];
    s/=(2.0);
    return(s);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int balls_count;
     cin>>balls_count;
    vector<int> balls(balls_count);
    for (int i = 0; i < balls_count; i++) 
       cin>>balls[i];
    double r=solve(balls);
    printf("%.1lf\n",r);
    return 0;
}
