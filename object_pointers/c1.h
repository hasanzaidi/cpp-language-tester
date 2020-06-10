#ifndef C1_H_INCLUDED
#define C1_H_INCLUDED

class c1
{
    int i;
    public:
        c1()
        {
            i = 0;
        }
        c1(int j)
        {
            i = j;
        }
        int get_i()
        {
            return i;
        }
};

#endif // C1_H_INCLUDED
