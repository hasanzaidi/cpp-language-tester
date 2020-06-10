#ifndef LOC_H_INCLUDED
#define LOC_H_INCLUDED

using namespace std;

class loc
{
    int latitude, longitude;

    public:loc() {}

    public:loc(int lg, int lt)
    {
        longitude = lg;
        latitude = lt;
    }

    public:void show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }

    public:loc operator+(loc op2);
};

// Overload + for loc
loc loc::operator+(loc op2)
{
    loc temp;

    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;

    return temp;
}

#endif // LOC_H_INCLUDED
