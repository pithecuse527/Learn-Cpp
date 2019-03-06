#include <iostream>

main()
{
    typedef enum hi {a=1,b} Hi;
    
    hi ho = a;
    Hi ho2 = b;
    
    std::cout << ho << std::endl;
    std::cout << ho2 << std::endl;
}