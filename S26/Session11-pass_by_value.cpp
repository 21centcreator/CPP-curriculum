#include<iostream>
using namespace std;

void swapValues(int a, int b){
    int temp =a;
    a=b;
    b=temp;
    cout<<"Inside the swapValues function - a: "<<a<<", b: "<< b<<endl;
}

int main()
{

int x = 10, y=20;
cout<<"Before swapping - x: "<<x <<" , y : "<< y<< endl;
swapValues(x, y);
cout<<"After swapping - x: "<<x <<" , y : "<< y<< endl;



return 0;
}