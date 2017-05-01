#include <iostream> // Starts the preprocessor
using namespace std; // Sets the namespace

class Documents // Creates the Documents base class
{
public: // Makes variables accessible by subclasses

	const char* m_Title1;
	const char* m_Title2;
	const char* m_Title3;

	const char* m_LibraryIDCode1;
	const char* m_LibraryIDCode2;
	const char* m_LibraryIDCode3;

	const char* m_CheckoutDuration1;
	const char* m_CheckoutDuration2;
	const char* m_CheckoutDuration3;

	const char* m_AuthorName1;
	const char* m_AuthorName2;
	const char* m_AuthorName3;

	const char* m_DocumentType1;
	const char* m_DocumentType2;
	const char* m_DocumentType3;

	void PrintDocuments()
	{
		cout << "Title: \t" << m_Title1 << endl;
		cout << "Library ID: \t" << m_LibraryIDCode1 << endl;
		cout << "Checkout Duration: \t" << m_CheckoutDuration1 << endl;
		cout << "Author Name: \t" << m_AuthorName1 << endl;

		cout << "Title: \t" << m_Title2 << endl;
		cout << "Library ID: \t" << m_LibraryIDCode2 << endl;
		cout << "Checkout Duration: \t" << m_CheckoutDuration2 << endl;
		cout << "Author Name: \t" << m_AuthorName2 << endl;

		cout << "Title: \t" << m_Title3 << endl;		
		cout << "Library ID: \t" << m_LibraryIDCode3 << endl;
		cout << "Checkout Duration: \t" << m_CheckoutDuration3 << endl;
		cout << "Author Name: \t" << m_AuthorName3 << endl;
	}
	void PrintType() // Function to list by type
	{
		cout << "Document Type: \t" << m_DocumentType1 << endl;
	}
	void PrintInfo() // Function to list info
	{
		cout << "Library ID: \t" << m_LibraryIDCode1 << endl;
		cout << "Checkout Duration: \t" << m_CheckoutDuration1 << endl;
		cout << "Author Name: \t" << m_AuthorName1 << endl;
	}

	void PrintAuthor() // Function to list by author
	{
		cout << "Author Name: \t" << m_AuthorName1 << endl;
	}
};


// Creates a Book class that can access Document class functions
class Books : public Documents 
{
public:

    Books();
    ~Books();
};

Books :: Books()
{
     m_Title1 = "Adventures in WonderLand";
     m_LibraryIDCode1 = "010010";
     m_CheckoutDuration1 = "22 Days";
     m_AuthorName1 = "Lewis Carrol"; 
       
     m_Title2 = "Lolita";
     m_LibraryIDCode2 = "010020";
     m_CheckoutDuration2 = "7 Days";
     m_AuthorName2 = "Vladimir Nabokov"; 

     m_Title3 = "The Great Gatsby";
     m_LibraryIDCode3 = "010077";
     m_CheckoutDuration3 = "3 Days";
     m_AuthorName3 = "F. Scott Fitzgerald"; 

};

Books :: ~Books()
{
};


class Magazines : public Documents
{
public:
	Magazines();
	~Magazines();
};

Magazines :: Magazines()
{
	 m_Title1 = "Game Informer";
     m_LibraryIDCode1 = "110010";
     m_CheckoutDuration1 = "14 Days";
     m_AuthorName1 = "GameStop"; 
       
     m_Title2 = "Communication Arts";
     m_LibraryIDCode2 = "111020";
     m_CheckoutDuration2 = "2 Days";
     m_AuthorName2 = "Eric A. Havelock"; 

     m_Title3 = "Men's Health";
     m_LibraryIDCode3 = "110073";
     m_CheckoutDuration3 = "27 Days";
     m_AuthorName3 = "Jill Yaworski"; 
};

Magazines :: ~Magazines()
{
};

class Newspapers : public Documents
{
public:
	Newspapers();
	~Newspapers();
};

Newspapers :: Newspapers()
{
	 m_Title1 = "Game Informer";
     m_LibraryIDCode1 = "110010";
     m_CheckoutDuration1 = "14 Days";
     m_AuthorName1 = "GameStop"; 
       
     m_Title2 = "Communication Arts";
     m_LibraryIDCode2 = "111020";
     m_CheckoutDuration2 = "2 Days";
     m_AuthorName2 = "Eric A. Havelock"; 

     m_Title3 = "Men's Health";
     m_LibraryIDCode3 = "110073";
     m_CheckoutDuration3 = "27 Days";
     m_AuthorName3 = "Jill Yaworski"; 
};

Newspapers :: ~Newspapers()
{
};


class EBooks : public Documents
{
public:
    EBooks();
    ~EBooks();
};

EBooks :: EBooks()
{
	 m_Title1 = "Game Informer";
     m_LibraryIDCode1 = "110010";
     m_CheckoutDuration1 = "14 Days";
     m_AuthorName1 = "GameStop"; 
       
     m_Title2 = "Communication Arts";
     m_LibraryIDCode2 = "111020";
     m_CheckoutDuration2 = "2 Days";
     m_AuthorName2 = "Eric A. Havelock"; 

     m_Title3 = "Men's Health";
     m_LibraryIDCode3 = "110073";
     m_CheckoutDuration3 = "27 Days";
     m_AuthorName3 = "Jill Yaworski"; 
};

EBooks :: ~EBooks()
{
};

int main() // Main program
{
	char MenuChoice;
	bool Repeat = false;
	cout << "\n=====================================================\n"
			"\t Welcome to the Library! \n"
			"=====================================================\n\n"
			"1. List documents by type \n \n"
			"2. Find information on specific book \n \n"
			"3. List all documents by author \n \n"
			"4. Exit the library application \n \n";
	do{
		cin >> MenuChoice;
		switch (MenuChoice)
		{
			case '1': {cout << "\nHere is a list of all of our documents by type.\n"
					"\n--------------------------------------------\n"
					"\t Books \n"
					"--------------------------------------------\n\n";
                    Books simplebook = Books();
                    simplebook.PrintDocuments();
                    
                    cout <<
					"\n--------------------------------------------\n"
					"\t Magazines \n"
					"--------------------------------------------\n\n";
                    Magazines simplemagazine = Magazines();
                    simplemagazine.PrintDocuments();

                    cout <<
					"\n--------------------------------------------\n"
					"\t Newspapers \n"
					"--------------------------------------------\n\n";
                    Newspapers simplenewspaper = Newspapers();
                    simplenewspaper.PrintDocuments();

                    cout <<
					"\n--------------------------------------------\n"
					"\t E-Books \n"
					"--------------------------------------------\n\n";
                    EBooks simpleebook = EBooks();
                    simpleebook.PrintDocuments();
                    
  
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
