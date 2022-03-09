#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Ben? (type to talk with Ben):" << endl;
    string x;
    string wordList[4] = { "Yes", "No", "Ho ho ho", "hlreurh" };
    for (int i = 1; i < 100; i++)
    {
        string word = wordList[rand() % 4];
        getline(cin, x);
        cout<<word<<endl;
    }
}
