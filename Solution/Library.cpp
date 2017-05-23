#include "Library.h"
#include <iostream>

using namespace std;

Library::Library()
: m_numberOfBooks(0)
, m_numberOfMagazines(0)
, m_numberOfNewspapers(0)
, m_numberOfEbooks(0)
{
    m_pBooks = new Book*[k_MaxDocsPerType];
    m_pMagazines = new Magazine*[k_MaxDocsPerType];
    m_pNewspapers = new Newspaper*[k_MaxDocsPerType];
    m_pEbooks = new Ebook*[k_MaxDocsPerType];
}

Library::~Library()
{
    for(int i = 0; i < m_numberOfBooks; ++i)
    {
        delete m_pBooks[i];
        m_pBooks[i] = nullptr;
    }
    
    delete[] m_pBooks;
    m_pBooks = nullptr;
    
    for (int i = 0; i < m_numberOfMagazines; ++i)
    {
        delete m_pMagazines[i];
        m_pMagazines[i] = nullptr;
    }
    
    delete[] m_pMagazines;
    m_pMagazines = nullptr;
    
    for (int i = 0; i < m_numberOfNewspapers; ++i)
    {
        delete m_pNewspapers[i];
        m_pNewspapers[i] = nullptr;
    }
    
    delete[] m_pNewspapers;
    m_pNewspapers = nullptr;
    
    for (int i = 0; i < m_numberOfEbooks; ++i)
    {
        delete m_pEbooks[i];
        m_pEbooks[i] = nullptr;
    }
    
    delete[] m_pEbooks;
    m_pEbooks = nullptr;
}

void Library::AddNewspaper(int id, int duration, char *author, int day, int month, int year)
{
    if(m_numberOfNewspapers < k_MaxDocsPerType)
    {
        m_pNewspapers[m_numberOfNewspapers++] = new Newspaper(id, duration, author, day, month, year);
    }
        
}

void Library::AddEbook(int id, int duration, char* author, char* title, Format format)
{
    if (m_numberOfEbooks < k_MaxDocsPerType)
    {
        m_pEbooks[m_numberOfEbooks++] = new Ebook(id, duration, author, title, format);
    }
}

void Library::DisplayAllBooks()
{
    cout << endl << "   BOOKS" << endl;
    for (int i = 0; i < m_numberOfBooks; ++i)
    {
        cout << i + 1 << "-----------------" << endl;
        m_pBooks[i]->Display();
    }
}


void Library::DisplayAllMagazines()
{
    cout << endl << "    MAGAZINES" << endl;
    for (int i = 0; i < m_numberOfMagazines; ++i)
    {
        cout << i + 1 << "-----------------" << endl;
        m_pMagazines[i]->Display();
    }
}

void Library::DisplayAllNewspapers()
{
    cout<< endl << "    NEWSPAPERS" << endl;
    for (int i = 0; i < m_numberOfNewspapers; ++i)
    {
        cout << i + 1 << "-----------------" << endl;
        m_pNewspapers[i]->Display();
    }
}

void Library::DisplayAllEbooks()
{
    cout << endl << "   EBOOKS" << endl;
    for (int i = 0; i < m_numberOfEbooks; ++i)
    {
        cout << i + 1 << "-----------------" << endl;
        m_pEbooks[i]->Display();
    }
}

void Library::DisplayDocumentInfo(int id)
{
    for (int i = 0; i < m_numberOfBooks; ++i)
    {
        if(m_pBooks[i]->GetID() == id)
            m_pBooks[i]->Display();
    }
    
    for (int i = 0; i < m_numberOfMagazines; ++i)
    {
        if(m_pMagazines[i]->GetID() == id)
            m_pMagazines[i]->Display();
    }
    
    for (int i = 0; i < m_numberOfNewspapers; ++i)
    {
        if(m_pNewspapers[i]->GetID() == id)
            m_pNewspapers[i]->Display();
    }
    for (int i = 0; i < m_numberOfEbooks; ++i)
    {
        if(m_pEbooks[i]->GetID() == id)
            m_pEbooks[i]->Display();
    }
}

void Library::DisplayDocumentsByAuthor(char *author)
{
    for (int i = 0; i < m_numberOfBooks; ++i)
    {
        if (strcmp(m_pBooks[i]->GetAuthor(), author) == 0)
            m_pBooks[i]->Display();
    }
    for (int i = 0; i < m_numberOfMagazines; ++i)
    {
        if (strcmp(m_pMagazines[i]->GetAuthor(), author) == 0)
            m_pMagazines[i]->Display();
    }
    for (int i = 0; i < m_numberOfNewspapers; ++i)
    {
        if (strcmp(m_pNewspapers[i]->GetAuthor(), author) == 0)
            m_pNewspapers[i]->Display();
    }
    for (int i = 0; i < m_numberOfEbooks; ++i)
    {
        if (strcmp(m_pEbooks[i]->GetAuthor(), author) == 0)
            m_pEbooks[i]->Display();
    }
    
}
