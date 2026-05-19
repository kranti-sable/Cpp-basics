#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"eats"<<endl;
    }
    void breath(){
        cout<<"breaths"<<endl;
    }
};
class mammels{
    public:
    string bloodType;
    mammels(){
        bloodType="warm";
    }
};
class dog:public Animal,public mammels{
    public:
    void jump(){
        cout<<"dog jumps"<<endl;
    }
};
int main(){
    dog d1;
    d1.eat();
    d1.breath();
    cout<<d1.bloodType<<endl;
    d1.jump();
    return 0;
}