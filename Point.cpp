#include <iostream>

using namespace std;

namespace MathOperations
{
    int add(int a, int b)
    {
        return a + b;
    }
}

namespace TextOperations
{
    string concat(string a, string b)
    {
        return a + b;
    }
}

int main(int argc, char const *argv[])
{
    int a = 9, b = 10;
    
    cout << "9 + 10: " << MathOperations::add(a, b);
    cout << TextOperations::concat("Hello", "world");
    return 0;
}
