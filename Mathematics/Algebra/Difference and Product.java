import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;
class Result {                                       //Logic Begins
    public static int solve(int d, int p) 
    {
    if(d<0)
        return(0);
    if(p==0 && d!=0)
       return(4);
    if(d==0 && p==0)
         return(1);
    for(int i=1;i<=Math.sqrt(Math.abs(p));i++)
       if(p%i==0 && Math.abs(p/i-i)==d)
          return((Math.abs(p/i)==i)?2:4);
    return(0);
    }                                           //logic Ends             
}
public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = Integer.parseInt(bufferedReader.readLine().trim());

        IntStream.range(0, t).forEach(tItr -> {
            try {
                String[] firstMultipleInput = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

                int d = Integer.parseInt(firstMultipleInput[0]);

                int p = Integer.parseInt(firstMultipleInput[1]);

                int result = Result.solve(d, p);

                bufferedWriter.write(String.valueOf(result));
                bufferedWriter.newLine();
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        bufferedReader.close();
        bufferedWriter.close();
    }
}
