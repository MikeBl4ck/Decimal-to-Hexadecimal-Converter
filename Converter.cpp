/******************************************************************************
Decimal → Hexadecimal Conversion
Recursive Implementation
Michael Black
CMPS — Fall Data Structures
10-10-24

Conversion Steps:
1. Divide number by 16 and store the remainder.
2. Continue dividing until number < 16.
3. If number < 16, convert directly using hexadecimal symbols.
4. Read hexadecimal digits backward (or build by recursion).
*******************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

string hexa(int x, int y, string a) // x = number to convert
{
    if (x > 16)
    {
        y = x % 16;
        x = x / 16;

        switch (y)
        {
            case 0:  a = "0" + hexa(x, y, a); break;
            case 1:  a = "1" + hexa(x, y, a); break;
            case 2:  a = "2" + hexa(x, y, a); break;
            case 3:  a = "3" + hexa(x, y, a); break;
            case 4:  a = "4" + hexa(x, y, a); break;
            case 5:  a = "5" + hexa(x, y, a); break;
            case 6:  a = "6" + hexa(x, y, a); break;
            case 7:  a = "7" + hexa(x, y, a); break;
            case 8:  a = "8" + hexa(x, y, a); break;
            case 9:  a = "9" + hexa(x, y, a); break;
            case 10: a = "A" + hexa(x, y, a); break;
            case 11: a = "B" + hexa(x, y, a); break;
            case 12: a = "C" + hexa(x, y, a); break;
            case 13: a = "D" + hexa(x, y, a); break;
            case 14: a = "E" + hexa(x, y, a); break;
            case 15: a = "F" + hexa(x, y, a); break;
        }
    }
    else
    {
        switch (x)
        {
            case 0:  a = "0"; break;
            case 1:  a = "1"; break;
            case 2:  a = "2"; break;
            case 3:  a = "3"; break;
            case 4:  a = "4"; break;
            case 5:  a = "5"; break;
            case 6:  a = "6"; break;
            case 7:  a = "7"; break;
            case 8:  a = "8"; break;
            case 9:  a = "9"; break;
            case 10: a = "A"; break;
            case 11: a = "B"; break;
            case 12: a = "C"; break;
            case 13: a = "D"; break;
            case 14: a = "E"; break;
            case 15: a = "F"; break;
        }
    }
    return a;
}

int main()
{
    int x;
    int y = 0;
    string a = "0";
    string HX;

    cout << "This is a decimal to hexadecimal conversion program created by Michael Black.\n\n";

    // --- ERROR HANDLING FOR USER INPUT ---
    while (true)
    {
        cout << "Please enter a positive decimal number to convert: ";

        if (cin >> x && x >= 0)   // valid AND non-negative
        {
            break;
        }
        else
        {
            cout << "Invalid input! Please enter a non-negative whole number.\n";

            cin.clear(); // clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // flush bad input
        }
    }

    // --- Hex Conversion ---
    HX = hexa(x, y, a);

    reverse(HX.begin(), HX.end());

    cout << "\nThe number " << x << " in hexadecimal form is:\n";
    cout << HX << endl;

    return 0;
}