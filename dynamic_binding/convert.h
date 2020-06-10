#ifndef CONVERT_H_INCLUDED
#define CONVERT_H_INCLUDED

using namespace std;

class convert
{
    protected:double val1; // initial value
    protected:double val2; //converted value

    public:convert(double i)
    {
        val1 = i;
    }

    double getconv()
    {
        return val2;
    }

    double getinit()
    {
        return val1;
    }

    virtual void compute() = 0;
};

#endif // CONVERT_H_INCLUDED
