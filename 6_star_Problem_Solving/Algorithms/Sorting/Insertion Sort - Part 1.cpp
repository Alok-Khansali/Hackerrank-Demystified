#include <bits/stdc++.h>
using namespace std;
void insertionSort1(int n, vector<int> arr) 
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            for(int x = 0; x < arr.size(); x++)
               cout << arr[x] << ' ';
            cout << '\n';
            j -= 1;
        }
        arr[j + 1] = key;
    }
    for(int x = 0; x < arr.size(); x++)
          cout << arr[x] << ' ';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
     cin>>v[i];
    insertionSort1(n,v);
    return 0;
}
