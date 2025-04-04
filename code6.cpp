#include <iostream>

using namespace std;

int reverseDigits(int number) 
{
    int reversed = 0; 

    while (number > 0)
    {

        reversed = reversed * 10 + number % 10;

        number = number / 10; 
    }
    return reversed;
}

int main()
{
    int number; 
    cout << "Enter a number" << endl;
    cin >> number;
    cout << "The number's digits reversed: " << reverseDigits(number) << endl;

    return 0;
}