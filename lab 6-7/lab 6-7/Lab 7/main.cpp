#include "Repo.h"
#include "prajitura.h"
#include "RepoFile.h"
#include "Service.h"
#include <iostream>
#include <fstream>
#include "UI.h"
using namespace std;

void test_repo()
{
    Repo<Prajitura> repo;
    Prajitura c1(1, "numePrajitura1", "ingrediente1", 20.5);
    Prajitura c2(2, "numePrajitura2", "ingrediente2", 40.5);

    repo.addElement(c1);
    repo.addElement(c2);

    assert( repo.getSize() == 2 );

    vector<Prajitura> elements = repo.getAll();
    vector<Prajitura> ::iterator i;

    for (i = elements.begin(); i != elements.end(); i++)
         cout << *i;

    Prajitura c3(2, "numePrajitura3", "ingrediente3", 20.5);
    repo.updateElement(2, c3);
    assert(repo.getElement(2) == c3);

    repo.deleteElement(1);
    repo.deleteElement(2);
    assert(repo.getSize() == 0);
}

;
int main()
{
    test_repo();
    RepoF<Prajitura> r;
    r.setFileName("File.strings");
    r.loadFromFile();
    Service s;
    s.setRepo(r);
    UI ui(s);
    ui.runUI();
    return 0;
}
