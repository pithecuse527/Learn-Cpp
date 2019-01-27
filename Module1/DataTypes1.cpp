#include <iostream>

int main()
{
    int i{2};
    i = 3.2;        // will be truncated...
    i = 2.9;
    i = -1;
    
    unsigned int u{0};
    u = -2;
    
    double d{2.7};
    i = d;
    d = i;
    
    bool flag{true};
    flag = false;
    
}