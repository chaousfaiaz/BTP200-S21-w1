//==============================================
// Name           : MD Faiaz
// Email          : mfaiaz@myseneca.ca
// Student ID     : 164899213
// Section        : NAA
// Date           : 05/26/2021(Wednesday)
//==============================================

#ifndef SDDS_SHOPPINGLIST_H
#define SDDS_SHOPPINGLIST_H

#include "ShoppingRec.h"

namespace sdds
{
    // Functions
    bool loadList();
    void displayList();
    void removeBoughtItems();
    void removeItem(int index);
    bool saveList();
    void clearList();
    void toggleBought();
    void addItemToList();
    void removeItemfromList();
    bool listIsEmpty();
}
#endif 
