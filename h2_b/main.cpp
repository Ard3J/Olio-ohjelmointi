#include "car.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;
    carList.emplace_back("Audi","A4",2020);
    carList.emplace_back("Citroen","2CV",1970);
    carList.emplace_back("Toyota","Corolla",1985);

    carList[1].printData();
    cout << endl;           //Lisätty selkiyttämään tulostusta

    for(Car car: carList)
    {
        car.printData();
    }
    return 0;
}
