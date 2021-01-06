#include "valuta.cpp"

int main(int args, char* argv[]) {
	Cvaluta eur("EUR", 100, 6.65, 1);
	Cvaluta rur("RUR", 4500, 18.5, 100);
	Cvaluta usd(eur);
	usd.SetID("USD");
	usd.SetKilk(550);
	usd.SetKurs(5.05);
	cout << endl;
	eur.Print();
	rur.Print();
	usd.Print();
	cout << endl << "usd.equivalent more then eur.equivalent ?" << endl;
	if (usd.CompareEquivalent(eur))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	cout << endl;
	return 0;	
}
