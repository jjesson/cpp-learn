//This program is designed to count the number of e's in hey and double them with a response

#include <iostream>

using namespace std;

int main()
{
    string input;
    cin >> input;
    
    int num = (input.length() - 2) * 2;
    string e;
    for (int i = 0; i < num; ++i)
    { 
        e += "e";
    }
    cout << "h" + e + "y";
    
    return 0;
    
}
