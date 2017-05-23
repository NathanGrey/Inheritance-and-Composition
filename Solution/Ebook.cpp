#include "Ebook.h"
#include <iostream>

using namespace std;

Ebook::Ebook(int id, int duration, char* author, char* title Format format)
:Book(id, duration, author, title)
, m_format(format)

{
    
}

Ebook::~Ebook()
{
    
}

Format Ebook::GetFormat()
{
    return m_format;
    
}

void Ebook::Display()
{
    Book::Display();
    
    switch (m_format)
    {
        case AZW:
            cout << "Format: AZW" << endl;
            break;
        case TXT:
            cout << "Format: TXT" << endl;
            break;
        case PDF:
            cout << "Format: PDF" << endl;
            break;
        case MOBI:
            cout << "Format: MOBI" << endl;
            break;
        default:
            cout << "Format: Undefined" << endl;
            break;
    }
}
