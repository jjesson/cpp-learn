//This prgram is designed to evaluate the winner of a game where people pick up stones

#include <iostream>

using namespace std;

int main()
{
  //The user will determine how many stones you start out with
    int games;
    cin >> games;
    
    if (games % 2 == 0)
    {
        //If there is an even number of stones left, Bob wins.
        cout << "Bob\n";
    } else
    {
        //If there is an odd number, Alice wins.
        cout << "Alice\n";
    }
    return 0;
}
