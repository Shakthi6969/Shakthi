#include <iostream> 
using namespace std; 


void swap(float a, float b) {
 

    float temp;
    temp = a;
    a = b;
    b = temp;
    
    cout << "After swap: a = " << a << ", b = " << b << endl;
}

int main() {
    
    float a = 2.4;
    float b = 9.2;
    
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    
    swap(a, b);
    
    return 0;
}
