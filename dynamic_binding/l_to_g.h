#ifndef L_TO_G_H_INCLUDED
#define L_TO_G_H_INCLUDED

using namespace std;

class l_to_g : public convert
{
    public:l_to_g(double i) : convert(i) { /* do Nothing */ }

    public:void compute()
    {
        val2 = val1 / 3.7854;
    }
};

#endif // L_TO_G_H_INCLUDED
