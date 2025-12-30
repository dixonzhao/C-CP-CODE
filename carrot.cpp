//carrots.cpp -- food processing program
// usese and displays a variable
#include <iostream>
int main()
{
    using namespace std;

    int carrots; // decleare an integer variable

    carrots = 25;
    cout << "I have";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots = carrots -1;
    cout << "Crunch, crunch. Now i have "<< carrots << " carrots." << endl;
    return 0;
}