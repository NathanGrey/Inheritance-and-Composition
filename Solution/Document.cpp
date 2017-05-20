#include "Document.h"
#include <cstring>
#include <iostream>

using namespace std;

Document::Document(int id, int duration, char* author)
: m_ID(id)
, m_duration(duration)
, m_author(author)
{
    //m_author = new char[strlen(author) + 1];
    //strcpy_s(m_author, strlen(author) + 1, author);
}

Document::~Document()
{
    //if (m_author != nullptr)
    //{
    // delete [] m_author;
    // m_auhtor = nullptr;
    //}
}

int Document::GetID()
{
    return m_ID;
}

int Document::GetDuration()
{
    return m_duration;
}

void Document::UpdateDuration(int newDuration)
{
    m_duration = newDuration;
}

char* Document::GetAuthor()
{
    return m_author;
}

void Document::Display()
{
    cout << "ID: " << m_ID << endl;
    cout << "Duration: " << m_duration << endl;
    cout << "Author: " << m_author << endl;
}
