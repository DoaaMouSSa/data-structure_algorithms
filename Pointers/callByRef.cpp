#include<iostream>
using namespace std;

void changeUserData(int* id,int* age,string* name);

int main(){
    int id=201;
    int age=22;
    string name="Adil Hossam";
    cout<<"id : "<<id<<" , name : "<<name<<" , age"<<age<<endl;
    changeUserData(&id,&age,&name);
    cout<<"id : "<<id<<" , name : "<<name<<" , age"<<age<<endl;
    return 0;
}
void changeUserData(int* id,int* age,string* name){
    *id = 301;
    *age=30;
    *name="Sayed Ahmed";
}
