//findingana.cpp

#include <iostream>

using namespace std;

int main()
{
    string word;
    int position = 0;
    cin >> word;
    
    while (position < 1000)
    {
        if(word[position] == 'a'){
            break;
        }
        position += 1;
    }
    
    //Substring command will find a position of a string and then x num of chars after
    cout << word.substr(position, 1000);
    return 0;
}
