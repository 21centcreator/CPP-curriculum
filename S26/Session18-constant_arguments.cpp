#include<iostream>
using namespace std;

int strlen(const char *p){
    int length =0;
    while(*p !='\0'){
        length++;
        p++;
    }
    return length;
}



int main()
{
    const char *str="Hello, World!";
    cout<<"The length of the string \""<<str<<"\" is : "<<strlen(str)<<endl;

    return 0;
}

