//
//  fahrenheit.cpp
//  ModernC++
//
//  Created by Gajdos Gábor on 2017. 10. 04..
//  Copyright © 2017. Gajdos Gábor. All rights reserved.
//

#include <iostream>
int main()
{
    for( int fahr = -100; fahr <= 400; fahr += 20 )
    {
        std::cout << "fahr = " << fahr
        << ", cels = " << 5./9. * (fahr-32)
        << std::endl;
    }
    return 0;
}
