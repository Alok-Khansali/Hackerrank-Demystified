#include <bits/stdc++.h>
using namespace std;
void largestPermutation(int k, vector<int> &arr) {
    int l=arr.size(),a[l+1]={0},r=0;
    for(int i=0;i<l;i++)
         a[arr[i]]=i;
    while(k>0 && r<l)
    {
        if(arr[r]!=l-r)
        {
            arr[a[l-r]]=arr[r];
            a[arr[r]]=a[l-r];
            arr[r]=l-r;
            a[l-r]=r;
            k--;
        }
        ++r;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> arr(n,0);
    for (int i = 0; i < n; i++) 
        cin>>arr[i];
    largestPermutation(k, arr);
    for (size_t i = 0; i < n; i++) 
        cout << arr[i]<<" ";
    return 0;
}
