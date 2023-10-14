#include<iostream>
using namespace std;

void printAddress(float* ptr);

int main(){
    float number;
    cout<<"Enter Number : ";
    cin>>number;
   printAddress(&number);
}
void printAddress(float* ptr){
 cout<<"The Address Of "<<*ptr<<" is "<<ptr;
}
