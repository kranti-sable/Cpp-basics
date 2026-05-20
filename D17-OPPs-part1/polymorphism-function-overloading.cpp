#include<iostream>
#include<string>
using namespace std;
class print{
    public:
    void show (int x){
        cout<<"int:"<<x<<endl;
    }
    void show(string str){
        cout<<"string:"<<str<<endl;
    }
};
int main(){
    print obj1;
    obj1.show(20);
    obj1.show("kranti");
    return 0;
}