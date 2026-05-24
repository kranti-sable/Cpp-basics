#include<iostream>
using namespace std;
class parent {
    virtual void hello(){
        cout<<"parent hello\n";
    }
};
class child{
    public:
    void hello (){
        cout<<"child hello\n";
    }
};
int main(){
    child c1;
    c1.hello();
    return 0;
}