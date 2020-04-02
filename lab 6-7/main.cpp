#include <iostream>
#include "produs.h"
#include "Repo.h"
#include "Service.h"
using namespace std;

//meniul aplicatiei cu operatiile specifice
void menu()
{
    cout << "Select option: " << endl;
    cout << "1. Adauga produs " << endl;
    cout << "2. Afisare produse" << endl;
    cout << "3. Afisati numar de produse" << endl;
    cout << "4. Delete dupa cod" << endl;
    cout << "5. Update dupa cod" << endl;
    cout << "6. Exit" << endl;
    cout << endl;
}


//functia principala
int main()
{
    
    char nume[10]={};
    float  pret = {};
    int cod = {} , cod2={};
    int ok = 1;
    Repo r;
    Service ser;
    while (ok == 1)
    {

        menu();

        int option;

        cin >> option;
        if (option == 1)
        {
            cout << "Introduceti cod: ";
            cin >> cod;
            cout << "Introduceti numele: ";
            cin >> nume;
            cout << "Introduceti suma de bani: ";
            cin >> pret;
            cout << endl;

            ser.addElem(cod, nume, pret);

            cout << endl;

        }
        if (option == 2)
        {
            for (int i = 0; i < ser.getSize(); i++)
            {
                     cout << ser.getAll()[i].getID() << " "<< ser.getAll()[i].getnume() << " " << ser.getAll()[i].getpret() <<endl;
            }
            
            cout << endl;

        }

        if (option == 3)
        {
            cout << "Numarul de produse este " << ser.getSize() << endl;
            cout << endl;

            cout << endl;
        }
        

        if (option == 4)
        {
            int idNew;
            cout << "Introduceti codul obiectului pe care doriti sa il stergeti: ";
            cin >> idNew;
            ser.deleteElem(idNew);
        }
        if (option == 5)
        {
            cout << "Introduceti codul unde aveti modificari de facut: ";
            cin >> cod;
            cout << "Introduceti noul cod: ";
            cin>> cod2;
            cout << "Introduceti numele nou: ";
            cin >> nume;
            cout << "Introduceti suma de bani noua: ";
            cin >> pret;
            cout << endl;
            ser.updateElem(cod, cod2, nume, pret);
        }
        if (option == 6)
            ok = 0;

    }
    
}

