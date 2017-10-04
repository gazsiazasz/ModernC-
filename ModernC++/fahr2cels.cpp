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
const int step  =   40;

int main()
{
    for( int fahr = lower; fahr <= upper; fahr += step )
    {
        std::cout << "fahr = " << std::setw(4) << fahr
        << ", cels = " << std::fixed << std::setw(7)
        << std::setprecision(2) << 5./9. * (fahr-32)
        << std::endl;
    }
    return 0;
}
