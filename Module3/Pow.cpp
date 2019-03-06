#include <iostream>
using namespace std;

main()
{
    int base, expo;
    int result = 1;
    
    cout << "Type base and expo : ";
    cin >> base >> expo;
    
    for(int i{0}; i < expo; i++) result *= base;

    cout << "Result : " << result << endl;
    
}