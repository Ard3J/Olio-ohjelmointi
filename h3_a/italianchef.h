#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    string GetName();
    void makesPasta();
    //void makeSalad();
    //void makeSoup();
};

#endif // ITALIANCHEF_H
