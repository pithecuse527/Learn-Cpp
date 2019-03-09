#include <iostream>
using namespace std;

int pow(int base, int expo);
double calSin(double opposite, double hypotenuse);

main()
{
    int base, expo, opposite, hypotenuse;
    double result;
    
    cout << "Type base and expo : ";
    cin >> base >> expo;
    result = pow(base, expo);
    cout << "Result : " << result << endl;
    
    cout << "Type opposite and hypotenuse : ";
    cin >> opposite >> hypotenuse;                  // opposite and hypotenuse are declared as int but it will changed as double.
    result = calSin(opposite, hypotenuse);
    cout << "Result : " << result << endl;
    
}


int pow(int base, int expo)
{
    int result{1};
    
    if (!expo) return 1;
    
    if(expo < 0)
    {
        cout << "Exponent must be positive number." << endl;
        return 0;
    }
    
    for(int i{0}; i < expo; i++) result *= base;
    return result;
}

double calSin(double opposite, double hypotenuse)
{
    if (!hypotenuse)
    {
        cout << "Hypotenuse can't be 0." << endl;
        return 0;
    }
    
    if(opposite < 0 || hypotenuse < 0)
    {
        cout << "Don't use negative num." << endl;
        return 0;
    }
    
    return opposite / hypotenuse;
}