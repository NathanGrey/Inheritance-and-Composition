#include <iostream>
#include "Library.h"

using namespace std;

int GetMainMenuInput()
{
    cout << endl;
    cout << "---- Welcome to my library ----" << endl;
    cout << "1) List all books" << endl;
    cout << "2) List all magazines" << endl;
    cout << "3) List all newspapers" << endl;
    cout << "4) List all ebooks" << endl;
    cout << "5) Find a book(they can enter an id after)" << endl;
    cout << "6) List author's documents (they can enter an author name) " << endl;
    cout << "7) Exit" << endl;

    int input;
    cin >> input;
    return input;
    
}

int main()
{
    Library myLibrary;
    myLibrary.AddBook(10937, 20, "Bill Thomas", "Life");
    myLibrary.AddBook(32133, 20, "Tim James", "The Longest Yard");
    myLibrary.AddMagazine(21323, 10, "Sports Illustrated", 4, 2017);
    myLibrary.AddMagazine(21324, 10, "Sports Illustrated", 5, 2017);
    myLibrary.AddMagazine(43244, 10, "Time", 4, 2017);
    myLibrary.AddNewspaper(43423, 1, "New York Times", 25, 4, 2017);
    myLibrary.AddNewspaper(43424, 1, "New York Times", 26, 4, 2017);
    myLibrary.AddNewspaper(32313, 1, "Washington Post", 25, 4, 2017);
    myLibrary.AddEbook(65434, 30, "Lan Hum", "Time After Time", AZW);
    myLibrary.AddEbook(654354, 30, "Tim James", "The Longest Yard", PDF);
    
    bool exit = false;
    
    do
    {
        int input = GetMainMenuInput();
        switch (input)
        {
            case 1:
                myLibrary.DisplayAllBooks();
                break;
            case 2:
                myLibrary.DisplayAllMagazines();
                break;
            case 3:
                myLibrary.DisplayAllNewspapers();
                break;
            case 4:
                myLibrary.DisplayAllEbooks();
                break;
            case 5:
                cout << "Please enter the Id of the book: ";
                int bookID;
                cin >> bookID;
                myLibrary.DisplayDocumentInfo(bookID);
                break;
            case 6:
                cout << "Please enter author's name: ";
                char author[30];
                cin.get();
                cin.getline(author, 30);
                myLibrary.DisplayDocumentsByAuthor(author);
                break;
            case 7:
                exit = true;
                break;
            default:
                cout << "Invalid Input!" << endl;
                break;
        }
        
    }while (!exit);
    
    system("pause");
    return 0;
}
