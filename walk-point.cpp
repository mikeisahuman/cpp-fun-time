//
//  walk-point.cpp
//  
//
//  Created by Michael P on 7/8/16.
//
//      Getting two outputs from a function using 'references'
//      * input values for distance and angle, get x-y point

#include <math.h>   //  include math: we need trig functions

#include "walk-point.hpp"



int main()
{
    
    double distance, angle, xpoint, ypoint;
    ERR_VAR result;     //  output of function is SUCCESS or FAILURE (0 or 1)
    
    //  input distance and direction to walk (from the origin)
    cout << "\n\nHow far would you like to walk? (enter a positive number)\t";
    cin >> distance;
    cout << "\n\nAt what angle would you like to walk? (degrees)\t\t\t";
    cin >> angle;
    cout << "\n\n";
    
    //  use function to give both coordinates: xpoint, ypoint
    result = Walk2Point( distance, angle, xpoint, ypoint );
    
    //  error check: require a positive distance walked.
    if (result == SUCCESS)
    {
        cout << "You stopped at x-y point ";
        cout << "(" << xpoint << ", " << ypoint << ").";
    }
    else
        cout << "Error!  Positive distance only!";
    
    cout << "\n\n\n";
    
    
    return 0;
}


//  function: checks for a good value & assigns coordinates using references
ERR_VAR Walk2Point( double r , double phi , double &rx , double &ry )
{
    if (r < 0)
        return FAILURE;
    else
    {
        phi = RADperDEG * phi;      //  convert to radians
        
        rx = r * cos(phi);
        ry = r * sin(phi);
        
        return SUCCESS;
    }
}