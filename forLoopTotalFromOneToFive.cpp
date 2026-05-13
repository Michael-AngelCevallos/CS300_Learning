#include <iostream>
using namespace std;

int main()
{
    int total = 0;
    for (int i = 1; i <= 5; i++)
    {   total = i + i;
        cout << "Total = " << total << endl;
    }
    return 0;
}