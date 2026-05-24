#include<iostream>
using namespace std;
class shap{
    public:
    virtual void draw()=0;
};
class circle:public shap{
    public:
    void draw(){
        cout<<"draw circle\n";
    }
};
class square:public shap{
    public:
    void draw(){
        cout<<"draw square\n";
    }
};
int main(){
    circle c1;
    c1.draw();
    square s1;
    s1.draw();
}