#include "italianchef.h"
#include <iostream>
#include <chef.h>

using namespace std;

int main()
{
    string chefname;
    Chef objChef1("Gordon Ramsay");
    objChef1.makeSalad();
    objChef1.makeSoup();

    ItalianChef objItalianChef1("Anthony Bourdain");
    objItalianChef1.makeSalad();
    objItalianChef1.makeSoup();
    objItalianChef1.makesPasta();
    chefname = objItalianChef1.GetName();
    cout << "Name of the Italian Chef is " << chefname << endl;

    return 0;
}
