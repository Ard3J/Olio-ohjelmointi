#include "classa1.h"
#include "classa2.h"
#include "classb.h"
#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    cout << "a:n arvo on: "<< a<< " ja osoite: "<< &a << endl;
    int *pointerA = &a;
    cout << "Pointterin osoittama osoite  on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;
    int &refA = a;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;
    int b = 6;
    // &refA = b;   //ei onnistu, koska referenssi sidotaan alustuksesssa, ei voi myöhemmin muuttaa
    pointerA = &b;  //onnistuu, pointterin voi muuttaa osoittamaan muualle myöhemminkin
    cout << "pointerA sijoitettu b:n arvo: " << *pointerA << endl << endl;      //extra endl osioiden välillä selkiyttämään

    ClassB objB;
    objB.setInfo("Olion B asettama info");
    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl << endl;            //extra endl osioiden välillä selkiyttämään

    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;
    return 0;
}
