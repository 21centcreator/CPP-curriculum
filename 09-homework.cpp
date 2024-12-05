/*
Q1: Write a program to declare a function prototype for a function void countCalls(). Implement the function such that it keeps track of how many times it has been called using a static variable. Call the function five times from the main function and display the count after each call.
Q2: Define an inline function int area(int length, int width = 10) that calculates the area of a rectangle. The function should use a default value of 10 for the width if it is not provided. Demonstrate the function by calling it with:
Only the length value.
Both the length and width values.
Q3: Write a program with a function void display(const int number) that takes a constant integer argument and displays its value. Try modifying the argument inside the function to observe the error. In the main function, call the display function with different integer values.


Q1:

#include<iostream>
using namespace std;

// Function prototype
void countCalls();

void countCalls() {
    static int count = 0; // Static variable to keep track of calls
    count++;
    cout << "Function called " << count << " time(s)." << endl;
}

int main() {
    // Call the function five times
    for (int i = 0; i < 5; i++) {
        countCalls();
    }
    return 0;
}


------------------

Q2: 

#include<iostream>
using namespace std;

// Inline function with default argument
inline int area(int length, int width = 10) {
    return length * width;
}

int main() {
    cout << "Area with only length (length = 5): " << area(5) << endl; // Default width = 10
    cout << "Area with length = 5 and width = 15: " << area(5, 15) << endl; // Specified width
    return 0;
}


Q3:
#include<iostream>
using namespace std;

void display(const int number) {
    cout << "The value of the constant argument is: " << number << endl;
    // Uncomment the below line to observe the error
    // number++;
}

int main() {
    display(10);
    display(25);
    display(42);
    return 0;
}




*/
