#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // Local and Global Variables
    // Reference Variables
    // Typecasting
    // Constants
    // Manipulators

    int item1 = 100, item2 = 200, item3 = 150;

    cout << left << setw(10) << "Item" << right << setw(10) << "Price" << endl;
    cout << left << setw(10) << "Item1" << right << setw(10) << item1 << endl;
    cout << left << setw(10) << "Item2" << right << setw(10) << item2 << endl;
    cout << left << setw(10) << "Item3" << right << setw(10) << item3 << endl;
    return 0;
}