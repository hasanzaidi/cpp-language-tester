#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

using namespace std;

class array
{
    int *p;
    int size;

    public:array(int sz)
    {
        try
        {
            p = new int[sz];
        }
        catch (bad_alloc xa)
        {
            cout << "Allocation Failure\n";
            exit(EXIT_FAILURE);
        }
        size = sz;
    }

    public:~array()
    {
        delete []p;
    }

    // copy constructor
    public:array(const array &a);

    public:void put(int i, int j)
    {
        if (i>=0 && i<size)
        {
            p[i] = j;
        }
    }

    public:int get(int i)
    {
        return p[i];
    }
};

// Copy constructor
array::array(const array &a)
{
    int i;

    try
    {
        p = new int[a.size];
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation Failure\n";
        exit(EXIT_FAILURE);
    }

    for (i=0; i<a.size; i++)
    {
        p[i] = a.p[i];
    }
}

#endif // ARRAY_H_INCLUDED
