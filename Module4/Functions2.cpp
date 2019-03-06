#include <iostream>
#include "Utilities.h"

main()
{
    int i{ 4 };
    int j { addTwo(i) };
    addTwo(j);
    j = addTwo(j);
    
    
    addTwo(i);
}