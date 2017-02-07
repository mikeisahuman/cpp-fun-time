//
//  drinkBeers.h
//  
//
//  Created by Michael P on 7/6/16.
//
//

#include <iostream>

using namespace std;    //  load the standard namespace (cout, cin, endl ...)


class coffee_rush        //  define class for your thirsty belly
{
public:
    coffee_rush( unsigned int coffeeInit ); //  constructor, with initial beer content
    ~coffee_rush();      //  destructor
                        //  constructor & destructor are both defined separately
    
    unsigned int AskCoffee() const { return itsCoffee; }  //  member function: ask how many beers are in the belly
                                                        //  now inline. also constant: will not change any "beer_belly" object
    void DrinkCoffee( unsigned int coffeeAdd ) { itsCoffee = itsCoffee + coffeeAdd; }  //  member function: drink, i.e. add beer to the belly
                                                                                //  now inline.
    
    void Response();    //  member function: response of person after drinking
                        //  defined separately
    
private:
    unsigned int itsCoffee;    //  member variable: number of beers in the belly
};

