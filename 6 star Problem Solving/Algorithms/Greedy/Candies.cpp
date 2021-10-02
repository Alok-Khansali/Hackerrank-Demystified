#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n,s=0;
    cin >> n;
    vector <int> rating(n), candy(n,1);        //Atleast one candy has to be given to everyone so initialise all candy_values as 1
    
    for (int i = 0; i < n; i++) 
        cin >> rating[i];
        
    for(int i = 1; i < n; i++)
      if(rating[i] > rating[i-1])
        candy[i] = candy[i-1] + 1;
        
    for(int i = n-1; i > 0 ; i--)
      if(rating[i-1] > rating[i] && candy[i-1] <= candy[i])
        candy[i-1] = candy[i] + 1;
        
    for(int i : candy)
        s += i;
        
    cout << s;
    return 0;
}
