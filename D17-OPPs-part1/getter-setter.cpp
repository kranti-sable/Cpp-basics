#include<iostream>
#include<string>
using namespace std;
class Student{
    
    string name;
    float cgpa;
    public:
    void getpercentage(){
        cout<<(cgpa*10)<<"%\n";
    }
    //setters
    void setName(string nameVal){
        name=nameVal;
    }
    void setcgpa(float cgpaVal){
        cgpa=cgpaVal;
    }
    //getters
    string getName(){
        return name;
    }
    float getcgpa(){
        return cgpa;
    }
};
int main(){
    Student s1;
    s1.setName("Kranti");
    s1.setcgpa(9.1);

    cout<<s1.getName()<<endl;
    cout<<s1.getcgpa()<<endl;
    return 0;
}