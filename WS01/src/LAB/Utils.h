//==============================================
// Name           : AKSHAY MUKESHBHAI KATRODIYA
// Email          : amkatrodiya@myseneca.ca
// Student ID     : 125298208
// Section        : NAA
// Date           : 05/26/2021(Wednesday)
//==============================================

#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H

namespace sdds
{
    // Function Prototypes
    void flushkeys();
    bool ValidYesResponse(char ch);
    bool yes();
    void readCstr(char cstr[], int len);
    int readInt(int min, int max);
}

#endif 