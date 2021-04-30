#include <iostream>
#include <vector>
Using namespace std;
class Person{
    protected:
        string firstName, lastName;
        int id;
    public:
        Person(string firstName, string lastName, int identification){
            this->firstName = firstName;
            this->lastName = lastName;
            this->id = identification;
        }
        void printPerson(){
            cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n;
        }      
  };
class Student :  public Person{
    private:
        vector<int> ts;  
    public:
      Student (string fn, string ln, int i,vector<int> v):Person(fn,ln,i){
          ts=v;
      }
      char calculate(){
        int s=0;
        for(int i=0;i<ts.size();i++)
            s+=ts[i];
        s/=ts.size();
        if(s>=90)
        return('O');   
        else if(s>=80)
          return('E');  
         else if(s>=70)
          return('A'); 
        else if(s>=55)
          return('P'); 
        else if(s>=40)
          return('D');
          return('T');  
    }    
 };
int main() {
    string firstName, lastName;
    int id, numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for(int i = 0; i < numScores; i++){
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;  
    }
