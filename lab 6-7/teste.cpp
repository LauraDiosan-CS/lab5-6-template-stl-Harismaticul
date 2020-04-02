#include "Teste.h"
#include "prajitura.h"

#include <assert.h>

#include<iostream>
using namespace std;

void testCookie()
{
    Prajitura c1(1, "numePrajitura1", "ingrediente1", 20.5);

    assert(c1.getID() == 1);
    assert(strcmp(c1.getnume(), "numePrajitura1") == 0);
    assert(strcmp(c1.getingrediente(), "ingrediente1") == 0);
    assert(c1.getpret() == 20.5);

    Prajitura c2;
    c2.setID(2);
    c2.setnume("numePrajitura2");
    c2.setingrediente("ingrediente2");
    c2.setpret(40.5);

    assert(c2.getID() == 2);
    assert(strcmp(c2.getnume(), "numePrajitura2") == 0);
    assert(strcmp(c2.getingrediente(), "ingrediente") == 0);
    assert(c2.getpret() == 40.5);

    //cout << c1 << c2;


    cout << "Cookie tests are ok" << endl;;
}
