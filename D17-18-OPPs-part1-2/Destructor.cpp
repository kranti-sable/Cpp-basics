#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    string name;
    string color;
    int *mileage;

    car(string name,string color){
        this->name=name;
        this->color=color;
        mileage = new int ;
        *mileage=12;
    }
   car(car &original){
        cout<<"coping original to new..\n";
        name=original.name;
        color=original.color;
        mileage=original.mileage;
        }
    ~car(){
        cout<<"deleting object..\n";
        if(mileage!=NULL){
            delete mileage;
            mileage=NULL;
        }
    }
    
};
int main(){
    car c1("maruti800","blue");
        car c2(c1);
        cout<<c2.name<<endl;
        cout<<c2.color<<endl;
        cout<<*c2.mileage<<endl;
        *c2.mileage=10;

        cout<<*c1.mileage<<endl;
        return 0;
    
}