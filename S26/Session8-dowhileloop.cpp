#include<iostream>
using namespace std;
int main(){

string password;

do{
cout<<"Enter the password: ";
cin>> password;

if(password == "secret@123"){
    cout<<"Access granted! Welcome"<<endl;
    break;
}
else{
    cout<<"Incorrect password. Try again"<<endl;
}


} while(true);

return 0;
}