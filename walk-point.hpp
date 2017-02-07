//
//  walk-point.hpp
//  
//
//  Created by Michael P on 7/8/16.
//
//

#include <iostream>

using namespace std;    //  load the standard namespace (cout, cin, endl ...)

enum ERR_VAR { SUCCESS , FAILURE }; //  enumeration for error checking

//const double PI = 3.141592653589793;
double PI = 4 * atan(1);
const double RADperDEG = (PI / 180);    //  for converting degrees to radians

//  function prototype: take two numbers and two references
ERR_VAR Walk2Point( double , double , double & , double & );
