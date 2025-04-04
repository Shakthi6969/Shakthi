#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (; n > 0; n /= 10) {  // loop until num becomes 0
        sum += n % 10;  // extract the last digit and add to sum
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}