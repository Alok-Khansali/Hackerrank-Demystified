import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
class Solution
{
 public static void main(String args[])
{
    Scanner I=new Scanner(System.in);
    int n=I.nextInt(),c=0,m,a=0,s=0;
    for(int i=1;i<=n;i++,c=0)
        if(n%i==0)
        {
            m=i;
            while(m>0)
            {
                c+=m%10;
                m/=10;
            }
            if(c>s)
            {
                s=c;
                a=i;
            }    
        }
        System.out.print(a);
}
}
