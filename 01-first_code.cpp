//comment (ctrl+/) to mark multiple line as comment (Singleline //, multiple lines /* */)
// variables and comments
#include <iostream>
#include <iomanip>
using namespace std;
// this
// is 
// my
// code

//global variable
int z=10;
int main(){

    int x = 16;
    int y = 10;
    int z=5;
    cout<<::z<<endl;
    //Literals
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    //reference variable
    //Rohan ------> Monty -----> Rohu -------> Dangerous coder
    int my_var = 10;
    int &your_var = my_var;
    cout<<my_var<<endl;
    cout<<your_var<<endl;

    //Typecasting
    cout << fixed << setprecision(1);
    int a=10;
    float b = 34.4;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;

    //constants

    const int ax=20;
    cout<<ax<<endl;
    //ax=40;
    //cout<<ax<<endl;

    //manipulators
    int a1 =3, b1=10, c1=1233;
    cout<<"The value of a without setw is "<<a1<<endl;
    cout<<"The value of b without setw is "<<b1<<endl;
    cout<<"The value of b without setw is "<<c1<<endl;
    

    cout<<"The value of a with setw is "<<setw(4)<<a1<<endl;
    cout<<"The value of b with setw is "<<setw(4)<<b1<<endl;
    cout<<"The value of b with setw is "<<setw(4)<<c1<<endl;


    return 0;

}