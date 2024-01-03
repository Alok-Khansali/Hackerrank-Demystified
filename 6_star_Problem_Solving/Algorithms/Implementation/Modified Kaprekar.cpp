#include <bits/stdc++.h>        // The Schoolish Way Of Solving
using namespace std;
void kaprekarNumbers(int p, int q)
{
    int c=0;
     for(long i=p;i<=q;i++)
         if(i>1 &&i<9)
           continue;
         else 
         {
             long m=i*i;
             string s=to_string(i);
             int l=s.size();
             long z=round(pow(10,l)),y=m/z,x=m%z;
             if(y+x==i)
             {
               cout<<i<<" ";
               c++;
             }
         }
     if(c==0)
       cout<<"INVALID RANGE";
}
int main()
{
    int p,q;
    cin >> p>>q;
    kaprekarNumbers(p, q);
    return 0;
}


//***********************************DIFFERENT APPROACH*****************************************************
//The cool way to do it ;)
#include <bits/stdc++.h>
using namespace std;
void kaprekarNumbers(int p, int q)
{
     set<int> s={1,9,45,55,99,297,703,999,2223,2728,4950,5050,7272,7777,9999,17344,22222,77778,82656,95121,99999};    // STORING ALL THE KAPREKAR NUMBERS BEFOREHAND
    int c=0;                                                                                                          //IN A SET
     for(int i=p;i<=q;i++)
        if(s.find(i)!=s.end())
        {
            cout<<i<<" ";
            c++;
        }
     if(c==0)
       cout<<"INVALID RANGE";
}
int main()
{
    int p,q;
    cin >> p>>q;
    kaprekarNumbers(p, q);
    return 0;
}
