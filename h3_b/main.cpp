#include "animal.h"
#include "dog.h"
#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Animal objAnimal;
    Dog objDog;
    objAnimal.callOut();
    objDog.callOut();
    return 0;
}
