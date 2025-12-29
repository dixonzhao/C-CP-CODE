#include <iostream>
int main(){
    using namespace std;
    cout << "THis program may reformat your hard disk.\n"
            "and destroy all your dta.\n"
            "Do you wish to continue? (y/n)";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
        cout << "You were warned!\a\a\n";
    else if (ch == 'n' || ch == 'N')
        cout << "A wise choice, you made.\n";
    else 
        cout << "That wasn't a y or n! Apparently you "
        "can't follow instructions, so I will trash your disk anyway. \a\a\a\n";
      return 0;  
}    