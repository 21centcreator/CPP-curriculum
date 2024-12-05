#include<iostream>
using namespace std;
// Function to calculate the length of the string
int strlen(const char *p) {
    int length = 0;
    while (*p != '\0') { // Traverse until the null character is encountered
        length++;
        p++; // Move the pointer to the next character
    }
    return length;
}

int main() {
    const char *str = "Hello, World!";
    cout << "The length of the string \"" << str << "\" is: " << strlen(str) << endl;
    return 0;
}