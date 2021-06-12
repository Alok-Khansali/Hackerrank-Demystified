import java.math.*;
import java.util.*;
public class Solution {                                //For big integer stuff i prefer java, python is equally good
    static long lights(int n) {                        //sum of binomial coefficients=2^n
        BigInteger a=new BigInteger("2"),b=new BigInteger("100000"),c=BigInteger.valueOf(n),d=a.modPow(c,b);
        return(d.longValue()-1);
    }
     public static void main(String[] args) {
         Scanner I = new Scanner(System.in);
        int t = I.nextInt();
        for (int tItr = 0; tItr < t; tItr++) {
            int n = I.nextInt();
            System.out.println(lights(n));
        }
    }
}
