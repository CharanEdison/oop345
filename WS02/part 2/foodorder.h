// Workshop 1
// Version: 1.0
// Date: 2022/01/22
// Name:Charan Edison Arulraj
//Seneca Student ID:143594208
//Seneca email:cedison-arulraj@myseneca.ca
//section:ZCC
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.


#ifndef SDDS_FOODORDER_H
#define SDDS_FOODORDER_H

extern double g_taxrate;
extern double g_dailydiscount;

namespace sdds
{
    class FoodOrder
            {
        char cname[10];
        char* food_desc;
        double food_price;
        bool daily_special;
            public:
                FoodOrder() = default;

                void read(std::istream&);

                void display();
            };
}
#endif