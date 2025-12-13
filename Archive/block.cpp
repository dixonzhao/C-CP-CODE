//bloc.cpp 
#include <iostream>
int main()
{
    using namespace std;
    cout << "The Amazing Accounto will sum and average ";
    cout << "five numbeers for you. \n";
    cout << "PLease enter five values:\n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <=5; i++)
    {
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum /5 << " .\n:";
    cout << "The amazing accounto bids you adies!\n";
    return 0;
}