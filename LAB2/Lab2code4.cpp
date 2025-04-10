#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Input a number: ";
    cin >> a;

    while (a == 0) {
        cout << "Zero is not allowed. Please input a number: ";
        cin >> a;
    }

    if (a > 0) {
        int square = a * a;
        cout << "The square of the number is " << square << endl;
    }

    return 0;
}
