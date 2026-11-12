// CSCE A201 Group Project
// string groupName
// 

#include <iostream>

using namespace std;

int main()
{
    int choice = 0;

    do
    {
        cout << "===== CONNECT FOUR =====" << endl;
        cout << "1. Play a Game" << endl;
        cout << "2. How to Play" << endl;
        cout << "3. View Scoreboard" << endl;
        cout << "4. Quit" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Invalid input. Please enter a number." << endl;

            continue;
        }

        switch (choice)
        {
        case 1:
            // Start Connect Four game
            cout << "Starting game..." << endl;
            break;

        case 2:
            // Display game instructions
            cout << "Displaying game instructions..." << endl;
            break;

        case 3:
            // Display scoreboard
            cout << "Displaying scoreboard..." << endl;
            break;

        case 4:
            cout << "Thanks for playing Connect Four!" << endl;
            break;

        default:
            cout << "Invalid menu option." << endl;
        }
    
    } while (choice != 4);

    return 0;
}
