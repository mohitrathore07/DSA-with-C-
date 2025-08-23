/* 
create c class book
*/

#include <iostream>
using namespace std;

class Book {
    public:
    char name;
    int price;
    int no_of_pages;

    int countBooks(int p) {
        if(price < p) {
            return 1;
        }
        else return 0;
    }

    bool isBookPresent(char book) {
        if(book == name) return true;
        else return false;
    }
};

int main() {
    Book book1;
    book1.name = 'harryPorter';  
    book1.price = 520;  
    book1.no_of_pages = 228;

    cout<<book1.countBooks(400);
    cout<<book1.countBooks(600);

    cout<<book1.isBookPresent('harryPorter');
    return 0;
}