
// Coded by: ABDULKADER SARDINI

#include <iostream>

//Global variables
using namespace std;

char type, date;

int studentNo, others;

//Key functions
void getInput(char&, char&, int&, int&);

int calTicketPrice(char, char, int, int);


//Start main function
int main()
{
    cout << "<< Welcome to Legoland Malaysia theme park! >>\n";

    cout << endl;


    char cont;

    //Input validation loop to decide whether to enter new data or terminate the program
    do
    {
        getInput(type, date, studentNo, others);  //Get user input function

        cout << "Total ticket price = RM " << calTicketPrice(type, date, studentNo, others) << endl; //Calculate the price using the function and display it

        cout << endl;

        cout << "press 'Y' to enter other data: ";

        cin >> cont;

        cout << endl;

    } while ((cont == 'Y') || (cont == 'y'));


    system("pause");

    return 0;

}


//User input function.
void getInput(char& type, char& date, int& studentNo, int& others)
{

    //Input validation loop that limits the choice to T and C, both uppercase and lowercase
    do
    {
        cout << "Ticket type ([T] Theme park/[C] Combo): ";

        cin >> type;

        cout << endl;


    } while ((type != 'T' && type != 't') && (type != 'C' && type != 'c'));


    //Input validation loop that limits the choice to W and O, both uppercase and lowercase
    do
    {
        cout << "Visiting date ([W] Weekdays/[O] Others): ";

        cin >> date;

        cout << endl;


    } while (((date != 'W') && (date != 'w')) && ((date != 'O') && (date != 'o')));


    cout << "Number of stuents: ";

    cin >> studentNo;

    cout << endl;


    cout << "Number of others (Teachers/ Parents): ";

    cin >> others;

    cout << endl;

}

//Function that calculates the ticket price based on the previously inserted values
int calTicketPrice(char type, char date, int studentNo, int others)
{
    int ticketPrice = 0;

    //Nested switch statement to choose the correct calculation formula based on different user choices
    switch (type)
    {

    case 't':
    case 'T':

        switch (date)
        {
        case'w':
        case 'W': ticketPrice = (studentNo * 90) + (others * 175);
            break;

        case'o':
        case 'O': ticketPrice = (studentNo * 112) + (others * 175);
            break;
        }

        break;

            

    case'c':
    case 'C':

        switch (date)
        {
        case'w':
        case 'W': ticketPrice = (studentNo * 201) + (others * 303);
            break;

        case'o':
        case 'O': ticketPrice = (studentNo * 223) + (others * 303);
            break;
        }

        break;
    }
        

    return ticketPrice;
    
}