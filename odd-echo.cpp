//This program is designed to take a number of inputs, add them to an array
//Then it will return every other element of the array into 

#include <iostream>

using namespace std;

int main()
{
    //This initializes a variable to store input
    int N;
    //cin is the command to take data in from the outside
    cin >> N;
    //since we have the input now, loop through the input. So lets create a for loop
    for (int i = 0; i < N; ++i)
    {
      //This creates a variable and then takes the input, detects to see if it is an odd index, then prints it if it is
        string word;
        cin >> word;
      //Created to see if the input is odd or even
        if (i % 2 == 0)
        {
            cout << word;
        }
    }  
 return 0;
}
