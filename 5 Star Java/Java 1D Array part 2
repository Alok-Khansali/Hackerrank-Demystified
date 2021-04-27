import java.util.*;
public class Solution {
    public static boolean canWin(int l, int[] a,int i) 
    {
       if (i<0||a[i]==1)
            return false;
        if (i+1>=a.length||i+l>=a.length)
            return true;
        a[i]=1;                                                        //You dont want to get stuck in an infinite loop to stop i-1 loop
       return(canWin(l,a,i+l)||canWin(l,a,i+1)||canWin(l,a,i-1));     //Three possibilities solved together
    }
    public static void main(String[] args) {
        Scanner I = new Scanner(System.in);
        int q = I.nextInt();
        while (q-- > 0) {
            int n = I.nextInt(),l = I.nextInt(),a[] = new int[n];
            for (int i = 0; i < n; i++) 
                a[i] = I.nextInt();
            System.out.println( (canWin(l,a,0))? "YES" : "NO" );
        }
    }
}
