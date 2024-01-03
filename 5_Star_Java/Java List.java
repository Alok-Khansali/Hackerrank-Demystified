import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
public class Solution {
    public static void main(String[] args)
     {
      Scanner I=new Scanner(System.in);
      int n=I.nextInt();
      List<Integer> l = new ArrayList<Integer>();
       for(int i=0;i<n;i++)
         l.add(I.nextInt());
        int q=I.nextInt();
        while(q-->0)
        {
            String s=I.next();
            if(s.equals("Insert"))
            {
                int ind=I.nextInt();
                int val=I.nextInt();
                l.add(ind,val);
            }
            else
            {
                int d=I.nextInt();
                l.remove(d);
            }
        }
         for (int i=0;i<l.size();i++)
            System.out.print(l.get(i) + " ");
    }
}
