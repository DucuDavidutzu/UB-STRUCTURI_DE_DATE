#include <iostream>

using namespace std;

int main()
{
	int n, ogl = 0, c, copie;
	cout << "Dati nr. :"; cin >> n;
	copie = n;

	
	while (n != 0)
	{
		c = n % 10;
		ogl = ogl * 10 + c;
		n = n / 10;
	}
	if (copie == ogl)
	{
		cout << "Nr. dat este palindrom." << endl;
	}
	else
	{
		cout << "Nr. dat nu este palindrom." << endl;
	}
}

