#include <iostream>
#include <stdexcept>

using namespace std;

int largest_proper_divisor(int n) {
    if (n == 0) {
        throw invalid_argument("largest proper divisor is not defined for n=0");
    }
    if (n == 1) {
        throw invalid_argument("largest proper divisor is not defined for n=1");
    }
    for (int i = n/2; i >= 1; --i) {
        if (n % i == 0) {
            return i;
        }
    }
    return -1; // will never happen
}
void process_input(int n) {                             //Code to be written in the editor.
  
    try                                                //To check if there is any Exception
    {
      int d = largest_proper_divisor(n);
      cout << "result=" << d <<"\n";
    }
    catch(const std::invalid_argument& e)           //To catch the Exception
       {
           cout<<e.what()<<"\n";
       }
    cout<<"returning control flow to caller\n";  //Statement to be executed everytime
  
}                                              //Code to be written in the editor.

int main() {
    int n;
    cin >> n;
    process_input(n);
    return 0;
}
