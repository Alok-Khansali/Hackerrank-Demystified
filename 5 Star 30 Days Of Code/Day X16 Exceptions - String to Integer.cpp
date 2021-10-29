#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string S;
    cin >> S;
    try{
        throw stoi(S);
    }
    catch(int x)
    {
        cout<<x<<"\n";
    }
    catch(...)
    {
        cout<<"Bad String\n";
    }
    return 0;
}
