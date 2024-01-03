#include <bits/stdc++.h>
using namespace std;
string timeInWords(int h, int m) {       //CREATED CONDITIONS FOR EVERY KIND OF EXCEPTIONS + BASE CASES
    string a[]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","quarter","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine","half"};
       if(m==0)
         return(a[h-1]+" o' clock");
        else if(m==1)
          return("one minute past "+a[h-1]);
       else if(m<=30)
         if(m!=15 &&m!=30 )
          return(a[m-1]+" minutes past "+a[h-1]);
          else
           return(a[m-1]+" past "+a[h-1]);
        else
          if(h<12)
              if(m==59)
              return("one minute to "+a[h]);
            else if(m!=45)
              return(a[60-m-1]+" minutes to "+a[h]);
            else
              return(a[60-m-1]+" to "+a[h]);
          else {
            if(m!=45)
               return(a[60-m-1]+" minutes to "+a[0]);}
        return(a[60-m-1]+" to "+a[0]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h,n;
    cin >> h>>n;
    string result = timeInWords(h, n);
    cout << result << "\n";
    return 0;
}
