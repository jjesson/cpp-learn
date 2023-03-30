//This program is designed to show what quadrant a point is in given an x and y coord

#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    
    cin >> x;
    cin >> y;
    
    if (x > 0 && y > 0)
    {
        cout << 1;
    } else if (x < 0 && y < 0)
    {
        cout << 3;
    } else if (x > 0 && y < 0)
    {
        cout << 4;
    } else
    {
        cout << 2;
    }
    return 0;
}
