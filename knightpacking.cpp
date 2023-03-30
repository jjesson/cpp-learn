//This program is designed to show who will win a competition of placing knights
//Given the size of a board.

#include <iostream>

using namespace std;

int main()
{
    int boardsize;
    cin >> boardsize;
    
    if (boardsize % 2 == 0)
    {
        cout << "second\n";
    } else
    {
        cout << "first\n";
    }
    return 0;
}
