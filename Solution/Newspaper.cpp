#include "Newspaper.h"
#include <iostream>

using namespace std;

Newspaper::Newspaper(int id, int duration, char* author, int day, int month, int year)
: Magazine(id, duration, author, month, year)
, m_day(day)
{
    
}

Newspaper::~Newspaper()
{
    
}

int Newspaper::GetPublicationDay()
{
    return m_day;
}

void Newspaper::Display()
{
    Document::Display();
    cout << "Date:" << m_day << "/" << m_month << "/" << m_year << "" << endl;
}
