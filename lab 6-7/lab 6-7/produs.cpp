//
//  produs.cpp
//  lab 6-7
//
//  Created by Haris Muller Cristea on 01/04/2020.
//  Copyright © 2020 Cristea Muller Haris. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "produs.h"
#define strcpy_s


Prajitura::Produs()
{
    this->cod=0;
    this->nume=NULL;
    this->pret=0;
}

Produs::Produs(int cod,char* nume,float pret)
{
    this->cod=cod;
    this->nume=new char[strlen(nume)+1];
    strcpy_s(this->nume,strlen(nume)+1,nume);
    this->pret=pret;
    
}

Produs::Produs(const Produs& p)
{
    this->cod=p.cod;
    this->nume=new char[strlen(p.nume)+1];
    strcpy_s(this->nume,strlen(p.nume)+1,p.nume);
    this->pret=p.pret;
}

Produs::~Produs()
{
    this->cod=0;
    if(this->nume != 0)
    {
        delete[] this->nume;
        this->nume=NULL;
    }
    this->pret=0;
}

int Produs::getID()
{
    return this->cod;
}

char* Produs::getnume()
{
    return this->nume;
}

float Produs::getpret()
{
    return this->pret;
}

void Produs::setID(int cod)
{
    this->cod=cod;
}
void Produs::setnume(char* nume)
{
    if(this->nume)
    {
        delete[] this->nume;
    }
    this->nume=new char[strlen(nume)+1];
    strcpy_s(this->nume,strlen(nume)+1,nume);
}

void Produs::setpret(float pret)
{
    this->pret=pret;
}
