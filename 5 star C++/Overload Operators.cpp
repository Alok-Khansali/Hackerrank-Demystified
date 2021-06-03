Complex operator + (Complex const &c1, Complex const &c2)    //ONLY THIS CODE HAS TO BE WRITTEN IN EDITOR
{
     Complex c;
     c.a=c1.a+c2.a;
     c.b=c2.b+c1.b;
     return(c);
}
ostream & operator << (ostream &out, const Complex &c)
{
    out << c.a;
    out << "+i" << c.b << endl;
    return out;
} 
