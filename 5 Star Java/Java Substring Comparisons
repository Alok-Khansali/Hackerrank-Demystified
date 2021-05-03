import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) 
    {
        String a[]=new String [s.length()];
        int r=0;
        for(int i=0;i<s.length()-k+1;i++)
          a[r++]=s.substring(i,i+k);
          String sm=a[0],l=a[0];
        for(int i=0;i<r;i++)
          for(int j=i+1;j<r;j++)
           {
               if(sm.compareTo(a[j])>0)
                sm=a[j];
               if(l.compareTo(a[j])<0)
                l=a[j];
           }
        
        return sm + "\n" + l;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}
