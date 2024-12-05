#include<iostream>
using namespace std;
int main(){

int a =3;
int* b=&a;
cout<<b;
cout<<"The address of a is"<<&a<<endl;
cout<<"The address of a is"<<b<<endl;
cout<<"The value at address b is "<<*b<<endl;

// & ----> Address of operator
// * ----> Dereference operator
// pointer to pointer

int** c=&b;
cout<<"The address of b is "<<&b<<endl;
cout<<"The address of b is "<<c<<endl;

cout<<"The value at address c is "<<*c<<endl;
cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
return 0;
}

/*
Classwork
Write a program to find the sum of two numbers using pointers.

int main() {
    int x = 5, y = 7;
    int* p1 = &x, *p2 = &y;
    cout << "Sum = " << (*p1 + *p2) << endl;
    return 0;
}

Create a program to swap the values of two variables using pointers.

int main() {
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}
Use a pointer-to-pointer to access and modify the value of a variable.

int main() {
    int a = 15;
    int* p = &a;
    int** pp = &p;
    cout << "Original value: " << a << endl;
    **pp = 30;
    cout << "Modified value: " << a << endl;
    return 0;
}
*/