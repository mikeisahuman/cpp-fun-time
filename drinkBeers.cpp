//
//  drinkBeers.cpp
//  
//
//  Created by Michael P on 7/6/16.
//
//      Exploring the use of classes by drinking beers!
//          * Now using a separate header file, with inline functions

#include "drinkBeers.h"


//  define constructor (initialization) & destructor (does nothing)
beer_belly::beer_belly( unsigned int beerInit )
{
    itsBeers = beerInit;
}

beer_belly::~beer_belly()
{   }



//  define final member function: behavior of person after so many beers
void beer_belly::Response()
{
    switch (itsBeers)
    {
        case 0: cout << "\nYou are sober.\n";
            break;
        case 1: cout << "\nMmmm, that was tasty!\n";
            break;
        case 2: cout << "\nYou're getting tipsy...\n";
            break;
        case 3: cout << "\nYou're feeling buzzed...\n";
            break;
        case 4: cout << "\nYou're drunk!\n";
            break;
        case 5: cout << "\nThe room is spinning...\n";
            break;
        case 6: cout << "\nYou strip down and pass out on the patio. Have a good night?\n\n\n";
            break;
        default: cout << "\nToo many beers...you can't remember anything!\n\n\n";
            break;
    }
}



/*  **************************************************  */
//  Now, let's create a "beer_belly" and have the user tell it how much to drink.
int main()
{
    unsigned int bAdd = 0;
    unsigned int bInit;
    
    cout << "\nHow many beers have you already had?\t";
    cin >> bInit;
    
    beer_belly Miguel( bInit );   //  initialize "Miguel" with "bInit" beers (call constructor with bInit)
    
    do                      //  use a "do..while" loop to write the response at least once
    {
        
        Miguel.Response();        //  display the current state
        
            if ( Miguel.AskBeers() >= 6 )   //  break out after so many (6) beers
                break;
        
        cout << "\nHow many beers would you like?\t\t";
        cin >> bAdd;            //  input a number of beers to drink
        Miguel.DrinkBeers( bAdd );  //  add those beers to the count
        
        cout << "\nYou have had " << Miguel.AskBeers(); //  display the current number of beers
            if ( Miguel.AskBeers() == 1 )               //  use singular if only 1 in the belly
                cout << " beer tonight.\n";
            else
                cout << " beers tonight.\n";
        
    }   while (bAdd > 0);
    
    if ( bAdd == 0 && Miguel.AskBeers() < 6 )           //  provide a message for stopping before having too many
        cout << "\nYou call it a night.\n\n\n";
    
    if ( Miguel.AskBeers() == 0 )   //  provide a message for sustained sobriety
        cout << "\nYou stay sober.\n\n\n";
    
    return 0;
}

