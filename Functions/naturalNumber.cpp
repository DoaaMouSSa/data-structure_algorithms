#include<iostream>
using namespace std;
int summation(int num);
int main(){
    int number;
    cout<<"Enter Number : ";
    cin>>number;
    int result=summation(number);
    cout<<"result of "<<number<<" = "<<result;
    return 0;
}
int sum=0;
int summation(int num){  
    if(num==0){
        return sum;
    }else{
        sum+=num;
        summation(num-1);
    }
}