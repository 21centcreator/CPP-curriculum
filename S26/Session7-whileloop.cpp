#include<iostream>
using namespace std;
int main(){
int count=0;
int number;
cout<<"Enter the number: ";
cin>>number;

while(number>0){
    number /=10;
    count++;
}

cout<<"The number of digits are: "<<count<<endl;


return 0;
}