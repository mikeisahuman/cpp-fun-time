//
//  drinkCoffee.cpp
//  Edited version of drinkBeers.cpp by JonSpalding 
//
//  Created by Michael P on 7/6/16.
//
//      Exploring the use of classes by drinking beers!
//          * Now using a separate header file, with inline functions

#include "drinkCoffee.h"


//  define constructor (initialization) & destructor (does nothing)
coffee_rush::coffee_rush( unsigned int coffeeInit )
{

    itsCoffee = coffeeInit;
}

coffee_rush::~coffee_rush()
{   }



//  define final member function: behavior of person after so many beers
void coffee_rush::Response()
{
    switch (itsCoffee)
    {
        case 0: cout << "\nYou are cranky.\n";
            break;
        case 1: cout << "\nMmmm, that was tasty!\n";
            break;
        case 2: cout << "\nNow you can check your email ...\n";
            break;
        case 3: cout << "\nYou're the greatest genius the world has ever known...\n";
            break;
        case 4: cout << "\nYou're too jittery to focus now!\n";
            break;
        case 5: cout << "\nThe room is spinning...\n";
            break;
        case 6: cout << "\nYou pace back and forth muttering things to yourself in a foreign language that you didn't know you know \n\n\n";
            break;
        default: cout << "\nToo many coffees...your heart explodes from your chest, sending a bloody mess over your officemates' desk! How rude of you! \n\n\n";
            break;
    }
}



/*  **************************************************  */
//  Now, let's create a "coffee_rush" and have the user tell it how much to drink.
int main()
{
    unsigned int bAdd = 0;
    unsigned int bInit;
    
    cout << "\nHow many coffees have you already had?\t";
    cin >> bInit;
    
    coffee_rush Miguel( bInit );   //  initialize "Miguel" with "bInit" beers (call constructor with bInit)
    
    do                      //  use a "do..while" loop to write the response at least once
    {
        
        Miguel.Response();        //  display the current state
        
            if ( Miguel.AskCoffee() >= 6 )   //  break out after so many (6) beers
                break;
        
        cout << "\nHow many coffees would you like?\t\t";
        cin >> bAdd;            //  input a number of beers to drink
        Miguel.DrinkCoffee( bAdd );  //  add those beers to the count
        
        cout << "\nYou have had " << Miguel.AskCoffee(); //  display the current number of beers
            if ( Miguel.AskCoffee() == 1 )               //  use singular if only 1 in the belly
                cout << " Coffee today.\n";
            else
                cout << " Coffees today.\n";
        
    }   while (bAdd > 0);
    
    if ( bAdd == 0 && Miguel.AskCoffee() < 6 )           //  provide a message for stopping before having too many
        cout << "\nYou call it a day.\n\n\n";
    
    if ( Miguel.AskCoffee() == 0 )   //  provide a message for sustained sobriety
        cout << "\nYou stay sleepy.\n\n\n";
    
    return 0;
}

