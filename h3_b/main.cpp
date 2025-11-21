#include "animal.h"
#include "dog.h"
#include <iostream>
#include <windows.h>        //Ääkkösiä varten


using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);    //Ääkköset
    SetConsoleCP(CP_UTF8);          //kuntoon

    Animal objAnimal;
    Dog objDog;
    objAnimal.callOut();
    objDog.callOut();
    return 0;
}
