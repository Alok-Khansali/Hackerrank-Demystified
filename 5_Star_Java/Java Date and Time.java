class Result {                                                                         // CODE BEGINS
    public static String findDay(int month, int day, int year) 
    {
        String c="";
        int M=0,C=0,D=0,s=0;
        int m=month;
        int d=day;
        int y=year;
        String a[]={"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
        c=Integer.toString(y);
              D=Integer.parseInt(c.substring(2));
              C=Integer.parseInt(c.substring(0,2));
              if(C==0&&D==1)
               {
                   D=D+6;
                   C=C+1;
                }
        if(m>2)
              M=m-2;
              else
              D=D-1;
              if(m<=2)
               M=12-m%2;
              s=d+((13*M)-1)/5+ D+(D/4)+(C/4)-(2*C);
              if(s<0)
               s=s+7;
               if(s<0)
               s=s+7;
             return(a[s%7]);  
    }
}                                                                                         // CODE ENDS
