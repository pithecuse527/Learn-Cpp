#include <iostream>

int main()
{
    int i{ 4 };                 // This is called Uniform or Brace initialization
    const int j{ i+2 };         // Can put it in either place
    int const k{ i+2 };
    //j+2;
    j = j+2;                    // This won't work since j, k are const
    i = j+2;
    k = 7;
    i = 7;
    return 0;
}