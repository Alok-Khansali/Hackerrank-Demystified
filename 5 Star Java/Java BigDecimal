import java.math.BigDecimal;
import java.util.*;
class Solution{
    public static void main(String []args){
        //Input
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        String []s=new String[n+2];
        for(int i=0;i<n;i++){
            s[i]=sc.next();
        }
        sc.close();
          for(int i=0;i<n;i++)    //code begins here
          {
              BigDecimal b=new BigDecimal(s[i]);
              int p=i;
              for(int j=i+1;j<n;j++)
              {
                 BigDecimal d=new BigDecimal(s[j]);
                 if(b.compareTo(d)<0) 
                 {
                     b=d;
                     p=j;
                 }
              }
              String t=s[p];
              s[p]=s[i];
              s[i]=t;
              }
        //Output
        for(int i=0;i<n;i++)
        {
            System.out.println(s[i]);
        }
    }

}

