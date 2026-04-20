// string member functions
#include<iostream>
#include<cstring>
using namespace std;
int main(){
// 1)str.length()
string str="hello world";
cout<<str.length()<<endl;// 11

// 2)str.at(idx)
string str1="hello world";
cout<<str1.at(2)<<endl;// l

//3)str.substr(start idx,size)
string str2="hello world";
cout<<str2.substr(1,5)<<endl;// ello

//4) str.find(word)
string str3="I hate work and job just doing for money";
cout<<str3.find("job")<<endl;// 16
}
