#include<iostream>
using namespace std;
void removeDulicate(string str,string ans,int i,int map[]){
    if(i==str.size()){
        cout<<"ans:"<<ans<<endl;
        return;
    }
    int mapIdx=(int (str[i]-'a'));
    if(map[mapIdx]){
        removeDulicate(str,ans,i+1,map);
    }else{
        map[mapIdx]=true;
        removeDulicate(str,ans+str[i],i+1,map);
    }
}
int main(){
    string str="apple";
    string ans="";
    int map[26]={false};
    removeDulicate(str,ans,0,map);
    return 0;
}
