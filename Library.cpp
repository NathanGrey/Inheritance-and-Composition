#include <iostream>
using namespace std;

class Document
{
protected:
	char* m_LibraryIDCode;
	char* m_CheckoutDuration;
	char* m_AuthorName;

public:
	void PrintInfo()
	{
		cout << "Library ID:" << m_LibraryIDCode << endl;
		cout << "Checkout Duration:" << m_CheckoutDuration << endl;
		cout << "Author Name:" << m_AuthorName << endl;
	}
};



class Book : public Document
{

protected:
	int m_month;
	int m_year;
public:
    Book()
    {
        m_LibraryIDCode = "010010";
        m_CheckoutDuration = "22 Days";
        m_AuthorName = "Some Name"; 
    }
    ;
    ~Book();

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
					Book simplebook = Book();
					simplebook.PrintInfo();
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
