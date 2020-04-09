//
//  produs.cpp
//  lab 6-7
//
//  Created by Haris Muller Cristea on 01/04/2020.
//  Copyright © 2020 Cristea Muller Haris. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "prajitura.h"
#define strcpy_s

//Desc: creeaza un obiect de tip Prajitura
//In: -
//Out: o instanta a clasei Prajitura
Prajitura::Prajitura()
{
    this->id=0;
    this->nume=NULL;
    this->ingrediente=NULL;
    this->pret=0.0;
}

//Desc: creeaza un obiect de tip Produs
//In: id,day,money,type,desc
//Out: o instanta a clasei Produs
Prajitura::Prajitura(int id,char* nume,char* ingrediente,double pret)
{
    this->id=id;
    this->nume=new char[strlen(nume)+1];
    strcpy_s(this->nume,strlen(nume)+1,nume);
    this->ingrediente=new char[strlen(ingrediente)+1];
    strcpy_s(this->ingrediente,strlen(ingrediente)+1,ingrediente);
    this->pret=pret;
    
}

//Desc:constructor copiere a unui obiect de tip prajitura
//In: un obiect de tip prajitura
//Out: o instanta a clasei prajitura
Prajitura::Prajitura(const Prajitura& p)
{
    this->id=p.id;
    this->nume=new char[strlen(p.nume)+1];
    strcpy_s(this->nume,strlen(p.nume)+1,p.nume);
    this->ingrediente=new char[strlen(p.ingrediente)+1];
    strcpy_s(this->ingrediente,strlen(p.ingrediente)+1,p.ingrediente);
    this->pret=p.pret;
}

//Desc:destructor pentru un obiect bank
//In: -
//Out: -
Prajitura::~Prajitura()
{
    this->id=0;
    if(this->nume != 0)
    {
        delete[] this->nume;
        this->nume=NULL;
    }
    if(this->ingrediente != 0)
    {
        delete[] this->ingrediente;
        this->ingrediente=NULL;
    }
    
    this->pret=0;
}
//Desc:acceseaza acel atribut al prajiturii
//In: -
//Out: id-ul prajiturii
int Prajitura::getID()
{
    return this->id;
}

//Desc:acceseaza acel atribut al prajiturii
//In: -
//Out: numele prajiturii
char* Prajitura::getnume()
{
    return this->nume;
}

//Desc:acceseaza acel atribut al prajiturii
//In: -
//Out: ingrediente bancii
char* Prajitura::getingrediente()
{
    return this->ingrediente;
}

//Desc:acceseaza acel atribut al bancii
//In: -
//Out: pretul prajiturii
float Prajitura::getpret()
{
    return this->pret;
}

//Desc:schimba acel atribut al bancii
//In: id
//Out: -
void Prajitura::setID(int id)
{
    this->id=id;
}

//Desc:schimba acel atribut al bancii
//In: nume
//Out: -
void Prajitura::setnume(char* nume)
{
    if(this->nume)
    {
        delete[] this->nume;
    }
    this->nume=new char[strlen(nume)+1];
    strcpy_s(this->nume,strlen(nume)+1,nume);
}

//Desc:schimba acel atribut al bancii
//In: ingrediente
//Out: -
void Prajitura::setingrediente(char* ingrediente)
{
    if(this->ingrediente)
    {
        delete[] this->ingrediente;
    }
    this->ingrediente=new char[strlen(ingrediente)+1];
    strcpy_s(this->ingrediente,strlen(ingrediente)+1,ingrediente);
}

//Desc:schimba acel atribut al bancii
//In: pret
//Out: -
void Prajitura::setpret(double pret)
{
    this->pret=pret;
}
