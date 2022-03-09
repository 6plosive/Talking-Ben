#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;



int main()
{
    system("color 07");
    int choice;//press 1
    string x;//question he asked, won't get saved
    string wordList[4] = { "Yes.", "No.", "Ho ho ho.", "hlreurh" };
    do
    { 
        cout << " #######                                         ######                \n";
        cout << "    #      ##   #      #    # # #    #  ####     #     # ###### #    # \n";
        cout << "    #     #  #  #      #   #  # ##   # #    #    #     # #      ##   # \n";
        cout << "    #    #    # #      ####   # # #  # #         ######  #####  # #  # \n";
        cout << "    #    ###### #      #  #   # #  # # #  ###    #     # #      #  # # \n";
        cout << "    #    #    # #      #   #  # #   ## #    #    #     # #      #   ## \n";
        cout << "    #    #    # ###### #    # # #    #  ####     ######  ###### #    # \n";
            
        cout << " #######                                                               \n";
        cout << "    #    ###### #####  #    # # #    #   ##   #                        \n";
        cout << "    #    #      #    # ##  ## # ##   #  #  #  #                        \n";
        cout << "    #    #####  #    # # ## # # # #  # #    # #                        \n";
        cout << "    #    #      #####  #    # # #  # # ###### #                        \n";
        cout << "    #    #      #   #  #    # # #   ## #    # #                        \n";
        cout << "    #    ###### #    # #    # # #    # #    # ######                   \n"<<endl;//ascii art lol

        cout << "(Press 1 and enter to call ben or press 0 and enter to exit.)\n\n";
        cout << "(1) Call Ben\n(0) Exit\nWhat would you like to do?:";
        cin >> choice;
        system("cls");//clear screen
        switch (choice)
        {
        case 1:
            cout << "Ben? (type to talk with Ben):\n";
            getline(cin, x);
            
            for (int i = 1; i < 100; i++)
            {
                cout << "\t\t\t\t";
                getline(cin, x);
                if (x == "")
                {
                    cout << "(Type something!)\n";
                }
                else if (x == "exit")
                {
                    cout << "Ok";
                    return 0;
                }
                else
                {
                    string word = wordList[rand() % 4]; 
                    cout << word << endl;
                }
            }
        case 0:
            return 0;//u quitted before u played smh.
        }
    } while (choice == 0);
}
