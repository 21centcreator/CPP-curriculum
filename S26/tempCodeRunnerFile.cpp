#include<iostream>
using namespace std;

//6! = 6 * 5 *4 * 3 * 2 *1 

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

// 6 * factorial(5)
// 6 * 5 * factorial(4)#include<iostream>
using namespace std;


int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

// fib(5)
// fib(4) + fib(3)
// fib(2) + fib(3) + fib(2) + fib(3)

int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The term in fibonacci sequence at position "<<a<< " is "<<fib(a)<<endl;
    return 0;
}

// 6 * 5 * 4 * factorial(3)
// 6 * 5 * 4 * 2* factorial(2)
// 6 * 5 * 4 * 2* 1* factorial(1)


int main()
{

int num1;
int result=1;
cout<<"Enter first number :";
cin>>num1;
result = factorial(num1);
cout<<result;


return 0;
}

