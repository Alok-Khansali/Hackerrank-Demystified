#include <iostream>
#include <sstream>
using namespace std;
class Student{
    private:
      int age,standard;
      string fn,ln;
    public:
      void set_age(int s){
          age=s;
      }
      int get_age(){
          return age;
      }
      void set_standard(int s){
          standard=s;
      }
      int get_standard(){
          return standard;
      }
      void set_first_name(string k){
          fn=k;
      }
      string get_first_name(){
          return fn;
      }
      void set_last_name(string k){
          ln=k;
      }
      string get_last_name(){
          return ln;
      }
            string to_string(){
                stringstream ss; ss<<age;
                stringstream vv; vv<<standard;
                string s=ss.str()+","+fn+","+ln+","+vv.str();
          return s;
      }
};
int main() {
    int age, standard;
    string first_name, last_name;
    cin >> age >> first_name >> last_name >> standard;  
    Student st;
    st.set_age(age),st.set_standard(standard),st.set_first_name(first_name),st.set_last_name(last_name);
    cout << st.get_age() << "\n"<< st.get_last_name() << ", " << st.get_first_name() << "\n"<< st.get_standard() << "\n\n"<< st.to_string();
    return 0;
}
