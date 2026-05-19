#include<iostream>
#include<string>
using namespace std;
class teacher{
    public:
    int salary;
    string subj;
};
class student{
    public:
    int rollno;
    float cgpa;
};
class TA:public teacher,public student{
      public:
      string name;
};
int main(){
    TA ta1;
    ta1.name="Kranti";
    ta1.salary=30000;
    ta1.subj="DSA with C++";
    cout<<ta1.name<<endl;
    cout<<ta1.salary<<endl;
    cout<<ta1.subj<<endl;
    return 0;
}