// Workshop 3
// Version: 1.0
// Date: 2022/01/30
// Name:Charan Edison Arulraj
//Seneca Student ID:143594208
//Seneca email:cedison-arulraj@mysseneca.ca

#ifndef SDDS_SET_H
#define SDDS_SET_H
#include <iostream>
#include <cmath>
#include "Pair.h"
#include "Collection.h"
#include <string>
namespace sdds {

    template<class T>
            class Set : public Collection<T, 100>
                    {

                const size_t CAPACITY = 100;

            public:



                Set() { ; }

                bool add(const T& item) {

                    for (int c = 0; (unsigned)c < this->numOfElements; c++)
                    {
                        if (!(item == this->array[c]))
                            continue;
                        return false;
                    }

                    return Collection<T, 100>::add(item);
                }

            };



    template<>
    bool Set<double>::add(const double& item) {

        for (int c = 0; (unsigned) c < this->numOfElements; c++)
            if (std::fabs(item - this->array[c]) <= 0.01)
                return false;;

        return Collection<double, 100>::add(item);


    };


}
#endif