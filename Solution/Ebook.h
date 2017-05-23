#pragma once
#include "Book.h"

enum Format
{
    AZW,
    TXT,
    PDF,
    MOBI
};

class Ebook : public Book
{
protected:
    Format m_format;
    
public:
    Ebook(int id, int duration, char* author, char* title, Format format);
    ~Ebook();
    
    Format GetFormat();
    
    void Display();
};
