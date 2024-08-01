#include <iostream>
using namespace std;

//Friend Class
// Class Student definition
class Student
{
    // data members
    private:
      int id=0;
      string name ="unknown";
      int age=0;
      int grade=0;
      public:
       Student(int i, string n, int a, int g)
       {
            id=i;
            name=n;
            age=a;
            grade=g;
       }
       friend class University;
};

class University
{
    public:
    void print(Student ob)
    {
        cout<<"Your id is "<<ob.id<<endl;
        cout<<"Your name is "<<ob.name<<endl;
        cout<<"Your age is "<<ob.age<<endl;
        cout<<"Your grade is "<<ob.grade<<endl;
        
    }
};
int main ()
{
    Student ob(1,"Jack",18,85);
    University ob2;
    ob2.print(ob);


    return 0;
}