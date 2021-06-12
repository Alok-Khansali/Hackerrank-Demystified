import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
public class Solution
 {
    static int pt(int p,int q) 
    {
        return(q*2-p);
    }
    public static void main(String args[])
    {
     Scanner I = new Scanner(System.in);
        int n = I.nextInt();
        for (int i = 0; i < n; i++) {
            int b[]=new int[4];
            b[0]=I.nextInt();
            b[1]=I.nextInt();
            b[2]=I.nextInt();
            b[3]=I.nextInt();
            int a[]=new int[2];
            for(int j=1;j<=2;j+=1)
                a[j/2]=pt(b[j-1],b[j+1]);
            for (int j=0;j <2; j++) 
                System.out.print(a[j]+" ");
        System.out.println();
      }
    }
 }
