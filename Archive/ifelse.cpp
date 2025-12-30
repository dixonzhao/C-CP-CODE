#include <iostream>
int main(){
    using namespace std;
    char ch;
    cout << "Type, and I shall repeat.\n";
    cin.get(ch);
    while (ch != '.'){
        if (ch == '\n')
            cout << ch;
            else 
            cout << ++ch;
            cin.get(ch);
    }
    cout << "\n Please excuse the slight confusion";
    return 0;
}