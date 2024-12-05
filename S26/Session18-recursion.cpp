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
// 6 * 5 * factorial(4)
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

