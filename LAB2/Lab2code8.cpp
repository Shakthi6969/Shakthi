#include <iostream>
using namespace std;

int main()
{
    int a = 50;
    int& refA = a; 
    refA = 5; 

    
    cout << "int a: " << a << endl << "refA: " << refA << endl;
}

