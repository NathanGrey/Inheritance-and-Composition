#include "Magazine.h"
#include <iostream>

using namespace std;

Magazine::Magazine(int id, int duration, char* author, int month, int year)
:Document(id, duration, author)
, m_month(month)
, m_year(year)
{
    
}

Magazine::~Magazine()
{
    
}

int Magazine::GetPublicationMonth()
{
    return m_month;
}

int Magazine::GetPublicationYear()
{
    return m_year;
}

void Magazine::Display()
{
    Document::Display();
    cout << "Date: (" << m_month << ", " << m_year << ")" << endl;
}
