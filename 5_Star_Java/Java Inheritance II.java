class Arithmetic                   //SHOULD NOT BE PUBLIC -> USE DEFAULT  :)
{
    int  a,b;
    int add(int x,int y)
    {
        return(x+y);
    }
}
class Adder extends Arithmetic
{
    int add(int x,int y)
      {
          return(x+y);
      }
}
