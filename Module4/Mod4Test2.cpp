#include <iostream>
#define MAX_LST_SIZE 5
using namespace std;


double avg(int lst[]);

main()
{
    int lst[MAX_LST_SIZE];
    double average;
    
    cout << "Type " << MAX_LST_SIZE << " integer numbers." << endl;
    for(int i{0}; i < MAX_LST_SIZE; i++) cin >> lst[i];
    
    average = avg(lst);
    cout << "Result : " << average << endl;
    
}

double avg(int lst[])
{
    double res = 0;
    
    for(int i{0}; i < MAX_LST_SIZE; i++) res += lst[i];
    
    return res / MAX_LST_SIZE;
    
}