#pragma once
#include "Document.h"

class Book : public Document
{
protected:
    char* m_title;
    
public:
    Book(int id, int duration, char* author, char* title);
    ~Book();
    
    char* GetTitle();
    
    void Display();
};
