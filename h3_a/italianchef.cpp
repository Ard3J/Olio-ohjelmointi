#include "italianchef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef(string n) : Chef(n)
{
    name = n;
    cout << "Italian chef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "Italian chef " << name << " dekonstruktori" << endl;
}

string ItalianChef::GetName()
{
    return name;
}

void ItalianChef::makesPasta()
{
    cout << "Italian chef " << name << " makes pasta" << endl;
}

void ItalianChef::makeSalad()
{
    cout << "Chef " << name << " makes salad" << endl;
}

void ItalianChef::makeSoup()
{
    cout << "Chef " << name << " makes soup" << endl;
}
