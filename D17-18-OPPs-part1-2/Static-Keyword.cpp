#include<iostream>
using namespace std;
void counter(){
    static int count=0;
    count++;
    cout<<"count:"<<count<<endl;
}
class example {
    public:
   inline static int x=0;
};
int main(){
    
    cout<<"Static variable output:"<<endl;
    counter();
    counter();
    counter();

    cout<<"static in class variable output:"<<endl;
    example eg1;
    example eg2;
    example eg3;

    cout<<eg1.x++<<endl;
    cout<<eg2.x++<<endl;
    cout<<eg3.x++<<endl;

    return 0;
}