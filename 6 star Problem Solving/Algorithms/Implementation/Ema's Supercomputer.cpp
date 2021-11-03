#include <bits/stdc++.h>    //Utter Brute Force, but if it works it works :)
using namespace std;
vector<vector<char>> grid(15,vector<char>(15)),g2(15,vector<char>(15));
int row,col;
bool chc(int i,int j)               //To check for the next set of boxes that will form a plus
{
    if(i == row || i==-1 ||j == col || j == -1)
        return false;
    if(g2[i][j] == 'G')
        return true;
    return false;
}
int plus2()        //To get the second plus configuration
{
    int mx=0,m=0,w;
    for (int i = 1; i < row-1; i++) 
       for(int j = 1;j< col-1;j++)
           if(g2[i][j] == 'G')
           {
               m=1,w=1;
               bool c = chc(i,j+w) & chc(i,j-w) & chc(i+w,j) & chc(i-w,j);
               while(c)
               {
                   m+=4;
                   ++w;
                   c = chc(i,j+w) & chc(i,j-w) & chc(i+w,j) & chc(i-w,j);
               }
               mx = max(m,mx);
           }
    return mx;
}
int max_ar()         
{
    int mx=0,m=0,w,sm=1;
    for (int i = 1; i < row-1; i++) 
       for(int j = 1;j< col-1;j++)
           if(grid[i][j] == 'G')
           {
               g2 = grid;
               m=1,w=1;
               bool c = chc(i,j+w) & chc(i,j-w) & chc(i+w,j) & chc(i-w,j);
               g2[i][j] = 'B';
               sm = plus2();
               mx = max(m*sm,mx);
               while(c)
               {
                   m+=4;
                   g2[i][j+w] =  g2[i][j-w] =  g2[i+w][j] = g2[i-w][j] ='B';
                   sm = plus2();
                   mx = max(m*sm,mx);
                   ++w;
                   c =chc(i,j+w) & chc(i,j-w) & chc(i+w,j) & chc(i-w,j);
               }
           }
    return mx;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> row >> col;
    for (int i = 0; i < row; i++) 
       for(int j = 0;j<col ; j++)
           cin >> grid[i][j];
    cout << max_ar() << "\n";
    return 0;
}
