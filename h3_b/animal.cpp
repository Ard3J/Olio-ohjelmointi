#include "animal.h"
#include <iostream>

using namespace std;

Animal::Animal() {}

Animal::~Animal()
{
cout << "Animal tuhottu" << endl;
}

void Animal::callOut()
{
    cout << "Eläin ääntelee" << endl;   //Ääkköset antaa kummia merkkejä
}
