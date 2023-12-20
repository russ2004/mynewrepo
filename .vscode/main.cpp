#include <iostream>

using namespace std;

class Book
{
    private: 
            string bookversion;
    public:
             int pagenum;
            string bookname;
            double price;


    
    Book (int apagenum, string abookname, double aprice, string abookversion){
        pagenum = apagenum;
        bookname = abookname;
        price = aprice;
        setbookversion(abookversion);
        
    }

    void setbookversion(string abookversion){

        if (abookversion == "Adventure" || abookversion == "Romance" || abookversion == "Science fiction" || abookversion == "History")
        {
            bookversion = abookversion ;
        }   
        else{
            cout << "Invalid book version" << endl;
        }
    }

    string getbookversion(){
        return bookversion;
    }
};


int main(){

    Book mybook(245, "Maugli",46.5,"Munir");

    cout << mybook.getbookversion() << endl;

    return 0;

}