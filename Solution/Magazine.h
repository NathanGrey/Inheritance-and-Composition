#pragma once
#include "Document.h"

class Magazine : public Document
{
protected:
    int m_month;
    int m_year;
public:
    Magazine(int id, int duration, char* author, int month, int year);
    ~Magazine();
    
    int GetPublicationMonth();
    int GetPublicationYear();
    
    void Display();
    
};
