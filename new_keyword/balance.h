#ifndef BALANCE_H_INCLUDED
#define BALANCE_H_INCLUDED

class balance
{
    double cur_bal;
    char name[80];

    public:void set_bal(double n, char *s)
    {
        cur_bal = n;
        strcpy(name, s);
    }

    public:void get_bal(double &n, char *s)
    {
        n = cur_bal;
        strcpy(s, name);
    }
};

#endif // BALANCE_H_INCLUDED
