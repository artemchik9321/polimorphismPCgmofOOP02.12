#include "PC.h"
#include <iostream>
using namespace std;

double PC::GetPrice()
{
    return price;
}

void PC::Print()
{
    cout << "Name - " << name << endl << "CPU - " << cpu << endl
        << "GPU - " << gpu << endl << "SSD - " << ssd << endl << "RAM - " << ram << endl;
}