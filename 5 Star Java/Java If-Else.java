import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
public class Solution {
    public static void main(String[] args) {
     Scanner I=new Scanner(System.in);
     int n=I.nextInt();
     if(n%2==0 &&((n>=2&&n<=5)||n>20))
       System.out.print("Not Weird");
     else if((n%2==0 && (n>5&&n<21))||n%2!=0) 
     System.out.print("Weird");
     }
    }
