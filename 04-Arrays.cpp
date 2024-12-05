#include<iostream>
using namespace std;
int main(){
int marks[4] = {34,23,56,78};

cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;

int math_marks[4];
math_marks[0] = 89;
math_marks[1] = 56;
math_marks[2] = 65;
math_marks[3] = 76;
cout<<"Math marks"<<endl;
cout<<math_marks[0]<<endl;
cout<<math_marks[1]<<endl;
cout<<math_marks[2]<<endl;
cout<<math_marks[3]<<endl;
for (int i=0; i<4;i++){
    cout<<"The value of marks "<<i<< " is "<<marks[i]<<endl;
}

//Pointers and Arrays
int *p=marks;
cout<<"The value of *p is "<<*p<<endl;
cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
cout<<"================"<<endl;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;

return 0;
}

/*
Classwork
1. Print the values of array by using while and do while loop

2. Print all elements of an array using pointer arithmetic
Write a program to iterate over an array using a pointer and print all its elements.

Solution:

#include<iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* p = arr;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": " << *(p + i) << endl;
    }
    return 0;
}

3. Find the sum of elements in an array using pointers
Write a program to calculate the sum of all elements of an array using a pointer.

#include<iostream>
using namespace std;
int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int* p = arr;
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += *(p + i);
    }
    cout << "Sum of elements: " << sum << endl;
    return 0;
}
4. Find the maximum element in an array using pointers
Write a program to find the maximum element of an array using pointer arithmetic.
#include<iostream>
using namespace std;
int main() {
    int arr[] = {12, 34, 56, 78, 90};
    int* p = arr;
    int max = *p;
    for (int i = 1; i < 5; i++) {
        if (*(p + i) > max) {
            max = *(p + i);
        }
    }
    cout << "Maximum element: " << max << endl;
    return 0;
}


*/