#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream mycnp("date.in");
    ofstream datele("date.out");
    string cnp, gen, an1, an2, an, luna, ziua;

    mycnp >> cnp;

    int x = cnp[0] - '0';

    if(x==5 || x==1)
    {
        gen = "Masculin";

    }
    else if(x==6 || x==2)
    {
        gen = "Feminin";
    }
    else
    {
        gen = "Cnp-ul introdus este gresit!";
    }

    if(x==5 || x==6)
    {
        an1 = "20";
    }
    else if(x==1 || x==6)
    {
        an1 = "19";
    }

    an2 = cnp.substr(1, 2);
    an = an1 + an2;

    luna = cnp.substr(3, 2);
    ziua = cnp.substr(5, 2);

    datele << "Gen: " << gen << ", Ziua: " << ziua << ", luna: " << luna << ", anul: " << an;



    return 0;
}
