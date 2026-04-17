#include<iostream>
using namespace std;
int main(){
    int eng,maths,bio;
    cout<<"Enter eng marks:";
    cin>>eng;
    cout<<"Enter maths marks:";
    cin>>maths;
    cout<<"Enter bio marks:";
    cin>>bio;

    int Avg = (eng+maths+bio)/3;
    cout<<"Avg of marks:"<<Avg<<endl;
    return 0;
    //if we want ans in decimal point then just change datatype into float.
}