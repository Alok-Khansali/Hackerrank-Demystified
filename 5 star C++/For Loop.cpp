#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b;
    c=min(b,9);
    string x[]={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a;i<=c;i++)
      cout<<x[i-1]<<'\n';
    for(int i=10;i<=b;i++)
      if(i%2==0)
      cout<<"even"<<'\n';
     else
        cout<<"odd"<<'\n';
    return 0;
}
