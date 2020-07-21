/* 
    This Project is build on the idea of the Cafetaria Food Ordering system
    Created by: Saurabh Girpunje
    Language used: Cpp
*/

#include <iostream>
#include <iomanip>
#include "CafetariaFunctions.h"

using std::cin;
using std::cout;

int main()
{
    int loopprint;
    do
    {
        Restaurant obj;
        displayentrymessage displayobj;
        displayMenuCard displayMenuCardobj;

        displayobj.DisplayEntryMessage();
        displayMenuCardobj.DisplayMenuCard();
        obj.MainFunction();
        obj.PrintBill();
        cin >> loopprint;
    } while (loopprint);
    return 0;
}
