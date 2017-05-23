#pragma once
#include "Magazine.h"
#include <cstring>

class Newspaper : public Magazine
{
protected:
    int m_day;
public:
    Newspaper(int id, int duration, char* author, int day, int month, int year);
    ~Newspaper();
    
    int GetPublicationDay();
    
    void Display();
};
