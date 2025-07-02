// show my names
#include <iostream>

int main(){
    using namespace std;
    string myname;
    getline(cin, myname);
    cout << " myname is " << myname << endl;
    string adress;
    getline(cin, adress);
    cout << " my address is " << adress << endl;
    return 0;
}