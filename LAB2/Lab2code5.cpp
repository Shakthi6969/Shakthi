#include <iostream>

using namespace std;

int main()
{
    int array1[] = {1, 4, 7, 10, 15}; 
    int n = sizeof(array1) / sizeof(array1[0]);  
    int array2[n]; 
    
    int* arrayptr = &array1[0] + n - 1; 

    for (int i = 0; i < n; i++) 
    {
    
        array2[i] = *arrayptr; 
        arrayptr--; 
    }

    for (int i = 0; i < n; i++) 
    {
        if(i == n - 1)
        {
            cout << array2[i];
            
        }
        else
        {
            cout << array2[i] << ", "; 
        }
    }

    cout << endl; 

    return 0;
}