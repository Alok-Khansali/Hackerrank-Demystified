import java.util.Scanner;
public class Solution {
    static boolean isAnagram(String a, String b) 
    {
        String s=a.toLowerCase(),w=b.toLowerCase();
        if(s.length()!=w.length())
          return(false);
        int v[]=new int[26];
        for(int i=0;i<w.length();i++)
         v[w.charAt(i)-'a']++;
         for(int i=0;i<w.length();i++)
          {
              v[s.charAt(i)-'a']--;
              if(v[s.charAt(i)-'a']<0)
                return(false);
          }
          return(true);
    }                                     
    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );     //if else using ternary operator
    }
}

