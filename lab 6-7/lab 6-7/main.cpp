#include <iostream>
#include "prajitura.h"
#include "Repo.h"
#include "Service.h"
#include "teste.h"
using namespace std;

//meniul aplicatiei cu operatiile specifice
void menu()
{
    cout << "Select option: " << endl;
    cout << "1. Adauga produs " << endl;
    cout << "2. Afisare produse" << endl;
    cout << "3. Afisati numar de produse" << endl;
    cout << "4. Stergere produs" << endl;
    cout << "5. Exit" << endl;
    cout << endl;
}


//functia principala
int main()
{
    char nume[10]={};
    double  pret = {};
    int id = {};
    char ingrediente[100]={};
    int ok = 1;
    Repo r;
    Service ser;
    while (ok == 1)
    {

        menu();
        cout<<"Alege optiune: ";
        int option=0;
        cin>>option;
        if (option == 1)
        {
            cout << "Introduceti id: ";
            cin >> id;
            cout << "Introduceti numele: ";
            cin>>nume;
            cout << "Introduceti ingredientele: ";
            cin>>ingrediente;
            cout << "Introduceti suma de bani: ";
            cin >> pret;
            cout << endl;
            ser.addElem(id, nume,ingrediente, pret);

            cout << endl;

        }
        else if (option == 2)
        {
            for (int i = 0; i < ser.getSize(); i++)
            {
                cout << ser.getPoz(i).getID() << " "<< ser.getPoz(i).getnume() << " " << ser.getPoz(i).getingrediente()<< " " << ser.getPoz(i).getpret() <<endl;
            }
            cout << endl;

        }

        else if (option == 3)
        {
            cout << "Numarul de produse este " << ser.getSize() << endl;
            cout << endl;
            cout << endl;
        }
        

        else if (option == 4)
        {
            int idNew;
            cout << "Introduceti codul obiectului pe care doriti sa il stergeti: ";
            cin >> idNew;
            ser.deleteElem(idNew);
        }
//        if (option == 5)
//        {
//            cout << "Introduceti codul unde aveti modificari de facut: ";
//            cin >> id;
//            cout << "Introduceti noul cod: ";
//            cin>> cod2;
//            cout << "Introduceti numele nou: ";
//            cin >> nume;
//            cout << "Introduceti suma de bani noua: ";
//            cin >> pret;
//            cout << endl;
//            ser.updateElem(cod, cod2, nume, pret);
//        }
        else if (option == 5)
            ok = 0;
        else
            cout<<endl<<"Nu exista optiunea."<<endl<<endl<<endl;
    }
}

