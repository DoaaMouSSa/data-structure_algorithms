#include<iostream>
using namespace std;
int Factorial(int num);
int main(){
    int number;
    cout<<"Enter Number : ";
    cin>>number;
    int result=Factorial(number);
    cout<<number<<"! = "<<result;
    return 0;
}
int Fact=1;
int Factorial(int num){
    if(num==1){
        return Fact;
    }else{
        Fact*=num;
        Factorial(num-1);
    }
}