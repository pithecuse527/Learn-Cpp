#include <iostream>
using namespace std;

main()
{
    char c;
    cout << "Type a char : ";
    cin >> c;
    
    switch(c)
    {
        case 'y' :
            cout << "You chose y" << endl;
            break;
        case 'Y' :
            cout << "You chose Y" << endl;
            break;
        case 'n' :
            cout << "You chose n" << endl;
            break;
        case 'N' :
            cout << "You chose N" << endl;
            break;
        default :
            cout << "You didn't choose a valid option" << endl;
    }
}