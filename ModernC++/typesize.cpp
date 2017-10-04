//
//  typesize.cpp
//  ModernC++
//
//  Created by Gajdos Gábor on 2017. 10. 04..
//  Copyright © 2017. Gajdos Gábor. All rights reserved.
//

#include <iostream>
int main()
{
    std::cout << sizeof(char) << std::endl;
    std::cout << sizeof(bool) << std::endl;
    std::cout << sizeof(short) << std::endl;
    std::cout << sizeof(long) << std::endl;
    std::cout << sizeof(long long) << std::endl;  // only from C++11
    std::cout << sizeof(float) << std::endl;
    std::cout << sizeof(double) << std::endl;
    std::cout << sizeof(long double) << std::endl;
    std::cout << sizeof(int*) << std::endl;
    std::cout << sizeof("Hello world") << std::endl;
    
    return 0;
}
