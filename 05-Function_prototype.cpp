#include<iostream>
using namespace std;
//function prototype

//int sum(int a, int b);

int main(){
    int num1, num2;
    cout<<"Enter first number "<<endl;
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1,num2);
    return 0;
}
//int a and b are formal parameters
int sum(int a, int b){
    int c= a+b;
    return c;
}