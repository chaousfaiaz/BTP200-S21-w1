//==============================================
// Name           : MD Faiaz
// Email          : mfaiaz@myseneca.ca
// Student ID     : 164899213
// Section        : NAA
// Date           : 05/26/2021(Wednesday)
//==============================================

#include <iostream>
#include <cstdlib>

#include "File.h"
#include "ShoppingList.h"
#include "Utils.h"

using namespace std;
using namespace sdds;

// set to false when compling on Linux
const bool APP_OS_WINDOWS = false;

// listMenu Function
int listMenu()
{
    cout << "-->>> My Shopping List <<<--" << endl;
    displayList();
    cout << "----------------------------" << endl
         << "1- Toggle bought Item" << endl
         << "2- Add Shopping Item" << endl
         << "3- Remove Shopping Item" << endl
         << "4- Remove bought Items" << endl
         << "5- Clear List" << endl
         << "0- Exit" << endl
         << "> ";
    return readInt(0, 5);
}

// Main Function
int main()
{
    bool done = false;
    loadList();
    while (!done)
    {
        system(APP_OS_WINDOWS ? "cls" : "clear");
        switch (listMenu())
        {
        case 1:
            toggleBought();
            break;
        case 2:
            addItemToList();
            break;
        case 3:
            removeItemfromList();
            break;
        case 4:
            removeBoughtItems();
            break;
        case 5:
            clearList();
            break;
        default:
            done = true;
        }
    }
    saveList();
    return 0;
}
