// Workshop 1
// Version: 1.0
// Date: 2022/01/22
// Name:Charan Edison Arulraj
//Seneca Student ID:143594208
//Seneca email:cedison-arulraj@myseneca.ca
//section:ZCC
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.



#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include "foodorder.h"

using namespace std;

double g_taxrate;
double g_dailydiscount;

namespace sdds
{
    void FoodOrder::read(istream& in)
    {
        char description[256];
        char dailySpecial = 'N';
        if (in.good())
        {
            in.get(cname, 10, ',');
            in.ignore(1000, ',');
            if (in.getline(description, ',')) {
                food_desc = new char[strlen(description) + 1];
                strcpy(food_desc, description);
            }
            in >> food_price;
            in.ignore(1000, ',');
            in.get(dailySpecial);
            in.ignore(1000, '\n');

            if (dailySpecial == 'Y')
            {
                daily_special = true;
            }
            else
            {
                daily_special = false;
            }

            in.clear();
        }
    }

    void FoodOrder::display()
    {
        static int counter = 1;

        if (cname[0] != '\0')
        {
            cout.width(2);
            cout << left << counter++;
            cout << ". ";
            cout.width(10);
            cout.fill(' ');
            cout << left << cname;
            cout << "|";
            cout.width(25);
            cout.fill(' ');
            cout << left << food_desc;
            cout << "|";
            cout.width(12);
            cout.fill(' ');
            cout << left << setprecision(2) << fixed << (food_price * (1 + g_taxrate));
            cout << "|";
            if (daily_special == true)
            {
                cout.width(13);
                cout.fill(' ');
                cout << right << setprecision(2) << fixed << (food_price * (1 + g_taxrate)) - g_dailydiscount;
            }
            cout << endl;
        }
        else {
            cout.width(2);
            cout << left << counter++;
            cout << ". ";
            cout << "No Order" << endl;
        }

        delete[] this->food_desc;
    }
}