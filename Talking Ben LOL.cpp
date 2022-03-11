#include <iostream>
#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <cctype>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc. 
using std::chrono::system_clock;

int main()
{
    system("color 07");
    int choice;//press 1234567890
    string x;//question he asked, won't get saved
    string wordList[4] = { "Yes.", "No.", "Ho ho ho.", "hlreurh" };
    string wordList2[2] = { "Na Na Na.", "Shhh" };
    START:do
    {
        cout << "\033[33m #######                                         ######                \n";
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
        cout << "    #    ###### #    # #    # # #    # #    # ######                   \n" << endl;//ascii art lol

        cout << "\033[1;36m(Press 1 and enter to call ben or press 0 and enter to exit.)\n\n";
        cout << "\033[36m(1)\033[1;37m Call Ben\n";
        cout << "\033[36m(2)\033[1;37m Ben repeats what you said\n";
        cout << "\033[36m(3)\033[1;37m Disturb Ben when he's reading newspaper\n";
        cout << "\033[36m(4)\033[1;37m Ben drinks apple cider\n";
        cout << "\033[36m(5)\033[1;37m Ben eats beans\n";
        cout << "\033[36m(6)\033[1;37m Touch Ben's feet\n";
        cout << "\033[36m(7)\033[1;37m Punch Ben's face\n";
        cout << "\033[36m(8)\033[1;37m Slaps Ben's face\n";
        cout << "\033[36m(9)\033[1;37m Credit(To me of course)\n";
        cout << "\033[36m(10)\033[1;37m Ben burps\n";
        cout << "\033[36m(0)\033[1;37m Exit\n";
        cout << "What would you like to do?:\033[0m";
        cin >> choice;
        system("cls");//clear screen
        switch (choice)
        {
        case 1:
            cout << "\033[36m*Bling*";
            sleep_for(500ms);
            system("cls");
            cout << "*Bling Bling*";
            sleep_for(500ms);
            system("cls");
            cout << "*Bling Bling Bling*";
            sleep_for(500ms);
            system("cls");
            cout << "*Ben picks up phone*";
            sleep_for(1s);
            system("cls");
            cout << "(Type to talk with Ben. Type exit to exit.)\033[33m\n\t\t\t\tBen: Ben?\033[37m\n";
            getline(cin, x);

            for (int i = 1; i > 0; i++)
            {
                cout << "You: ";
                getline(cin, x);
                if (x == "")
                {
                    cout << "\033[1;31m(Type something!)\033[0m\n";
                }
                else if (x == "exit" || x == "Exit")
                {
                    cout << "\033[33m\t\t\t\tBen: Ok";
                    sleep_for(1s);
                    system("cls");
                    goto START;
                }
                else
                {
                    string word = wordList[rand() % 4];
                    cout << "\033[33m\t\t\t\tBen: " << word << "\033[37m" << endl;
                }
            }
            break;
        case 2:
            cout << "\033[36m(Type anything you want Ben to say! Type exit to exit.)\033[0m\n";
            getline(cin, x);
            for (int i = 1; i > 0;i++)
            {
                cout << "You: ";
                getline(cin, x);
                if (x == "")
                {                
                    cout << "\033[1;31m(Type something!)\033[0m\n";
                }
                else if (x == "exit" || x == "Exit")
                {
                    cout << "\033[33m\t\t\t\tBen: Ok";
                    sleep_for(1s);
                    system("cls");
                    goto START;
                }
                else
                {
                    for (auto& b : x)//some smart guy on the internet figured out how to use 2 lines to make a string into capitalized string
                        b = toupper(b);//thanks random guy super epic <3
                    cout << "\033[33m\t\t\t\tBen: " << x <<"\033[37m\n";
                }
            }
            break;
        case 3:
            cout << "\033[33m\t\t\t\t*Flips newspaper*\033[0m\n";
            getline(cin, x);

            for (int i = 1; i > 0; i++)
            {
                cout << "You: ";
                getline(cin, x);
                if (x == "")
                {
                    cout << "\033[1;31m(Type something!)\033[0m\n";
                }
                else if (x == "exit" || x == "Exit")
                {
                    cout << "\033[33m\t\t\t\tOk";
                    sleep_for(1s);
                    system("cls");
                    goto START;
                }
                else
                {
                    string word2 = wordList2[rand() % 2];
                    cout << "\033[33m\t\t\t\tBen: " << word2 << "\033[37m" << endl;
                }
            }
            break;
        case 4:
            cout << "\033[33m*Closes newspaper*";
            sleep_for(1s);
            system("cls");
            cout << "\033[33mHMmm!";
            sleep_for(600ms);
            system("cls");
            cout << "Glug";
            sleep_for(300ms);
            system("cls");
            cout << "Glug Glug";
            sleep_for(300ms);
            system("cls");
            cout << "Glug Glug Glug";
            sleep_for(300ms);
            system("cls");
            cout << "Glug Glug Glug Glug";
            sleep_for(700ms);
            system("cls");
            cout << "Grr";
            sleep_for(700ms);
            system("cls");
            cout << "*Throws the glass bottle*";
            sleep_for(500ms);
            system("cls");
            cout << "*The bottle shatters*";
            sleep_for(500ms);
            system("cls");
            goto START;
            break;
        case 5:
            cout << "\033[33mMmm!";
            sleep_for(1s);
            system("cls");
            cout << "*Grabs bean and spoon*";
            sleep_for(500ms);
            system("cls");
            cout << "*Open can*";
            sleep_for(500ms);
            system("cls");
            cout << "Glub";
            sleep_for(1s);
            system("cls");
            cout << "Glub Glub";
            sleep_for(1s);
            system("cls");
            cout << "Glub Glub Glub";
            sleep_for(1s);
            system("cls");
            cout << "Glub Glub Glub Glub";
            sleep_for(1s);
            system("cls");
            cout << "Glub Glub Glub Glub Glub";
            sleep_for(1s);
            system("cls");
            cout << "Glub Glub Glub Glub Glub Glub";
            sleep_for(1s);
            system("cls");
            cout << "*Throws can and spoon*";
            sleep_for(1s);
            system("cls");
            goto START;
            break;
        case 6:
            cout << "*Touch Ben's feet*";
            sleep_for(1s);
            system("cls");
            cout << "\033[33mBen: Grr";
            sleep_for(1s);
            system("cls");
            goto START;
            break;
        case 7:
            cout << "*Punch Ben's face*";
            sleep_for(1s);
            system("cls");
            cout << "\033[33mBen: Ouch";
            sleep_for(1s);
            system("cls");
            goto START;
            break;

        case 8:
            cout << "*Slaps Ben's face*";
            sleep_for(1s);
            system("cls");
            cout << "\033[33m*Slaps*";
            sleep_for(1s);
            system("cls");
            goto START;
            break;
        case 9:
            cout << "###########\t\t\n";
            cout << "#         #\t\tCredit to:\n";
            cout << "#   ###   #\t\tMe(6plosive)\n";
            cout << "#  #   #  #\t\t\n";
            cout << "#  #      #\t\tGitHub:\n";
            cout << "#  ####   #\t\thttps://github.com/6plsovie"<<endl;
            cout << "#  #   #  #\t\t\n";
            cout << "#  #   #  #\t\t\n";
            cout << "#   ###   #\t\tMade with LOVE <3\n";
            cout << "#         #\t\tby 6plosive\n";
            cout << "###########\t\t\n";
            cin.ignore();
            cin.ignore();
            system("cls");
            goto START;
            break;
        case 10:
            for (int i = 1;i <= 10;i++)
            {
                string u(i, 'u');
                cout <<"\033[33mBen: B" << u << "rp";
                sleep_for(100ms);
                system("cls");
            }
            goto START;
            break;
        case 0:
            return 0;//u quitted before u played smh.
        }
    } while (choice == 0 );
}