#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    char a[110];
    cin>>t;
   while(t--)
   {
    cin>>a;
    int l=strlen(a),d=0;
    if(l==1 && (a[0]-'0')%8==0)
        d=1;
    else if(l==2 && (((a[0]-'0')*10+a[1]-'0')%8==0||((a[1]-'0')*10+a[0]-'0')%8==0))
        d=1;
    else
   {
    for(int i=0;i<l;i++)
        for(int j=i+1;j<l;j++)
            for(int k=j+1;k<l;k++)
            { 
                int x=a[i]-'0', b=a[j]-'0',c=a[k]-'0';
                if((x*100+b*10+c)%8==0||(c*100+x*10+b)%8==0||(b*100+c*10+x)%8==0||(c*100+b*10+x)%8==0||(b*100+x*10+c)%8==0||(x*100+c*10+b)%8==0)
                    d=1;
                if(d)
                    j=l,k=l,i=l;
                    break;
            }
    }
    puts(d ? "YES" : "NO");
   }
return 0;
}
