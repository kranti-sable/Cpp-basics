/* In this question all types of topics are coverd like class & object,access modifiers,getters and setters,encapsulation,constructor accept copy constructor,*/
#include<iostream>
#include<string>
using namespace std;
class User{
    private: 
    int id;
    string password;
    public:
    string username;
    //parameter contructor
    User (int id){
        this->id=id;
    }
    //getter
    string getpassword(){
        return password;
    }
    //setter
    void setpassword(string password){
        this->password=password;
    }
};
int main(){
    User user1 (101);
    user1.username="krantisable";
    user1.setpassword("abcd");

    cout<<"username:"<<user1.username<<endl;
    cout<<"password:"<<user1.getpassword()<<endl;
 return 0;
}