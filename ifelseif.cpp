#include <iostream>
const int Fave = 27;
int main(){
    using namespace std;
    int n;

    cout << " Enter a numbner in the range 1-100 to find ";
    cout << "my favoritre number: ";
    do {
        cin >> n;
        if (n <Fave)
            cout << "Too Low -- guess again: ";
            else if (n > Fave)
                cout <<"Too high - guess again: ";
            else
                cout << Fave << " is right!\n";
    } while (n != Fave);
    return 0;
    }
