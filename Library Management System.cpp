#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Library {
public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
};

int main() {
    Library lib[20];
    int input = 0;
    int count = 0;

    while (input != 3) {
        cout << "\nEnter 1 to input book details" << endl;
        cout << "Enter 2 to display details" << endl;
        cout << "Enter 3 to quit" << endl;
        cin >> input;
        cin.ignore(); // Clear newline from buffer

        switch (input) {
        case 1:
            cout << "Enter Book ID: ";
            cin >> lib[count].id;
            cin.ignore(); // Ignore newline after integer input

            cout << "Enter Book Name: ";
            cin.getline(lib[count].name, 100);

            cout << "Enter Book Author: ";
            cin.getline(lib[count].author, 100);

            cout << "Enter Student Name: ";
            cin.getline(lib[count].student, 100);

            cout << "Enter Book Price: ";
            cin >> lib[count].price;
            cout << "Enter Book Pages: ";
            cin >> lib[count].pages;
            cin.ignore(); // Ignore newline after integer input

            count++;
            break;

        case 2:
            if (count == 0) {
                cout << "No books available!" << endl;
            } else {
                for (int i = 0; i < count; i++) {
                    cout << "\nBook ID: " << lib[i].id << endl;
                    cout << "Book Name: " << lib[i].name << endl;
                    cout << "Book Author: " << lib[i].author << endl;
                    cout << "Student Name: " << lib[i].student << endl;
                    cout << "Book Price: " << lib[i].price << endl;
                    cout << "Book Pages: " << lib[i].pages << endl;
                }
            }
            break;

        case 3:
            cout << "Exiting program..." << endl;
            exit(0);

        default:
            cout << "Invalid choice! Please enter 1, 2, or 3." << endl;
        }
    }

    return 0;
}
