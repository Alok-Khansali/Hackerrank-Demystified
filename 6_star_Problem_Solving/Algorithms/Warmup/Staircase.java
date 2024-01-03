import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
public class Solution {
    static void staircase(int n) {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i;j++)
               System.out.print(" ");
            for(int j=0;j<i;j++)
             System.out.print("#");
            System.out.println();
        }
    }
    private static final Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        staircase(n);
        scanner.close();
    }
}
