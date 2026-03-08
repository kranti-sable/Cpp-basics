//print greates number amounge three digits
#include <iostream>
using namespace std;
int main(){
    int a=6,b=4,c=5;
    if((a>=b) && (a>=c)){
        cout<<"a is greatest"<<" "<<a<<endl;
    }
    else if (b>=c){
        cout<<"b is greates"<<" "<<b<<endl;
    }
    else {
        cout<<"c is greates"<<" "<<c<<endl;
    }
    return 0;
}