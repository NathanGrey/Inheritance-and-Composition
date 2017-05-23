#pragma once
#include "Book.h"
#include "Magazine.h"
#include "Newspaper.h"
#include "Ebook.h"

class Library
{
private:
    static const int k_MaxDocsPerType = 20;
    
    int m_numberOfBooks;
    
    // You use ** to create a dynamic 2D array, so that you can create the objects
    // as you go using an appropriate constructor.
    Book** m_pBooks;
    
    // You could just use *, but this will need to create the objects right away
    // using a default constructor, which is not the ideal.
    // Book* m_pBooks; // Allocates all elements using default constructo
    
    // You can also use *[] in a similar way as **. These two will produce very similar
    // results, but with ** you will have to do a bit more memeory management.
    // No need to allocate and delete actual array, just each element
    // Book* m_pBooks[k_MaxDocsPerType]; // just allocate each element: m_pBooks[m_numberOfBooks++] = new Book(id, duration, author, title);
    
    int m_numberOfMagazines;
    Magazine** m_pMagazines;
    
    int m_numberOfNewspapers;
    Newspaper** m_pNewspapers;
    
    int m_numberOfEbooks;
    Ebook** m_pEbooks;
    
public:
    Library();
    ~Library();
    
    void AddBook(int id, int duration, char* author, char* title);
    void AddMagazine(int id, int duration, char* author, int month, int year);
    void AddNewspaper(int id, int duration, char* author, int day,int month, int year);
    void AddEbook(int id, int duration, char* author, char* title, Format format);
    
    void DisplayAllBooks();
    void DisplayAllMagazines();
    void DisplayAllNewspapers();
    void DisplayAllEbooks();
    
    void DisplayDocumentInfo(int id);
    void DisplayDocumentsByAuthor(char* author);
};
