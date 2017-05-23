#pragma once
class Document
{
protected:
    int m_ID;
    int m_duration; // in days
    char* m_author;
public:
    Document(int id, int duratation, char* author);
    ~Document();
    
    int GetID();
    
    int GetDuration();
    void UpdateDuration(int newDuration);
    
    char* GetAuthor();
    
    void Display();
};
