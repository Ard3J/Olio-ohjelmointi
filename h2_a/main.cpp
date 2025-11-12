#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Citroen");
    objCar.setModel("2CV");
    objCar.setYearModel(1970);
    objCar.printData();

    Rectangle *objRectangle;
    objRectangle = new Rectangle;
    objRectangle->setHeight(2.5);
    objRectangle->setWidth(4.2);
    cout << "Rectangle area: " << objRectangle->getArea() << " and circumstance: " << objRectangle->getCircum() << endl;
    delete objRectangle;
    objRectangle = nullptr;

    unique_ptr<Student> objStudent = make_unique<Student>();
    objStudent->setName("Erkki Esimerkki");
    objStudent->setStudentNumber(1234567);
    objStudent->setAverage(3.7);
    cout << "Name: " << objStudent->getName() << " Student number: " << objStudent->getStudentNumber() << " Average: " << objStudent->getAverage() << endl;
    return 0;
}
