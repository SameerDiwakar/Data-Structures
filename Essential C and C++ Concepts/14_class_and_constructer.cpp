#include <iostream>
using namespace std;
class rectangle
{
private:
    int l;
    int b;

public:
    rectangle()
    {
        l = 0;
        b = 0;
    }
    rectangle(int c, int d)
    {
        l = c;
        b = d;
    }
    int area()
    {
        return l * b;
    }
    int perimeter()
    {
        int peri;
        peri = 2 * (l + b);
        return peri;
    }
    void setLength(int c)
    {
        l = c;
    }

    void setBreadth(int d)
    {
        b = d;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    ~rectangle()
    {
        cout << "Destructor";
    }
};
int main()
{
    rectangle r(11, 22);
    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;
    return 0;
}