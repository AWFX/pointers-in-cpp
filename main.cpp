#include <iostream>
using namespace std;

int main(){
    int number;
    int *number_pointer;

    cout << "Enter number: ";
    cin >> number;

    number_pointer = &number;
    cout << "Path to the variable: " << number_pointer << endl;

    int *new_pointer;
    new_pointer = new int;

    cout << "Enter new number: ";
    cin >> *new_pointer;

    cout << "Path to new variable: " << new_pointer << endl;
    cout << "The value of the variable: " << *new_pointer << endl;

    return 0;
}