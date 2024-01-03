import java.util.*;
class Solution{
    public static void main(String []argh)
    {
      Scanner I = new Scanner(System.in);
       while (I.hasNext()) 
          {
            int i=0;
         String s=I.next();
            Stack<Character> st=new Stack<Character>();
            for(i=0;i<s.length();i++)
              if(s.charAt(i)=='{'||s.charAt(i)=='('||s.charAt(i)=='[')
                 st.push(s.charAt(i));
               else if((s.charAt(i)=='}'||s.charAt(i)==']'||s.charAt(i)==')') && st.empty())
                  break;
              else if(s.charAt(i)==')'&&st.peek()=='('||s.charAt(i)=='}'&&st.peek()=='{'||s.charAt(i)==']'&& st.peek()=='[')
                 st.pop();
               else
                 break;
            if(st.empty() && i==s.length())
                System.out.println(true);
             else 
                System.out.println(false);
            }
         }
}
