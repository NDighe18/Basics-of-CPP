#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float area, len, bre;
    cout << "Enter length and breadth of triangle:";
    cin >> len >> bre;
    area = 0.5 * len * bre;
    cout << "Area of triangle is:" << area;
    return 0;
}