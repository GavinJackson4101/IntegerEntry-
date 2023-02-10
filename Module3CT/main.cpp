#include <iostream>
using namespace std;


int main()
{
    int v1 = 0, v2 = 0, v3 = 0; // initialize variables
    int *p1 = NULL, *p2 = NULL, *p3 = NULL; // initialize pointers
    cout << "Enter three integer values: " << endl; // ask user to enter number
    cin >> v1 >> v2 >> v3;
/* give memory to pointers */
    p1 = new int[1];
    p2 = new int[1];
    p3 = new int[1];

/* assign value to pointers */
    p1[0] = v1;
    p2[0] = v2;
    p3[0] = v3;

/* print value */
    cout << "v1 : " << v1 << endl;
    cout << "v2 : " << v2 << endl;
    cout << "v3 : " << v3 << endl;
    cout << "p1 : " << p1[0] << endl;
    cout << "p2 : " << p2[0] << endl;
    cout << "p3 : " << p3[0] << endl;

/* delete allocated memory */
    delete p1;
    delete p2;
    delete p3;

}