#include <bits/stdc++.h>                    //PREREQUISITE : INSERTION SORT
using namespace std;
int runningTime(vector<int> arr) {
    int i,j,c=0,v;
    for(i=1;i<arr.size();i++)              // Insertion Sort
    {
        v=arr[i];
        j=i-1;
        while(j>=0 && v<arr[j])                
            arr[j+1]=arr[j],j-=1,c++;
        arr[j+1]=v;
    }
    return(c);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
        cin>>arr[i];
     cout << runningTime(arr) << "\n";
    return 0;
}
