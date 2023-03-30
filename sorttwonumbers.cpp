//This program is designed to take two numbers and output the higher one

#include <iostream>

using namespace std;

int main()
{
    int numOne, numTwo;
    cin >> numOne >> numTwo;
    
    if (numOne > numTwo)
    {
        cout << numTwo << " " << numOne;
    } else
    {
        cout << numOne << " " << numTwo;
    }
    return 0;
}
