#include <iostream>
#include <string>
#define MIN_LENGTH 8 // >= 8 

using namespace std;

int main()
{
    string password; // Defining 
    bool uppercase = false;
    bool lowercase = false;
    bool digit = false;
    bool special_character = false;

    cout << "Enter a password" << endl; // instructions for the user
    cin >> password; // the password from the user

    int length = password.length(); // Getting the length

    // THE PASSWORD HAS SPECIFIC CHARACTER TYPES
    for (int i = 0; password[i]; i++) // character of the password
    {
        // THE PASSWORD HAS UPPERCASE LETTERS
        if (password[i] == 'A' || password[i] == 'B' || password[i] == 'C' || password[i] == 'D' 
            || password[i] == 'E' || password[i] == 'F' || password[i] == 'G' || password[i] == 'H' 
            || password[i] == 'I' || password[i] == 'J' || password[i] == 'K' || password[i] == 'L'
            || password[i] == 'M' || password[i] == 'N' || password[i] == 'O' || password[i] == 'P' 
            || password[i] == 'Q' || password[i] == 'R' || password[i] == 'S' || password[i] == 'T' 
            || password[i] == 'U' || password[i] == 'V' || password[i] == 'W' || password[i] == 'X'
            || password[i] == 'Y'|| password[i] == 'Z')
        {
            uppercase = true;
        }   
        
        // LOWERCASE LETTERS
        if (password[i] == 'a' || password[i] == 'b' || password[i] == 'c' || password[i] == 'd' 
            || password[i] == 'e' || password[i] == 'f' || password[i] == 'g' || password[i] == 'h' 
            || password[i] == 'i' || password[i] == 'j' || password[i] == 'k' || password[i] == 'l'
            || password[i] == 'm' || password[i] == 'n' || password[i] == 'o' || password[i] == 'p' 
            || password[i] == 'q' || password[i] == 'r' || password[i] == 's' || password[i] == 't' 
            || password[i] == 'u' || password[i] == 'v' || password[i] == 'w' || password[i] == 'x'
            || password[i] == 'y'|| password[i] == 'z')
        {
            lowercase = true;
        }

        // THE PASSWORD HAS DIGITS
        if (password[i] == '0' || password[i] == '1' || password[i] == '2' || password[i] == '3' 
            || password[i] == '4' || password[i] == '5' || password[i] == '6' || password[i] == '7' 
            || password[i] == '8' || password[i] == '9')
        {
            digit = true;
        }

        // THE PASSWORD HAS SPECIAL CHARACTERS
        if (password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' 
            || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*')
        {
            special_character = true;
        }
    }

    if (length > MIN_LENGTH && uppercase == true && lowercase == true
        && digit == true && special_character == true) // "Strong Password"
        {
            cout << "Strong Password" << endl;
        }
    else 
        {
            cout << "Weak Password" << endl;

            if (length < MIN_LENGTH)
                {
                    cout << "-Too short" << endl;
                }

            if (uppercase == false)
                {
                    cout << "-You should have at least 1 uppercase letter" << endl;
                }
            
            if (lowercase == false)
                {
                    cout << "-You should have at least 1 lowercase letter" << endl;
                }

            if (digit == false)
                {
                    cout << "-You should have at least 1 digit" << endl;
                }

            if (special_character == false)
                {
                    cout << "-You should have at least 1 special character" << endl;
                }
        }
    
    return 0;
}