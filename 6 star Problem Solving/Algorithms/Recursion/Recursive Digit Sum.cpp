#include <bits/stdc++.h>
using namespace std;
int superDigit(string n)
{
    if(n.size() == 1)
     return (stoi(n));
    long long int answer = 0;
    for(char i : n)
    {
        answer += (i-'0');
    }
    return superDigit(to_string(answer));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    long long int k,a=0;
    cin >> n >> k;
    for(char i : n)
    {
        a += (i-'0');
    }
    a *= k;
    cout << superDigit(to_string(a)) << "\n";
    return 0;
}
