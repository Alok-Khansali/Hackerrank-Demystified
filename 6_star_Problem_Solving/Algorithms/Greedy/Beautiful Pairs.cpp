#include <bits/stdc++.h>
using namespace std;
int fill(vector<int> &a,int n)              //To fill the vector and get the maximum index filled
{
    int m;
    for (int i = 0; i < n; i++) 
    {
        int x;
        cin>>x;
        a[x]++;
        m=max(x,m);
    }
    return(m);
}
int beautifulPairs(vector<int> &a,vector<int> &b,int m,int n) 
{
    int t=0;
    for(int i=1;i<=m;i++)
       if(a[i]>0 && b[i]>0)                //Checking if If a value exists in both the vectors
         
         t+=(min(a[i],b[i])); //Adding minimum of the two occurances
  
    if(t==n)                      // if no duplicates, then one pair will be lost as one element in B[] has to be changed
      return(t-1); 
  
    return(t+1);             //Oterwise add 1 to the total combinations
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m=0,o=0;
    cin>>n;
    vector<int> A(1001),B(1001);
    m=fill(A,n);
    o=fill(B,n);
    cout << beautifulPairs(A,B,min(m,o),n) << "\n";
    return 0;
}
