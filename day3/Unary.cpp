//unary is the type of arithmetic operator ,it has two type increment ++ and decrement --

//increment -->
#include <iostream>
using namespace std;
int main(){
    int a=3;
    int b=a++;
    cout<<"a="<<a<<endl;//4
    cout<<"b="<<b<<endl;//3
    return 0;
}

//decrement
#include <iostream>
using namespace std;
int main(){
    int a=3;
    int b=a--;
    cout<<"a="<<a<<endl;//2
    cout<<"b="<<b<<endl;//3
    return 0;
}