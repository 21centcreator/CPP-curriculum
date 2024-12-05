#include<iostream>
using namespace std;
//inline function 
// when not to use inline - when more line of code, when  recursive function, 
// static variable - will be initialise only once but can be updated
inline int product(int a, int b){
    static int c=0;
    c=c+1;
    return a*b+c;
}

int main(){
    int num1, num2;
    cout<<"Enter first number "<<endl;
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters
    cout<<"The sum is "<<product(num1,num2)<<endl;
    cout<<"The sum is "<<product(num1,num2)<<endl;
    cout<<"The sum is "<<product(num1,num2)<<endl;
    return 0;
}
