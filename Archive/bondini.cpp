// bondini.cpp -- using escape sequences 
#include <iostream>
int main() {
    using namespace std;
    cout << "\a Operation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:_________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! proceed with Plan Z3!\n";
    return 0;
}
