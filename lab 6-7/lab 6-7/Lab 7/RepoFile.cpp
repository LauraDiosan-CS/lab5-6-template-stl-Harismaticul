//
//  RepoFile.cpp
//  Lab 7
//
//  Created by Haris Muller Cristea on 23/04/2020.
//  Copyright © 2020 Cristea Muller Haris. All rights reserved.
//

#include <stdio.h>
#include "RepoFile.h"
#include "Repo.h"
#include <iostream>
#include "prajitura.h"
#include <vector>
#include <fstream>
using namespace std;

template <class T>
RepoF <T> :: RepoF ()
{
    this->fileName=NULL;
}

template <class T>
RepoF <T> ::RepoF (const char* fileName)
{
    this->fileName = new char[strlen(fileName) + 1];
    strcpy_s(this->fileName, strlen(fileName) + 1, fileName);
    this->loadFromFile();
}

template <class T>
RepoF <T> ::~RepoF()
{
    if(this->fileName!= NULL)
    {
        delete[] this->fileName;
        this->FileName=NULL;
    }
//    this->elements.clear();
}

template <class T>
void RepoF <T> ::setFileName(const char* fileName)
{
    if (this->fileName != NULL)
    {
        delete[] this->fileName;
    }
    this->fileName = new char[strlen(fileName) + 1];
    strcpy_s(this->fileName, strlen(fileName) + 1, fileName);
}

template <class T>
void RepoF<T>::addElement(T s) {
    this->elements.push_back(s);
}

template <class T>
vector<T> RepoF<T>::getAll() {
    return this->elements;
}

template <class T>
int RepoF<T>::getSize()
{
    return this->elements.size();
}

template <class T>
T RepoF<T>::getElement(int id)
{
    typename vector<T> :: iterator it;

    for(
        it=this->elements.begin() ;
        it!=this->elements.end();
        it++
        )
        if( (*it).getID() == id )
            return *it;

    return *(this->elements.begin());
}

//overload la >>
template <class T>
void RepoF<T>::loadFromFile()
{
    if (this->fileName != NULL)
    {
        this->students.clear();
        ifstream f(this->fileName);
        char* nume = new char[20];
        char* ingrediente=new char[50];
        int id;
        double pret;
        while (!f.eof())
        {
            f >> id >> nume >> ingrediente >> pret;
            if (strlen(nume) > 0)
            {
                this->addElement(Prajitura(id,nume,ingrediente,pret));
            }
        }
        delete[] nume;
        delete[] ingrediente;
        f.close();
    }
}

template <class T>
void RepoF<T>::updateElement(int id, T newElement)
{
    vector<T> elements = this->elements;
    typename vector<T> :: iterator it;

    for( it = elements.begin() ; it!=elements.end(); it++ )
        if( (*it).getID() == id)
        {
            *it = newElement;
            break;
        }
}

template <class T>
void RepoF<T>::deleteElement(int id)
{
    vector<T> elements = this->elements;
    typename vector<T> :: iterator it;

    for( it = elements.begin() ; it!=elements.end(); it++ )
        if( (*it).getID() == id)
        {
            this->elements.erase(it);
            break;
        }
}
