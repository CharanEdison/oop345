// Workshop 3
// Version: 1.0
// Date: 2022/01/30
// Name:Charan Edison Arulraj
//Seneca Student ID:143594208
//Seneca email:cedison-arulraj@mysseneca.ca

#include "Pair.h"
using namespace std;
namespace sdds
{

    bool Pair::haveSameKey(const Pair& P, const Pair& N)
    {
        bool res = false;
        if (!(P.c_key == N.c_key)) return res;
        res = true;
        return res;
    }

    std::ostream& Pair::display(std::ostream& ostr) const

    {
        ostr.width(20);
        ostr.setf(ios::right);
        ostr << getKey();
        ostr.setf(ios::left);
        ostr << ": " << getValue();
        return ostr;
    }

    std::ostream& operator<<(std::ostream& ostr, const Pair& P)
    {
        return P.display(ostr);
    }
}