#include "car.h"
#include <iostream>

using namespace std;

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::printDetails()
{
    cout << "Auto: "<< model << " " << brand << endl;
    cout << "Moottori: "<< objEngine->getHorsepower() << " hp, " << objEngine->getDisplacement() << " L"<< endl;
    cout << "Rengas 1: "<< objWheel1->getSize() << " tuumaa, " << objWheel1->getType() << endl;
    cout << "Rengas 2: "<< objWheel2->getSize() << " tuumaa, " << objWheel2->getType() << endl;
    cout << "Rengas 3: "<< objWheel3->getSize() << " tuumaa, " << objWheel3->getType() << endl;
    cout << "Rengas 4: "<< objWheel4->getSize() << " tuumaa, " << objWheel4->getType() << endl;
}

Car::Car() {
    objEngine = make_unique<Engine>();
    objWheel1 = make_unique<Wheel>();
    objWheel2 = make_unique<Wheel>();
    objWheel3 = make_unique<Wheel>();
    objWheel4 = make_unique<Wheel>();
}

Car::Car(string b, string m)
{
    model = m;
    brand = b;
    objEngine = make_unique<Engine>();
    objWheel1 = make_unique<Wheel>();
    objWheel2 = make_unique<Wheel>();
    objWheel3 = make_unique<Wheel>();
    objWheel4 = make_unique<Wheel>();
}


void Car::setObjEngine()
{
    objEngine->setHorsepower(150);
    objEngine->setDisplacement(2.0);
}

void Car::setObjWheels()
{
    objWheel1->setSize(17);
    objWheel1->setType("kesärengas");
    objWheel2->setSize(17);
    objWheel2->setType("kesärengas");
    objWheel3->setSize(17);
    objWheel3->setType("kesärengas");
    objWheel4->setSize(17);
    objWheel4->setType("kesärengas");
}



