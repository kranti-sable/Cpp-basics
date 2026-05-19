#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
    string color;
    void eat(){
        cout<<"eats"<<endl;
    }
    void breath(){
        cout<<"breaths"<<endl;
    }
};
class fish:public Animal{
    public:
    void swim(){
        cout<<"swims"<<endl;
    }
};
class bird:public Animal{
    public:
    void fly(){
        cout<<"fly"<<endl;
    }
};
class mammels:public Animal{
    public:
    void walk(){
        cout<<"walk"<<endl;
    }
};
int main(){
    fish f1;
    f1.swim();
    f1.eat();
    bird b1;
    b1.fly();
    b1.breath();
    mammels m1;
    m1.walk();
    m1.eat();
    return 0;
}