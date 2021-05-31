//THIS IS THE CODE YOU HAVE TO WRITE
class Person{                         //Super Class
    public:
     string name;
     int age;
     virtual void getdata(){}
     virtual void putdata(){}
};
class Professor : public Person{    //Professor Class derived from Class Person
    public:
    int publications;
    static int cur_id;
    void getdata(){
        cin>>name>>age>>publications;
    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<"\n";
        cur_id++;
    }
};
int Professor::cur_id=1;            // TO maintain current ids of Professors
class Student : public Person{      //Student Class derived from Class Person
    public:
    int a[6],s;
    static int cur_id;
    void getdata(){
        cin>>name>>age;
        for(int i=0;i<6;i++)
           cin>>a[i],s+=a[i];
    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<s<<" "<<cur_id<<"\n";
        ++cur_id;
    }
};
int Student::cur_id=1;              // TO maintain current ids of Students
