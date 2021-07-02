import java.util.*;
public class Solution 
{
    static int primeCount(long n) {
        int i=0;
        long x[]={1L,6L,30L,210L,2310L,30010L,510510L,9699690L,223092870L,6469693230L,200560490130L,7420738134810L,304250263527210L,13082761331670030L,614889782588491410L};
        if(n==1)
         return(0);
          for(i=0;i<15;i++)
           if(n<x[i])
            break;
         return((i<15)?i:15);        
    }
    public static void main(String args[])
    {
        Scanner I=new Scanner(System.in);
        int q=I.nextInt();
        while(q-->0)
        {
            long n=I.nextLong();
            System.out.println(primeCount(n));
        }
    }
}
