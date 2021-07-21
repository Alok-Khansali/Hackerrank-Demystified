#include <bits/stdc++.h>
using namespace std;
vector<int> seive(int q)                        // to Get Q number of primes
{
    bool a[10001];
    vector<int> v(q,0);
    int r=0;
    memset(a, 1, sizeof(a));            
    for (int p = 2; r < q; p++)                 //Seive of Eratosthenes, check only until Q primes are found
        if (a[p] == 1) 
        {
            v[r++]=p;
            for (int i = p * p; i <= 10001; i += p)
                a[i] = 0;
        }
    return(v);
}
vector<int> waiter(vector<int> v, int q, int n)  
{
    stack<int> st,te;                            //stack to store and swap
    vector<int> an(n, 0), pr=seive(q);           //Answer Vector
    int r=0;
    for(int i = 0; i < n; i++)
        if(v[i] % 2 == 0)                    //if divisible by 2 store in answer
          an[r++] = v[i];
        else                                 //push into stack for further investigation
          st.push(v[i]);
    for(int i = 1; i < q; i++)
     {
        if(st.empty())                         //if stack is empty return answer vector
           return(an);
        while( !st.empty() )                   //unless empty keep checking for numbers that are divisible by i'th prime
            if( st.top() % pr[i] == 0)
               an[r++] = st.top(), st.pop();
            else
               te.push(st.top()), st.pop();
        st.swap(te);                          //swap st and te for next iteration 
     }
    while(!st.empty())                        //If st is not empty fill from the end
        an[--n]=st.top(),st.pop();
    return(an);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,q;
    cin >> n >> q;
    vector<int> number(n);
    for (int i = 0; i < n; i++)
        cin>>number[i];
    vector<int> result = waiter(number, q, n);
    for (size_t i = 0; i < n; i++) 
        cout << result[i] << '\n';
    return 0;
}
