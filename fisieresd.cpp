#include <iostream>
#include <fstream>

using namespace std;

fstream fin("sum.in");
ofstream fout("sum.out");

int main()
{
    int a = 1;
    int b = 3;
    int s;

    fin << a;
    fin << b;
    fin >> a >> b;
    fin.close();
    s = a + b;

    fout << s;
    fout.close();

    return 0;
}
