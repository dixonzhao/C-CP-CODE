// getinfo.cpp -- input and output
#include <iostream>

int main(){
    using namespace std;

    int carrots;

    cout << "How many carrots do you have? " << endl;
    cin >> carrots; 
    cout << "here are two more.";
    carrots = carrots +2;
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}