/*
 * Simple C++ program
 */
//#include <iostream.h>

#include <iostream>
#include <sstream>
using namespace std;

class small
{
public:
    int x;
};

class big : public small
{
public:
    double y;
};

int main()
{
    small var1;
    big var2;

    var1.x = 1;
    var2.y = double (var1.x) + 2.0;

    cout << "small.x = " << var1.x << endl;
    cout << "big.y = "   << var2.y << endl;

    return (0);
}
