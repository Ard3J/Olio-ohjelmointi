#include "car.h"
#include <iostream>
#define WIN32_LEAN_AND_MEAN
#define BYTE win_byte_override
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    Car objCar("Toyota","Corolla");
    objCar.setObjEngine();
    objCar.setObjWheels();
    objCar.printDetails();
    return 0;
}
