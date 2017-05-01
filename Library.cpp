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
		cout << m_Title1 << endl;
		cout << m_Title2 << endl;
		cout << m_Title3 << endl;		
	}

	void PrintAuthor()
	{
		cout << m_AuthorName1 << endl;
		cout << m_AuthorName2 << endl;
		cout << m_AuthorName3 << endl;
	}

	void PrintDocumentInfo1()
	{
		cout << "\nTitle: \t" << m_Title1 << endl;
		cout << "Library ID: \t" << m_LibraryIDCode1 << endl;
		cout << "Checkout Duration: \t" << m_CheckoutDuration1 << endl;
		cout << "Author Name: \t" << m_AuthorName1 << endl;
	}

	void PrintDocumentInfo2()
	{
		cout << "\nTitle: \t" << m_Title2 << endl;
		cout << "Library ID: \t" << m_LibraryIDCode2 << endl;
		cout << "Checkout Duration: \t" << m_CheckoutDuration2 << endl;
		cout << "Author Name: \t" << m_AuthorName2 << endl;
	}
	
	void PrintDocumentInfo3()
	{
		cout << "\nTitle: \t" << m_Title3 << endl;
		cout << "Library ID: \t" << m_LibraryIDCode3 << endl;
		cout << "Checkout Duration: \t" << m_CheckoutDuration3 << endl;
		cout << "Author Name: \t" << m_AuthorName3 << endl;
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
	 m_Title1 = "The San Francisco Chronicle";
     m_LibraryIDCode1 = "330010";
     m_CheckoutDuration1 = "1 Day";
     m_AuthorName1 = "San Francisco"; 
       
     m_Title2 = "The New Yorker";
     m_LibraryIDCode2 = "333020";
     m_CheckoutDuration2 = "1 Day";
     m_AuthorName2 = "New York"; 

     m_Title3 = "The Sun and The Mirror";
     m_LibraryIDCode3 = "334073";
     m_CheckoutDuration3 = "1 Day";
     m_AuthorName3 = "London"; 
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
	 m_Title1 = "Spiderman Issue # 1";
     m_LibraryIDCode1 = "777010";
     m_CheckoutDuration1 = "10 Days";
     m_AuthorName1 = "Peter Parker"; 
       
     m_Title2 = "Deadpool Issue # 7";
     m_LibraryIDCode2 = "777820";
     m_CheckoutDuration2 = "20 Days";
     m_AuthorName2 = "Wade Wilson"; 

     m_Title3 = "Wolverine Issue # 23";
     m_LibraryIDCode3 = "118973";
     m_CheckoutDuration3 = "6 Days";
     m_AuthorName3 = "James Howlett"; 
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
			"1. List all documents by type \n \n"
			"2. List all documents by author \n \n"
			"3. Exit the library application \n \n";
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
                    
                    int DocumentChoice;

                    cout << "\nWhich document would you like more information on?\n\n"
                   		    "1. Adventures in WonderLand\n"      
							"2. Lolita\n"
							"3. The Great Gatsby\n"
							"4. Game Informer\n"
							"5. Communication Arts\n"
							"6. Men's Health\n"
							"7. The San Francisco Chronicle\n"
							"8. The New Yorker\n"
							"9. The Sun and The Mirror\n"
							"10. Spiderman Issue # 1\n"
							"11. Deadpool Issue # 7\n"
							"12. Wolverine Issue # 23\n\n";
                    cin >> DocumentChoice;

                    switch (DocumentChoice)
                    {
                    	case 1: {
                    				Books infobook = Books();
                    				infobook.PrintDocumentInfo1();

                    				}
                    				break;
                    	case 2: {
                    				Books infobook = Books();
                    				infobook.PrintDocumentInfo2();
                    				
                    				}
                    				break;

                    	case 3: {
                    				Books infobook = Books();
                    				infobook.PrintDocumentInfo3();
                    				
                    				}
                    				break;

                    	case 4: {
                    				Magazines infomag = Magazines();
                    				infomag.PrintDocumentInfo1();
                    				
                    				}
                    				break;

                    	case 5: {
                    				Magazines infomag = Magazines();
                    				infomag.PrintDocumentInfo2();
                    				
                    				}
                    				break;

                    	case 6: {
                    				Magazines infomag = Magazines();
                    				infomag.PrintDocumentInfo3();
                    				
                    				}
                    				break;

                    	case 7: {
                    				Newspapers infonews = Newspapers();
                    				infonews.PrintDocumentInfo1();
                    				
                    				}
                    				break;

                    	case 8: {
                    				Newspapers infonews = Newspapers();
                    				infonews.PrintDocumentInfo2();
                    				
                    				}
                    				break;

                    	case 9: {
                    				Newspapers infonews = Newspapers();
                    				infonews.PrintDocumentInfo3();
                    				
                    				}
                    				break;

                    	case 10: {
                    				EBooks infoebook = EBooks();
                    				infoebook.PrintDocumentInfo1();
                    				
                    				}
                    				break;

                    	case 11: {
                    				EBooks infoebook = EBooks();
                    				infoebook.PrintDocumentInfo2();
                    				
                    				}
                    				break;

                    	case 12: {
                    				EBooks infoebook = EBooks();
                    				infoebook.PrintDocumentInfo3();
                    				
                    				}
                    				break;

                    	default: {cout << "Invalid choice.";
                    				system("pause");
                    				}
                    				break;
                    }

					}
					Repeat = false;
					break;

			case '2': {cout << "Here are all the documents by author." << endl;

					Books authorbook = Books();
                    authorbook.PrintAuthor();

					Magazines authormagazine = Magazines();
                    authormagazine.PrintAuthor();

                    Newspapers authornewspaper = Newspapers();
                    authornewspaper.PrintAuthor();

					EBooks authorebook = EBooks();
                    authorebook.PrintAuthor();

					int DocumentChoice;

					cout << "\nWhich author would you like more information on?\n\n"
                   		    "1. Lewis Carrol\n"
							"2. Vladimir Nabokov\n"
							"3. F. Scott Fitzgerald\n"
							"4. GameStop\n"
							"5. Eric A. Havelock\n"
							"6. Jill Yaworski\n"
							"7. San Francisco\n"
							"8. New York\n"
							"9. London\n"
							"10. Peter Parker\n"
							"11. Wade Wilson\n"
							"12. James Howlett\n\n";

 					cin >> DocumentChoice;

                    switch (DocumentChoice)
                    {
                    	case 1: {
                    				Books infobook = Books();
                    				infobook.PrintDocumentInfo1();

                    				}
                    				break;
                    	case 2: {
                    				Books infobook = Books();
                    				infobook.PrintDocumentInfo2();
                    				
                    				}
                    				break;

                    	case 3: {
                    				Books infobook = Books();
                    				infobook.PrintDocumentInfo3();
                    				
                    				}
                    				break;

                    	case 4: {
                    				Magazines infomag = Magazines();
                    				infomag.PrintDocumentInfo1();
                    				
                    				}
                    				break;

                    	case 5: {
                    				Magazines infomag = Magazines();
                    				infomag.PrintDocumentInfo2();
                    				
                    				}
                    				break;

                    	case 6: {
                    				Magazines infomag = Magazines();
                    				infomag.PrintDocumentInfo3();
                    				
                    				}
                    				break;

                    	case 7: {
                    				Newspapers infonews = Newspapers();
                    				infonews.PrintDocumentInfo1();
                    				
                    				}
                    				break;

                    	case 8: {
                    				Newspapers infonews = Newspapers();
                    				infonews.PrintDocumentInfo2();
                    				
                    				}
                    				break;

                    	case 9: {
                    				Newspapers infonews = Newspapers();
                    				infonews.PrintDocumentInfo3();
                    				
                    				}
                    				break;

                    	case 10: {
                    				EBooks infoebook = EBooks();
                    				infoebook.PrintDocumentInfo1();
                    				
                    				}
                    				break;

                    	case 11: {
                    				EBooks infoebook = EBooks();
                    				infoebook.PrintDocumentInfo2();
                    				
                    				}
                    				break;

                    	case 12: {
                    				EBooks infoebook = EBooks();
                    				infoebook.PrintDocumentInfo3();
                    				
                    				}
                    				break;

                    	default: {cout << "Invalid choice.";
                    				system("pause");
                    				}
                    				break;
                    }
					system("pause");}
					Repeat = false;
					break;

			case '3': {cout << "Have a nice day!" << endl;
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

=========================================================================================== */
