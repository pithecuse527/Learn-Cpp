#include <iostream>

main()
{
    //int i{ 2 };
    auto i = 3 / 2;
    //auto i{ 3.0 };
    
    i = static_cast<int>(3.2);
    i = static_cast<int>(2.9);
    i = -1;
    std::cout << i << std::endl;
    
    // double d{ 2.7 };
    // std::cout << d << std::endl;
    // i = static_cast<int>(d);
    // d = i;
    
}