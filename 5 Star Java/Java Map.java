import java.util.*;
class Solution
{
    public static void main(String []argh)
    {
        Scanner I = new Scanner(System.in);
        Map<String,Integer> mp=new HashMap<String,Integer>();            
        int n=I.nextInt();
        I.nextLine();
        for(int i=0;i<n;i++)
        {
            String nm=I.nextLine();
            int p=I.nextInt();
            mp.put(nm, p); 
            I.nextLine();
        }
        while(I.hasNext())
        {
            String s=I.nextLine();
            if(mp.containsKey(s))                
                System.out.println(s+ "="+mp.get(s)); 
            else
            System.out.println("Not found");
        }
}
}


