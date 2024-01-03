import java.util.*;
import java.io.*;
public class Solution {
    public static void main(String[] args){
        Scanner I=new Scanner(System.in);
        ArrayList<ArrayList<Integer>> a = new ArrayList<ArrayList<Integer>>();
        int n=I.nextInt(),x=0,y=0;
        for(int i=0;i<n;i++)
        {
            y=I.nextInt();
            ArrayList<Integer>b=new ArrayList<Integer>(y);
            for(int j=0;j<y;j++)
               b.add(I.nextInt());
            a.add(b);
        }
            n=I.nextInt();
            for(int i=0;i<n;i++)
             {
                 x=I.nextInt();y=I.nextInt();
                 try{
                      System.out.println(a.get(x-1).get(y-1));
                 }
                catch (IndexOutOfBoundsException e) {
                       System.out.println("ERROR!");
                }
             } 
      }
}
