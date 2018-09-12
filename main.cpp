#include <iostream>
#include <vector>
#include "data.h"

usingnamespace std;

int main()
{
vector <Data> v ;

v.pushback ({7, 21.01};
Data d;
v.pushback (d);
d.setX (10);
d.setY (12.10);

v.pushback (d);

for (int i=0; i < v.size(); i ++)
{
cout << v [i].getX () << " ";
cout << v [i].getY () << endl;
}

