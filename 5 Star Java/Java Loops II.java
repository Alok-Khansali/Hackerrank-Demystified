import java.util.*;
import java.io.*;
class Solution{
    public static void main(String []argh){
        Scanner I = new Scanner(System.in);
        int n=I.nextInt();
        for(int i=0;i<n;i++){
            int a = I.nextInt(),b = I.nextInt(),p = I.nextInt();
            for(int j=1;j<=p;j++)
             System.out.print(a+ b*((int)Math.pow(2,j)-1)+" ");
             System.out.println();
        }
    }
}
