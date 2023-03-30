//This program is designed to join javelins together, but they get 1 cm smaller with each join.

#include <iostream>

using namespace std;

int main()
{
    int numJav;
    int total = 0;
    cin >> numJav;
    
    for (int i = 0; i < numJav; ++i)
    {
        int input;
        cin >> input;
        total += input;
    }
    cout << (total -(numJav - 1);
    return 0;
}
