//
//  convertTemp.cpp
//  
//
//  Created by Michael P on 7/5/16.
//
//

#include <iostream>

float C2F ( float celcius );     //  convert celcius -> fahrenheit
float F2C ( float fahrenheit );     //  convert fahrenheit -> celcius

int main()
{
    float Tin;      //  input temperature
    float Tout;     //  output temperature
    char CorF[3];   //  can start with either celcius or fahrenheit (1 character only)
    
    std::cout << "\nStart with Fahrenheit or Celcius? (enter F or C)\t";
    std::cin.get(CorF,2);           //  use the member function get() for safety
    //CorF = tolower(CorF);       // make lower case for flexibility  [problem]
    
    if (strncmp(CorF,"C",1)!=0 && (strncmp(CorF,"F",1)!=0))     // escape for improper input
    {
        std::cout << "\n\nOops! Please try again and type either F or C.\n\n";
        
        return 0;
    }
    
    std::cout << "How many degrees? (enter a number)\t\t\t";
    std::cin >> Tin;
    
    if (strncmp(CorF,"C",1)==0)
        Tout = C2F(Tin);
    else
    {
        if (strncmp(CorF,"F",1)==0)     // redundant if statement
            Tout = F2C(Tin);
        /*else
        {
            std::cout << "\n\nOops! Please try again and type either F or C.\n\n";
            return 0;
        }*/
    }
    
    std::cout << "\nGood. Now the converted temperature is:\t\t\t" << Tout << "\n\n";
    
        //std::cout << "\n\n" << C2F(100) << "\n\n";    // TEST LINE
    
    return 0;
}



float C2F ( float c )
{
    float f;
    f = (((c/5)*9) + 32);
    
    return f;
}

float F2C ( float f )
{
    float c;
    c = ((f - 32)*5)/9;
    
    return c;
}
