#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);
void breakingRecords(vector<long> sc) {
     int m=0,l=0;
     long mx=sc[0],lw=sc[0];
     for(long  i=1;i<sc.size();i++)
         {
             if(sc[i]>mx){
                 mx=sc[i];
                 m++;
             }
             if(sc[i]<lw){
                 lw=sc[i];
                 l++;
             }
         }
         cout<<m<<' '<<l;
}
int main()
{
    int n;
    cin >>n;
    vector<long> scores(n);
    for (int i = 0; i < n; i++) 
        cin>>scores[i];
    breakingRecords(scores);
    return 0;
}

