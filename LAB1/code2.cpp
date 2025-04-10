#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Type a word: " << endl;
    string input;
    getline (cin, input);

    transform(input.begin(), input.end(), input.begin(), ::toupper);

    cout << "Converts the string to uppercase: " << input << endl;

    int wovels = 0;

    for (int i = 0; i < input.size(); i++)
    {
        switch (input[i])
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            wovels++;
            break;

        default:
            break;
        }
    }
    cout << "Counts the number of vowels in the string: " << wovels << endl;

    reverse(input.begin(), input.end());

    cout << "reverse example: " << input << endl; 
    return 0;
}