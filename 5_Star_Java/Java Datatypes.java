import java.util.*;
import java.io.*;
class Solution{
    public static void main(String []argh)
    {
        Scanner I = new Scanner(System.in);
        int t=I.nextInt();
        for(int i=0;i<t;i++)
        {
            try
            {
                long x=I.nextLong();
                 System.out.println(x+" can be fitted in:");
                 if(x>=-128 && x<=127)
                  System.out.println("* byte");
                 if(x>=-(long)Math.pow(2,15)&&x<=(long)Math.pow(2,15)-1)
                  System.out.println("* short");
                 if(x>=-(long)Math.pow(2,31)&&x<=(long)Math.pow(2,31)-1)
                   System.out.println("* int");
                 if(x>=-(double)Math.pow(2,63)&&x<=(long)(Math.pow(2,63)-1))
                  System.out.println("* long");  
            }
            catch(Exception e)
            {
                System.out.println(I.next()+" can't be fitted anywhere.");
            }

        }
    }
}
