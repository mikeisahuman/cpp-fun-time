//
//  drinkBeers.h
//  
//
//  Created by Michael P on 7/6/16.
//
//

#include <iostream>

using namespace std;    //  load the standard namespace (cout, cin, endl ...)


class beer_belly        //  define class for your thirsty belly
{
public:
    beer_belly( unsigned int beerInit ); //  constructor, with initial beer content
    ~beer_belly();      //  destructor
                        //  constructor & destructor are both defined separately
    
    unsigned int AskBeers() const { return itsBeers; }  //  member function: ask how many beers are in the belly
                                                        //  now inline. also constant: will not change any "beer_belly" object
    void DrinkBeers( unsigned int beerAdd ) { itsBeers = itsBeers + beerAdd; }  //  member function: drink, i.e. add beer to the belly
                                                                                //  now inline.
    
    void Response();    //  member function: response of person after drinking
                        //  defined separately
    
private:
    unsigned int itsBeers;    //  member variable: number of beers in the belly
};

