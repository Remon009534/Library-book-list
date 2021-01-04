#include <iostream>
using namespace std;

class Library
{
    private:
    string author;
    string publication;
    string company;
    string isbnNo;
    string copy;

    public:
    Library(string p, string a, string c, string i, string o)
    {
        author = a;
        publication = p;
        company = c;
        isbnNo = i;
        copy = o;
    }
    void info()
    {
        cout << "Author Name:- " << author << "\n";
        cout << "Publication:- " << publication << "\n";
        cout << "Company name:- " << company << "\n";
        cout << "Isbn Number:- " << isbnNo << "\n";
        cout << "Total Copies:- " << copy << "\n";
    }
};
int main()
{
    cout << "-------Book Lists-------" << "\n";
    Library book1("July 21, 2007", "Jk Rowling", "Bloomsbury", "9780747532743", "12 million copies");

    // book1.publication = "July 21, 2007";
    // book1.company = "Bloomsbury";
    // book1.author = "Jk Rowling";
    // book1.isbnNo = "9780747532743";
    // book1.copy = "12 million copies";
    
    cout << "------Harry Potter and the Deathly Hallows------" << "\n";

    book1.info();

    Library book2("May 1994", "R.L. Stine", "Scholastic", "9781522651864",  "300 million copies");

    // book2.publication = "May 1994";
    // book2.company = "Scholastic";
    // book2.author = "R.L. Stine";
    // book2.isbnNo = "9781522651864";
    // book2.copy = "300 million copies";

    cout << "------The scarecrow walks at midnight------" << "\n";

    book2.info();

    Library book3("October 24, 2011", "Walter Isaacson", "Simon & Schuster (U.S.)", "9781442346277", "379,000 copies ");

    // book3.publication = "October 24, 2011";
    // book3.company = "Simon & Schuster (U.S.)";
    // book3.author = "Walter Isaacson";
    // book3.isbnNo = "9781442346277";
    // book3.copy = "379,000 copies ";

    cout << "------Steve Jobs------" << "\n";

    book3.info();

    Library book4(" November 17, 2020 ","Barack Obama",  "Crown", "9783328600626",  "3 million copies");

    // book4.publication = " November 17, 2020 ";
    // book4.company = "Crown";
    // book4.author = "Barack Obama";
    // book4.isbnNo = "9783328600626";
    // book4.copy = "3 million copies";

    cout << "------A promised land------" << "\n";

    book4.info();

    Library book5("1887", "Arthur Conan Doyle",  "Ward Lock & Co", "9780786116041", "11 copies");

    // book5.publication = "1887";
    // book5.company = "Ward Lock & Co";
    // book5.author = "Arthur Conan Doyle";
    // book5.isbnNo = "9780786116041";
    // book5.copy = "11 copies";

    cout << "------A study in scarlet------" << "\n";

    book5.info();

    Library book6( "January 17, 1964", "Roald Dahl", "Children's fantasy novel", "9780060510640", "20 million copies");

    // book6.publication = "January 17, 1964";
    // book6.company = " Children's fantasy novel";
    // book6.author = "Roald Dahl";
    // book6.isbnNo = "9780060510640";
    // book6.copy = "20 million copies";

    cout << "------Charlie and the chocolate factory------" << "\n";

    book6.info();

    Library book7("September 1, 1952","Ernest Hemingway", "Literary Fiction", "9780137172733",  "50,000 copies" );

    // book7.publication = "September 1, 1952";
    // book7.company = "Literary Fiction";
    // book7.author = "Ernest Hemingway";
    // book7.isbnNo = "9780137172733";
    // book7.copy = "50,000 copies";

    cout << "------the old man and the sea------" << "\n";

    book7.info();

    return 0;
}