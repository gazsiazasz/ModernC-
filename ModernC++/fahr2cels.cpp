//
//  fahrenheit.cpp
//  ModernC++
//
//  Created by Gajdos Gábor on 2017. 10. 04..
//  Copyright © 2017. Gajdos Gábor. All rights reserved.
//

#include <stdio.h>
int main()
{
    int fahr;

    for ( fahr = -100; fahr <= 400; fahr += 25 )
    {
        printf( "Fahr = %d\tCels = %d\n", fahr, 5/9*(fahr-32) );
    }
    return 0;
}
