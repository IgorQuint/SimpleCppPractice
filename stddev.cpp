#include <iostream>
#include <cmath>
using namespace std;

float calculateSD(float data[]);

int main()
{
    int i;
    float data[100];

    cout << "Enter 100 values: ";
    for(i = 0; i < 10; ++i)
        cin >> data[i];

    cout << endl << "Standard Deviation = " << calculateSD(data);

    return 0;
}