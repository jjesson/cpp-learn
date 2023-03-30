//This program is designed to show one of the integers of a mean, S, given R1
//The formula for mean is (R1 +R2)/2 = S

#include <iostream>

using namespace std;

int main()
{
    //Initialize variables according to our formula
    int rOne;
    int s;
    int rTwo;
    
    //Take input to see what the numbers we have
    cin >> rOne >> s;
    
    //Reverse the formula to solve for r2
    rTwo = (s * 2) - rOne;
    
    cout << rTwo;
    
    return 0;
}
