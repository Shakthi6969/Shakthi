#include <iostream>
using namespace std;

int main()
{
    int x = 20; 
    int* ptr1 = &x; 
    int* ptr2 = ptr1; 

    *ptr1 = 10; 
   

    cout << ptr1 << endl;
    cout << *ptr1 << endl;
    cout << ptr2 << endl;
    cout << *ptr2 << endl;
}

