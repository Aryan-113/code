//class
#include<iostream>
#include<vector>
#include<string>
using namespace std;
 
class teacher{
    //non-parameterized
private:
    double salary;//data hiding

public:
    //non-parameterized
    teacher(){
        dept="c++";
    }

    //parameterized
    teacher(string n,string d,string s,double sal){
        name=n;
        dept=d;
        subject=s;
        salary=sal;
    }

    string name;
    string dept;
    string subject;

    // method/member function
    void changeDept(string newDept){
        dept=newDept;
    }

    //if we ever need to get the salary which is in private
    
    //setter
    void setSalary(double s){
        salary=s;
    }

    //getter
    double getSalary(){
        return salary;
    }

    void getinfo(){
        cout<<"name: "<<name<<endl;
        cout<<"subject: "<<subject<<endl;
    }

};

int main(){
   teacher t1{"peter","c++","drawing",300};//constructor call
//    t1.name="peter";
//    t1.subject="drawing";
//    t1.dept="superhero";
//    t1.setSalary(300); 

//    cout<<t1.dept<<endl;
//    cout<<t1.getSalary()<<endl;

    t1.getinfo();

   return 0;
}