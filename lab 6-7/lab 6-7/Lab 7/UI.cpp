#include "UI.h"
#include <iostream>
#include <string>
#include <string.h>
#include "Service.h"
#include <cstring>
#include <stdio.h>

using namespace std;

UI::UI()
{
}

UI::UI(Service& service)
{
	this->service = service;
}

void UI::displayMenu()
{
	cout << "1. Scrie \"add {{newID}} {{newName}} {newIngredients}} {{newPrice}}\" pentru a adauga un student\n";
	cout << "2. Scrie \"show\" pentru a afisa toti studentii\n";
	cout << "3. Scrie \"get at id {{i}}\" pentru a afisa prajituri cu id-ul i\n";
	cout << "4. Scrie \"update {{oldID}} {{newID}} {{newName}} {newIngredients}} {{newPrice}}\" pentru a updata studentul cu id-ul {{oldID}}\n";
	cout << "5. Scrie \"delete {{id}}\" pentru a sterge studentul cu id-ul {{id}}\n";
//	cout << "5. Scrie \"delete_pos {{i}}\" pentru a sterge studentul de pe pozitia {{i}}\n";
    cout << "6. Scrie \"media preturilor\" pentru a afisa media preturilor dupa ingrediente\n";
	cout << "x. Scrie\"exit\" pentru a inchide aplicatia\n";
	cout << "\nGive option: \n";
}

void UI::uiAddPrajitura(string cmd)
{
	string token;
	string sep = " ";
	size_t pos = cmd.find(sep);
	cmd.erase(0, pos + sep.length());
    
	pos = cmd.find(sep);
	token = cmd.substr(0, pos);
    int id=stoi(token.c_str());
	cmd.erase(0, pos + sep.length());
    
	pos = cmd.find(sep);
	token = cmd.substr(0, pos);
    char* nume=new char(strlen(token.c_str()));
    strcpy(nume,token.c_str());
    cmd.erase(0, pos + sep.length());
    
    pos = cmd.find(sep);
    token = cmd.substr(0, pos);
    char* ingrediente=new char(strlen(token.c_str()));
    strcpy(nume,token.c_str());

    pos=cmd.find(sep);
    token=cmd.substr(0,pos);
    double pret=stoi(token.c_str());
    cmd.erase(0,pos+sep.length());

	this->service.addElem(id,nume,ingrediente,pret);
}

void UI::uiShowAll()
{
	vector <Prajitura> elements = this->service.getAll();
    int size = this->service.getSize();
	for (int i = 0; i < size; i++)
	{
		cout << elements[i] << "\n";
	}
}

void UI::uiShowById(string cmd)
{
	string sep = " ";
	size_t pos = cmd.find(sep);
	cmd.erase(0, pos + sep.length());
	int position = stoi(cmd);
	cout << this->service.getPoz(position)<< endl;
}

void UI::uiUpdateById(string cmd)
{
	string token;
	string sep = " ";
	size_t pos = cmd.find(sep);
	cmd.erase(0, pos + sep.length());
    
    pos = cmd.find(sep);
    token = cmd.substr(0, pos);
    int id1=stoi(token.c_str());
    cmd.erase(0, pos + sep.length());
    
    pos = cmd.find(sep);
    token = cmd.substr(0, pos);
    int id2=stoi(token.c_str());
    cmd.erase(0, pos + sep.length());
    
    pos = cmd.find(sep);
    token = cmd.substr(0, pos);
    char* nume=new char(strlen(token.c_str()));
    strcpy(nume,token.c_str());
    cmd.erase(0, pos + sep.length());
    
    pos = cmd.find(sep);
    token = cmd.substr(0, pos);
    char* ingrediente=new char(strlen(token.c_str()));
    strcpy(nume,token.c_str());

    pos=cmd.find(sep);
    token=cmd.substr(0,pos);
    double pret=stoi(token.c_str());
    cmd.erase(0,pos+sep.length());
	
	this->service.updateElem(id1,id2,nume,ingrediente,pret);
}

void UI::uiDeleteById(string cmd)
{
	string token;
	string sep = " ";
	size_t pos = cmd.find(sep);
	cmd.erase(0, pos + sep.length());

	pos = cmd.find(sep);
	token = cmd.substr(0, pos);
    int id=stoi(token.c_str());

	this->service.deleteElem(id);
}

//void UI::uiDeleteAtPos(string cmd)
//{
//	string token;
//	string sep = " ";
//	size_t pos = cmd.find(sep);
//	cmd.erase(0, pos + sep.length());
//
//	pos = cmd.find(sep);
//	token = cmd.substr(0, pos);
//	int position = stoi(cmd);
//
//	this->service.deleteStudentByPosition(position);
//}

void UI::runUI()
{
	bool shouldRun = true;
	string cmd;
	while (shouldRun)
	{
		this->displayMenu();
		getline(cin, cmd);
		if (cmd.find("add") != string::npos)  //string::npos = -1
		{
			this->uiAddPrajitura(cmd);
		}
		if (cmd.find("show") != string::npos)
		{
			this->uiShowAll();
		}
		if (cmd.find("pos") != string::npos)
		{
			this->uiShowById(cmd);
		}
		if (cmd.find("update") != string::npos)
		{
			this->uiUpdateById(cmd);
		}
		if (cmd.find("delete_name") != string::npos)
		{
			this->uiDeleteById(cmd);
		}
//		if (cmd.find("delete_pos") != string::npos)
//		{
//			this->uiDeleteAtPos(cmd);
//		}
        if(cmd.find("media") != string::npos)
        {
            this->mediaPreturilor();
        }
		if (cmd.find("exit") != string::npos)
		{
			shouldRun = false;
		}
	}
}

void UI::mediaPreturilor()
{
    vector<Prajitura> elements=this->service.getAll();
    int size=this->service.getSize();
    int i;
    string used="";
    for(i=0;i<size;i++)
    {
        string ingredients=elements[i].getingrediente();
        string token;
        string sep = ",";
        while(ingredients.find(",") != string::npos)
        {
            size_t pos = ingredients.find(sep);
            token = ingredients.substr(0, pos);
            if(used.find(token) != string::npos )
            {
                used=used+ " " + token;
                cout<<token<<": "<<this->getPriceByIng(token);
            }
            ingredients.erase(0, pos + sep.length());
        }
        if(used.find(ingredients) != string::npos )
            {
                used=used+ " " + ingredients;
                cout<<ingredients<<": "<<this->getPriceByIng(ingredients);
            }
    }
}


double UI::getPriceByIng(string ing)
{
    vector<Prajitura> elements=this->service.getAll();
    int size=this->service.getSize();
    int i;
    double prices=0;
    for(i=0;i<size;i++)
    {
        string ingredients=elements[i].getingrediente();
        if(ingredients.find(ing) != string::npos)
            prices=prices+elements[i].getpret();
    }
    return prices;
}
