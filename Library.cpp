#include <iostream>
using namespace std;

class Document
{
public:
	m_LibraryIDCode;
	m_CheckoutDuration;
	m_AuthorName;

	void Document::PrintInfo()
	{
		cout << "Library ID:" << m_LibraryIDCode << endl;
		cout << "Checkout Duration:" << m_CheckoutDuration << endl;
		cout << "Author Name:" << m_AuthorName << endl;

	}
};



class Books
{
protected:
	int m_month;
	int m_year;

public:
	void Display();
};



class Magazines
{
protected:
	int m_month;
	int m_year;

public:
	void Display();
};



class Ebooks
{
protected:
	int m_month;
	int m_year;

public:
	void Display();
};


	int main()
	{
		int MenuChoice;

		cout << "Welcome to the library! \n"
				"1. List documents by type \n"
				"2. Find information on specific book \n"
				"3. List all documents by author \n"
				"4. Exit the library application \n";

		cin >> MenuChoice;
		switch (MenuChoice)
		{
			case 1: cout << "Here is a list of all of our documents by type.";
					system("pause");
					break;
			case 2: cout << "What book would you like more information on?";
					system("pause");
					break;
			case 3: cout << "Here are all the documents arranged by author.";
					system("pause");
					break;
			case 4: cout << "Have a nice day!";
					system("pause");
					break;

			default: cout << "Invalid choice. Try again.";
					 cin >> MenuChoice;
		}
	}
/* 	====================================[ BUG NOTES ]=========================================

=========================================================================================== */