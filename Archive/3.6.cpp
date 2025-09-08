#include <iostream>
using namespace std;

int main() {
    const int InchesPerFoot = 12;
    int heightInInches;
    cout << "Enter your height in inches: ____\b\b\b\b ";
    cin >> heightInInches;
    int feet = heightInInches / InchesPerFoot;
    int inches = heightInInches % InchesPerFoot;
    cout << "Your height is " << feet << " feet and " << inches << " inches." << endl;
    return 0;
}
