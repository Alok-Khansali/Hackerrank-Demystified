import java.util.*;
public class Solution 
{
    static int gws(int n, int m)
     { 
         int s=0;
         if(n%2==0 &&m%2!=0)
         {
             s=n/2;
             m=m-1;            
         }
         if(n%2!=0 &&m%2==0)
         {
             s=m/2;
             n=n-1;            
         }
         if(n%2!=0 &&m%2!=0)
         {
             if(n>m)
              s=(n+1)/2 + (m-1)/2;
             else
               s=(m+1)/2 + (n-1)/2;
             m=m-1;  
             n=n-1;          
         }
         if(n%2==0&&m%2==0)
          s+=(n*m)/4;
          return(s);
     }
    public static void main(String args[])
    {
        Scanner I=new Scanner(System.in);
        int n=I.nextInt();
        int m=I.nextInt();
        System.out.print(gws(n,m));
    }
}
