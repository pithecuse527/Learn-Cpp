#include <iostream>
#include "AddTwo.cpp"

main()
{
    int i{ 4 };
    int j { addTwo(i) };
    addTwo(j);
    j = addTwo(j);
    
    //int a[i] = {0};       // compile error
    
    int a[i];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    
    std::cout << "a[2] : " << a[2] << std::endl;
    
}