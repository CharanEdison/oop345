// Workshop 3
// Version: 1.0
// Date: 2022/01/30
// Name:Charan Edison Arulraj
//Seneca Student ID:143594208
//Seneca email:cedison-arulraj@mysseneca.ca
#ifndef SDDS_PAIR_H
#define SDDS_PAIR_H
#include <iostream>
#include <string>
namespace sdds
{
    class Pair
            {

        std::string c_key{};
        std::string var_value{};
    public:
        const std::string& getKey() const
        {
            return c_key;
        }
        const std::string& getValue() const
        {
            return var_value;
        }
        Pair(const std::string& key, const std::string& value) : c_key{key }, var_value{value }{};


        static bool haveSameKey(const Pair& P, const Pair& N);

        Pair() : c_key{"" }, var_value{"" }{};

        virtual std::ostream& display(std::ostream& ostr = std::cout) const;

        bool operator==(const Pair& pair)const
        {
            return c_key == pair.getKey();
        }

    };
    std::ostream& operator<<(std::ostream& ostr, const Pair& P);
}
#endif