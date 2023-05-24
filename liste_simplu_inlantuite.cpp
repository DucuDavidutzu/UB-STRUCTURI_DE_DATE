#include <iostream>

using namespace std;

struct Nod
{
    int numar;
    Nod* urmator;
};
Nod* cap = NULL;

void afisareLista(Nod* cap)
{
    while (cap != NULL)
    {
        cout << cap->numar << "\n";
        cap = cap->urmator;
    }
}

void inserareInceput(Nod* &cap, int valoare)
{

    Nod *elem = new Nod;
    elem->numar = valoare;
    elem->urmator = cap;
    cap = elem;
}

void inserareFinal(Nod* &cap, int valoare)
{

    Nod *elem_final = new Nod;
    elem_final->numar = valoare;
    elem_final->urmator = NULL;
    if (cap == NULL)
        cap = elem_final;
    else
    {
        Nod *nod_curent = cap;
        while (nod_curent->urmator != NULL)
        {
            nod_curent = nod_curent->urmator;
            nod_curent->urmator = elem_final;
        }
    }
}

Nod* cautareValoare(Nod* cap, int valoare)
{
    while (cap != NULL && cap->numar != valoare)
        cap = cap->urmator;
    return cap;
}

void stergereElement(Nod* predecesor)
{
    Nod* victima = predecesor->urmator;

    predecesor->urmator = predecesor->urmator->urmator;

    delete victima;
}

void stergereElementValoare(Nod* &cap, int valoare)
{
    if(cap->numar == valoare)
    {
        Nod* victima = cap;
        cap = cap->urmator;
        delete victima;
        return;
    }
    Nod* elem = cap;
    while (elem->urmator != NULL && elem->urmator->numar != valoare)
    {
        elem = elem->urmator;
    }
    if (elem->urmator != NULL)
    {
        stergereElement(elem);
    }
}

int main()
{
    inserareInceput(cap, 1);
    inserareInceput(cap, 2);
    inserareFinal(cap, 3);
    inserareFinal(cap, 4);

    afisareLista(cap);

    stergereElementValoare(cap, 2);

    afisareLista(cap);
    return 0;
}
