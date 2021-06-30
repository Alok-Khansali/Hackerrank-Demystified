import java.math.BigInteger;             //Like I said Earlier, For very large numbers I prefer JAVA or Python  :))
import java.util.*; 
class Solution
{ 
    public static void main(String args[]) throws Exception 
    { 
        Scanner I=new Scanner(System.in);
        int n=I.nextInt();
        BigInteger p = new BigInteger("1");
        for (int i=2;i<=n;i++) 
            p=p.multiply(BigInteger.valueOf(i));  
            System.out.println(p);
    } 
} 
