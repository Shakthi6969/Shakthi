#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    int pages;
    string author = "Peter";

protected:
    float Price;

public:
    string publisher;

    void displayAuthorInfo() {
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book myBook;

    myBook.displayAuthorInfo();

    return 0;
}
