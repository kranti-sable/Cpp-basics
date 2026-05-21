#include<iostream>
#include<string>
using namespace std;
class Student {
    //properties
      string name;
      float cgpa;
      //Methods
      void getpercentage(){
        cout<<((cgpa*10))<<endl;
      }
};
int main(){
    Student s1;//object
    cout<<sizeof(s1)<<endl;
    return 0;
}