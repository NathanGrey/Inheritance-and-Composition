#include "Book.h"
#include <cstring>
#include <iostream>

using namespace std;

Book::Book(int id, int duration, char* author, char* title)
:Document(id, duration, author)
, m_title(title)
{
    
}

Book::~Book()
{
    
}

char* Book::GetTitle()
{
    return m_title;
}

void Book::Display()
{
    Document::Display();
    cout << "Title: " << m_title << endl;
}
