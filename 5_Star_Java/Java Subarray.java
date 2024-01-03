import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
public class Solution {
    public static void main(String[] args) {
        Scanner I=new Scanner(System.in);
       int n=I.nextInt(),s=0,c=0;
       int a[]=new int[n];
       for(int i=0;i<n;i++)
        a[i]=I.nextInt();
        for(int i=0;i<n;i++,s=0)
           for(int j=i;j<n;j++)
              {
                  s+=a[j];
                  if(s<0)
                    c++;
              }
        System.out.println(c);
    }
}
