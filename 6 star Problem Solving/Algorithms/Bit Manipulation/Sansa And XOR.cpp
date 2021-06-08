//HINT: FOR  AN ODD-LENGTH OF ARRAY THE ELEMENTS PRESENT AT THE EVEN INDICES OCCUR ODD NO. OF TIMES, WHILE FOR AN EVEN-LENGTH ARRAY ALL ELEMENTS OCCUR EVEN NO. OF TIMES
#include <bits/stdc++.h>
using namespace std;
long long sansaXor(vector<long> arr) {
    long long s=0,t=arr.size();
    if(t&1)
    {
        for (int i = 0; i < t; i+=2) 
          s^=arr[i];
        return(s);
    }
    return(0);
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long> arr(n);
        for (int i = 0; i < n; i++) 
          cin>>arr[i];
        cout <<sansaXor(arr)<< "\n";
    }
    return 0;
}
