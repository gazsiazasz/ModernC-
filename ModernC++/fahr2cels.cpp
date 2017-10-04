//
//  fahrenheit.cpp
//  ModernC++
//
//  Created by Gajdos Gábor on 2017. 10. 04..
//  Copyright © 2017. Gajdos Gábor. All rights reserved.
//

#include <iostream>
#include <iomanip>

const int lower = -100;
const int upper =  400;
const int step  =   20;

// declaration of the fahr2cels function
double fahr2cels(double);

int main()
{
    for( int fahr = lower; fahr <= upper; fahr += step )
    {
        std::cout << "fahr = " << std::setw(4) << fahr
        << ", cels = " << std::fixed << std::setw(7)
        << std::setprecision(2)
        << fahr2cels(fahr)  // call of fahr2cels(double)
        << std::endl;
    }
    return 0;
}

// definition of the fahr2cels function
double fahr2cels(double f)
{
    return 5./9. * (f-32);
}
