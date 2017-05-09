#include <iostream> // Starts the preprocessor
using namespace std; // Sets the namespace

class Library // Creates the Library base class
{
protected: // Makes variables accessible by subclasses

     const char* m_Title; // Declaration of variables
     const char* m_LibraryIDCode;
     const char* m_CheckoutDuration;
     const char* m_AuthorName;


     void PrintDocuments() // Function to print the titles of all documents
     {
          cout << m_Title << endl;      
     }

     void PrintAuthor() // Function to print the author of all documents
     {
          cout << m_AuthorName << endl;
     }

     void PrintDocumentInfo() // Functions for the full information on each document
     {
          cout << "\nTitle: \t" << m_Title << endl;
          cout << "Library ID: \t" << m_LibraryIDCode << endl;
          cout << "Checkout Duration: \t" << m_CheckoutDuration << endl;
          cout << "Author Name: \t" << m_AuthorName << endl;
     }

    
};

// Creates a Books class that can access Document class functions
class Books : public Library
{


};

class AdventuresinWonderLand : public Books, public Library
{
private:

     m_Title = "Adventures in WonderLand";
     m_LibraryIDCode = "010010";
     m_CheckoutDuration = "22 Days";
     m_AuthorName = "Lewis Carrol"; 

};

class Lolita : public Books, public Library
{
private:

     m_Title = "Lolita";
     m_LibraryIDCode = "010020";
     m_CheckoutDuration = "7 Days";
     m_AuthorName = "Vladimir Nabokov"; 

};

class TheGreatGatsby : public Books, public Library
{
private:

     m_Title = "The Great Gatsby";
     m_LibraryIDCode = "010077";
     m_CheckoutDuration = "3 Days";
     m_AuthorName = "F. Scott Fitzgerald"; 

};
// Creates a Magazines class that can access Document class functions
class Magazines : public Documents
{



};

class GameInformer : public Magazines, public Library
{
private:

     m_Title = "Game Informer";
     m_LibraryIDCode = "110010";
     m_CheckoutDuration = "14 Days";
     m_AuthorName = "GameStop"; 

};

class CommunicationArts : public Magazines, public Library
{
private:

     m_Title = "Communication Arts";
     m_LibraryIDCode = "111020";
     m_CheckoutDuration = "2 Days";
     m_AuthorName = "Eric A. Havelock";  

};

class MensHealth : public Magazines, public Library
{
private:

     m_Title = "Men's Health";
     m_LibraryIDCode = "110073";
     m_CheckoutDuration = "27 Days";
     m_AuthorName = "Jill Yaworski"; 

};



// Creates a Newspapers class that can access Document class functions
class Newspapers : public Library
{


     
};


class TheSanFranciscoChronicle : public Newspapers, public Library
{
private:

     m_Title = "The San Francisco Chronicle";
     m_LibraryIDCode = "330010";
     m_CheckoutDuration = "1 Day";
     m_AuthorName = "San Francisco"; 
};

class TheNewYorker : public Newspapers, public Library
{
private:

     m_Title = "The New Yorker";
     m_LibraryIDCode = "330010";
     m_CheckoutDuration = "1 Day";
     m_AuthorName = "San Francisco"; 
};

class TheSunandTheMirror : public Newspapers, public Library
{
private:

     m_Title = "The Sun and The Mirror";
     m_LibraryIDCode = "334073";
     m_CheckoutDuration = "1 Day";
     m_AuthorName = "London"; 
};




// Creates an E-Books class that can access Document class functions
class EBooks : public Documents
{
public:

     m_Title = "Spiderman Issue # 1";
     m_LibraryIDCode = "777010";
     m_CheckoutDuration = "10 Days";
     m_AuthorName = "Peter Parker"; 
       
     m_Title = "Deadpool Issue # 7";
     m_LibraryIDCode = "777820";
     m_CheckoutDuration = "20 Days";
     m_AuthorName = "Wade Wilson"; 

     m_Title = "Wolverine Issue # 23";
     m_LibraryIDCode = "118973";
     m_CheckoutDuration = "6 Days";
     m_AuthorName = "James Howlett"; 
};

class SpidermanIssue1 : public EBooks, public Library
{
private:

     m_Title = "The Sun and The Mirror";
     m_LibraryIDCode = "334073";
     m_CheckoutDuration = "1 Day";
     m_AuthorName = "London"; 
};


int ChoiceSwitch() // Function for the user input
{
      int DocumentChoice;
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
                    return 0;
}
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
                    
                    
                    cout <<
                         "\n--------------------------------------------\n"
                         "\t Magazines \n"
                         "--------------------------------------------\n\n";
                   

                    cout <<
                         "\n--------------------------------------------\n"
                         "\t Newspapers \n"
                         "--------------------------------------------\n\n";
                 
                    cout <<
                         "\n--------------------------------------------\n"
                         "\t E-Books \n"
                         "--------------------------------------------\n\n";
                  
                   


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

                         ChoiceSwitch();
                         system("pause");
                         }
                         Repeat = false;
                         break;

               case '2': {cout << "Here are all the documents by author." << endl;

                    

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

                         ChoiceSwitch();
                         
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
