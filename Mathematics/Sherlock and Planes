#include <bits/stdc++.h>                     //Scalar triple product
using namespace std;
string solve(vector<vector<int>> p) 
{
    vector<int> v;
     for(int i=1;i<4;i++)
       for(int j=0;j<3;j++)
            v.push_back((p[i][j]-p[0][j]));
    long s=v[0]*(v[4]*v[8]-v[5]*v[7])-v[1]*(v[3]*v[8]-v[6]*v[5])+v[2]*(v[3]*v[7]-v[6]*v[4]);
    return((s==0)?"YES":"NO");
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        vector<vector<int>> p(4,vector<int>(3,0));
        for (int points_row_itr = 0; points_row_itr < 4; points_row_itr++)
            for (int points_column_itr = 0; points_column_itr < 3; points_column_itr++)
                cin >> p[points_row_itr][points_column_itr];
        cout <<solve(p)<< "\n";
    }
    return 0;
}
