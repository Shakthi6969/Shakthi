#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    return a * b;
}
double doublemultiply(double a, double b)
{
    return a * b;
}

double triplemultiply(int a, double b, bool e)
{
    if (e)
    {
        double result = a * b + 0.5;
        int rounded = (int) result;
        return rounded;
    }
    else
    {
        return a * b;
    }
}

int main(int argc, char const *argv[])
{
    int a = 9, b = 10, e = 12;

    double c = 9.25, d = 10.55, f = 5.40 ;

    cout << "The product of " << a << " times " << b << " is: " << multiply(a, b) << endl;
    cout << "The product of " << c << " times " << d << " is: " << doublemultiply(c, d) << endl;
    cout << "The product of int (" << e << ") and double (" << f << ") with high precision is: " << triplemultiply(e, f, false) << endl;
    cout << "The product of int (" << e << ") and double (" << f << ") with high precision is: " << triplemultiply(e, f, true) << endl;

    return 0;


}

