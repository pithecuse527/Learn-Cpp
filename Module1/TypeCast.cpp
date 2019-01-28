#include <iostream>

main()
{
    char ch;
    int i = 65, i_test;
    float f = 2.5;
    double dbl, dbl_test;
    
    ch = static_cast<char>(i);      // int to char
    dbl = static_cast<double>(f);   // float to double
    
    // what will happen...? (below this line)
    i_test = static_cast<double>(f);    // explicit casting will be implemented first. then implicit cast.
    dbl_test = static_cast<int>(f);     // dbl_test == 2
    
    std::cout << "Done\n";
    
}