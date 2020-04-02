//
//  Repo.cpp
//  lab 6-7
//
//  Created by Haris Muller Cristea on 01/04/2020.
//  Copyright © 2020 Cristea Muller Haris. All rights reserved.
//

#include <stdio.h>
#include "Repo.h"
#include "prajitura.h"

//Desc: creeaza un obiect de tip Repository
//In: -
//Out: -
Repo::Repo()
{
    
}

//Desc:destructor pentru un obiect repository
//In: -
//Out: -
Repo::~Repo()
{
    
}

//Desc: adauga un obiect
//In: un obiect de tip prajitura
//Out: -
void Repo::createProdus(Prajitura p)
{
    this->prajituri.addElem(p);
}



//Desc: sterge un obiect dupa id
//In: id
//Out: -
void Repo::deleteProdus(int id)
{
    prajituri.deleteElem(id);
}


//Descr:    acceseaza un element din vector
//In:        pozitia
//Out:        elementul din vector de pe pozitia curenta
Prajitura Repo::getPoz(int poz)
{
    return this->prajituri.getElemPos(poz);
}

//Descr:    acceseaza lungimea vectorului
//In:
//Out:        lungimea vectorului
int Repo::getSize()
{
    return this->prajituri.getSize();
}


