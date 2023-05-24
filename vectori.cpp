#include <iostream>

using namespace std;

int v[100], n;

void stergere(int pozitie)
{
    for(int i = pozitie ; i < n - 1; i ++)
    {
        v[i] = v[i+1];
    }
    n--;
}

void inserare(int poz, int val)
{
    n++;
    for(int i = n - 1 ; i >= poz ; i --)
    {
        v[i+1] = v[i];
    }
    v[poz] = val;
}

int main()
{
    int i, p, val, pozitie;

    cout << "Dati numarul maxim de valori ale vectorului: "; cin >> n;

    for(i=0; i<n; i++)
    {
        cout << "Dati v[" << i << "]: "; cin >> v[i];
    }

    for(i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    cout << "Ce valoare doriti sa inserati: "; cin >> val;
    cout << "La ce pozitie: "; cin >> pozitie;

    inserare(pozitie, val);

    for(i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Ce pozitie doriti sa stergeti?: "; cin >> pozitie;

    stergere(pozitie);

    for(i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }


    return 0;
}
