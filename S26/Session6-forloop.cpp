#include<iostream>
using namespace std;
int main(){

int number;
cout<<"Enter the number to print table in reverse order: ";
cin>>number;

for(int i=10; i>=1; i--){
    cout<<number << " * "<<i<<" = " <<number*i<<endl;
}




return 0;
}