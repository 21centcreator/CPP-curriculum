#include<iostream>
using namespace std;


int product(int a, int b){
    static int c=0;
    c=c+1;
    return a*b+c;
}

int main()
{

int num1, num2;
cout<<"Enter first number :";
cin>>num1;
cout<<"Enter second number :";
cin>>num2;

cout<<"The result is "<<product(num1,num2)<<endl;
cout<<"The result is "<<product(num1,num2)<<endl;
cout<<"The result is "<<product(num1,num2)<<endl;
cout<<"The result is "<<product(num1,num2)<<endl;
cout<<"The result is "<<product(num1,num2)<<endl;

return 0;
}

