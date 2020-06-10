#ifndef DERIVED_H_INCLUDED
#define DERIVED_H_INCLUDED

class derived: public base1, public base2
{
    public:void set(int i, int j)
    {
        x = i;
        y = j;
    }
};

#endif // DERIVED_H_INCLUDED
