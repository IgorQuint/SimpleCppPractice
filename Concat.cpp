#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[50], s2[50];

    cout << "Enter string 1: ";
    cin.getline(s1, 50);

    cout << "Enter string 2: ";
    cin.getline(s2, 50);

    strcat(s1, s2); 

    cout << "1 = " << s1 << endl;
    cout << "2 = " << s2;

    return 0;
}