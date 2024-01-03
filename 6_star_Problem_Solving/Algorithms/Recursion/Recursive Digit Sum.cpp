#include <bits/stdc++.h>
using namespace std;
int64_t superDigit(int64_t n)
{
    if(n / 10 == 0)
     return (n);
    int64_t answer = 0;
    while(n>0)
    {
        answer += n%10;
        n /= 10;
    }
    return superDigit(answer);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    int64_t k,a=0;
    cin >> n >> k;
    for(char i : n)
    {
        a += (i-'0');
    }
    a *= k;
    cout << superDigit(a) << "\n";
    return 0;
}
