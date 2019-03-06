#include <iostream>
#include <string>

main()
{
    char isAString[6] = {'H', 'E', 'L', 'L', 'O', '\0'};
    char isNotAString[5] = {'H', 'E', 'L', 'L', 'O'};
    
    using namespace std;
    string myString = "Hello!";
    
    cout << isAString;
    cout << "\n";
    cout << isNotAString;
    cout << "\n";
    cout << myString;
    cout << "\n";
    
    cout << "Done!\n";
}