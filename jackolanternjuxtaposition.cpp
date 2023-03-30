//This program is designed to calculate the total number of options you can make with a jack o lantern
#include <iostream>

using namespace std;

int main()
{
    int face;
    int nose;
    int mouth;
    
    cin >> face >> nose >> mouth;
    int total = face * nose * mouth;
    cout << total;
    
    return 0;
}
