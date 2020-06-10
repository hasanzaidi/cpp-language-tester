#ifndef F_TO_C_H_INCLUDED
#define F_TO_C_H_INCLUDED

#include "convert.h"

using namespace std;

class f_to_c : public convert
{
    public:f_to_c(double i) : convert(i) { /* do Nothing */ }

    public:void compute()
    {
        val2 = (val1 - 32) / 1.8;
    }
};


#endif // F_TO_C_H_INCLUDED
