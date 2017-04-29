#include <iostream> // Starts the preprocessor
using namespace std; // Sets the namespace

class Document // Creates the Document base class
{
public: // Makes variables accessible by subclasses
	const char* m_BookTitle;
	const char* m_LibraryIDCode;
	const char* m_CheckoutDuration;
	const char* m_AuthorName;
	const char* m_DocumentType;


	void PrintType() // Function to list by type
	{
		cout << "Document Type: \t" << m_DocumentType << endl;
	}
	void PrintInfo() // Function to list info
	{
		cout << "Library ID: \t" << m_LibraryIDCode << endl;
		cout << "Checkout Duration: \t" << m_CheckoutDuration << endl;
		cout << "Author Name: \t" << m_AuthorName << endl;
	}

	void PrintAuthor() // Function to list by author
	{
		cout << "Author Name: \t" << m_AuthorName << endl;
	}
};


// Creates a Book class that can access Document class functions
class Book : public Document 
{


public:
  void PrintAllBooks()
	  {
	  	cout << "Books:\n"
	  			"Adventures In Wonderland\n"
	  			"The Color Code\n"
	  			"Color Theory\n";
	  }
    Book();
    ~Book();
 
};

Book :: Book()
{
};

Book :: ~Book()
{
};

class AdventuresInWonderland : public Book, public Document
{

public: 
	AdventuresInWonderland();
	~AdventuresInWonderland();
};
AdventuresInWonderland :: AdventuresInWonderland()
{
	  m_BookTitle = "Adventures in WonderLand";
      m_LibraryIDCode = "010010";
      m_CheckoutDuration = "22 Days";
      m_AuthorName = "Some Name"; 
};

class Magazines
{
protected:
	int m_month;
	int m_year;

public:
	void Display();
};


class Newspapers
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





int main() // Main program
{
	char MenuChoice;
	bool Repeat = false;
	cout << "Welcome to the library! \n"
			"1. List documents by type \n"
			"2. Find information on specific book \n"
			"3. List all documents by author \n"
			"4. Exit the library application \n";
	do{
		cin >> MenuChoice;
		switch (MenuChoice)
		{
			case '1': {cout << "Here is a list of all of our documents by type." << endl;

                
  
					system("pause");}
					Repeat = false;
					break;
			case '2': {cout << "What book would you like more information on?" << endl;


					system("pause");}
					Repeat = false;
					break;
			case '3': {cout << "Here are all the documents by author." << endl;


					system("pause");}
					Repeat = false;
					break;
			case '4': {cout << "Have a nice day!" << endl;
					system("pause");}
					Repeat = false;
					break;

			default: {cout << "Invalid choice. Try again." <<endl;
					 Repeat = true;
					 break;
		}
	   }
	}while(Repeat == true);
}
/* 	====================================[ BUG NOTES ]=========================================
Book simplebook = Book();
                    simplebook.PrintInfo();
=========================================================================================== */
