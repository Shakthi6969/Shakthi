#include <iostream>
#define SQUARE(x) ((x) * (x)) // Macro

using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    cout << "Enter number to return to the square of x";
    cin >> x;

    cout << SQUARE(x); 

    return 0;
}
