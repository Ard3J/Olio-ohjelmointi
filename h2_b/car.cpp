#include "car.h"
#include <iostream>

Car::Car(string b, string m, int yM)
{
    brand = b;
    model = m;
    yearModel = yM;
}


void Car::printData()
{
    cout << "Brand: " << brand << " Model: " << model << " Year: " << yearModel << endl;
}

