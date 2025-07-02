// hexoct2.cpp -- display values in hex and octal
#include <iostream>
using namespace std;
int main() {
    int chest = 42;
    int waist = 42; // Hexadecimal representation
    int inseam = 42;  // Octal representation

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << hex;
    cout << "waist = "  << waist << " (0x42 in hex)\n"; // Display waist in hex
    cout << oct;
    cout << "inseam = " << inseam << " (042 in octal)\n"; // Display inseam in octal
    return 0;
}