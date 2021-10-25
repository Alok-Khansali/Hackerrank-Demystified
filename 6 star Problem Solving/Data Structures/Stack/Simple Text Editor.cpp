#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,p=0,l=0,x;
    cin >> n;
    string s="",w;
    stack<string> undo;
    while(n--)
    {
        cin >> x;
        if(x == 1)
        {
            cin >> w;
            undo.push(s);                  //Store the stae of the string in the stack
            s += w;
        }
        else if(x == 2)
        {
            l = s.size();
            cin >> p;
            undo.push(s);
            s = s.substr(0,l-p);
        }
        else if(x == 3)
        {
            cin >> p;
            cout << s[p-1] << '\n';
        }
        else
        {
            s = undo.top();                 //Replacing s with its last state      
            undo.pop();
        }  
    }
    return 0;
}
