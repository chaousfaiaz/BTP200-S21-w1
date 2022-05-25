//==============================================
// Name           : AKSHAY MUKESHBHAI KATRODIYA
// Email          : amkatrodiya@myseneca.ca
// Student ID     : 125298208
// Section        : NAA
// Date           : 05/26/2021(Wednesday)
//==============================================

#include <iostream>

#include "File.h"

namespace sdds
{
    // Constant Value
    const char *const SHOPPING_DATA_FILE = "shoppinglist.csv";

    //  Global Variable
    FILE *sfptr = nullptr;

    bool openFileForRead()
    {
        sfptr = fopen(SHOPPING_DATA_FILE, "r");
        return sfptr != NULL;
    }

    bool openFileForOverwrite()
    {
        sfptr = fopen(SHOPPING_DATA_FILE, "w");
        return sfptr != NULL;
    }

    void closeFile()
    {
        if (sfptr)
            fclose(sfptr);
    }

    bool freadShoppingRec(ShoppingRec *rec)
    {
        int flag = 0;
        bool success = fscanf(sfptr, "%[^,],%d,%d\n",
                              rec->m_title, &rec->m_quantity, &flag) == 3;
        rec->m_bought = !!flag;
        return success;
    }

    void fwriteShoppintRec(const ShoppingRec *rec)
    {
        fprintf(sfptr, "%s,%d,%d\n", rec->m_title, rec->m_quantity, rec->m_bought);
    }

}