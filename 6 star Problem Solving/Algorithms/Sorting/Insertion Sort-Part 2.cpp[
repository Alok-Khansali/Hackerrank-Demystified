#include <bits/stdc++.h>
using namespace std;
void insertionSort2(int n, vector<int> arr) 
{
   int key,j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key)
            arr[j + 1] = arr[j],  j -= 1;
        arr[j + 1] = key;
        for(int x = 0; x < arr.size(); x++)
          cout << arr[x] << ' ';
        cout << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
       cin >> arr[i] ;
    insertionSort2(n, arr);
    return 0;
}
