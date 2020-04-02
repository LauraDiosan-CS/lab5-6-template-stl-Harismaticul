//
//  UI.cpp
//  lab 6-7
//
//  Created by Haris Muller Cristea on 01/04/2020.
//  Copyright © 2020 Cristea Muller Haris. All rights reserved.
//

#include <stdio.h>
#include "UI.h"
#include "Service.h"
#include "produs.h"
#include "Repo.h"
#include <iostream>

using namespace std;


UI::UI()
{
    this->optiune=0;
}

UI::UI(optiune)
{
    this->optiune=optiune;
}

UI::~UI(optiune)
{
    this->optiune=6;
}

UI::accesareOptiune()
{
    cout<<"Alege optiune: "
    if(this->optiune==1)
    {
        int cod,char* nume,float pret;
        cout<<"Cod: ";
        cin>>cod;
        cout<<endl;
        cout<<"Nume: ";
        nume=new char[21];
        cin.getline(nume,21);
        cout<<endl;
        cout<<"Pret: ";
        cin>>pret;
        
        
    }
        
}



void::meniu()
{
    cout<<"1.Adauga produs";
    cout<<"2.Sterge produs";
    cout<<"3.Update produs";
    cout<<"4.Vizualizare produs";
    cout<<"5.Vizualizare totala";
    cout<<"6.Exit"
}
