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
int main(){
    fish f1;
    f1.color="gold";
    cout<<f1.color<<endl;
    f1.eat();
    f1.breath();
    f1.swim();
}