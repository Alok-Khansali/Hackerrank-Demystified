#include <bits/stdc++.h>   //m == 1, means no moves for 1, 2 wins                          
using namespace std;
int main()
{                                                         // Every Tower can be reduced 1
    ios_base::sync_with_stdio(0);                         // If Towers are Even-numbered, then 2 wins
    cin.tie(0);                                           // If 1 can make a move, so can 2
    cout.tie(0);                                          // If there are odd-numbered towers
    int t;                                                // Then 1 will we able to apply the, even-number loss strategy
    cin >> t;                                             // On the player number 2
    while(t--)                                            // That is, 1 brings n/2 towers to 1 and so does 2
    {                                                     // Now the remaining tower can be reduced to 1 by 1
        long long n ,m;                                   // Now 2 loses as there are no more moves to play                
        cin >> n >> m;
        cout << ((m != 1 && n&1) ? 1 : 2) << '\n';        // (m != 1 && n&1) ==> 1
    }
    return 0;
}
