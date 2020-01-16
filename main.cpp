#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Conversion{
    public:
        Conversion(int a, string b);
        void DECnaBIN(int liczba);
        void BINnaDEC(string cyfra);
        void DECnaHEX(int liczba);
        void HEXnaDEC(string cyfra);
        void BINnaHEX(string cyfra);
        void HEXnaBIN(string cyfra);
  
    private:
    	int lic;

        string cyf;
        string wynik;
};

Conversion::Conversion(int a, string b){
	if(a == 0)
    cout << endl << "Liczba ktora podales wynosi: " << b << endl;

	else
	cout << endl << "Liczba ktora podales wynosi: " << a << endl;

	cout << "Liczba po konwersji wynosi: ";
}

void Conversion::DECnaBIN(int liczba){
    lic = liczba;

    while(lic){
    wynik = (lic%2?"1":"0") + wynik;
    lic /= 2;
    }

    cout << wynik;
}

void Conversion::BINnaDEC(string cyfra){
	int wynik = strtol(cyfra.c_str(), NULL, 2);

    cout << wynik;
}

void Conversion::DECnaHEX(int liczba){
	if (liczba == 0)
	return;

	int wynik = liczba%16;
	liczba /= 16;
	DECnaHEX(liczba);

	if (wynik < 10)
	cout << wynik;

	else
	{
		char litera = wynik + 55;
		cout << litera;
	}
}

void Conversion::HEXnaDEC(string cyfra){
    int wynik = strtol(cyfra.c_str(), NULL, 16);
    cout<<wynik;
}

void Conversion::BINnaHEX(string cyfra){
    int dziesietna = strtol(cyfra.c_str(), NULL, 2);

	if (dziesietna == 0)
    return;

    int wynik = dziesietna%16;
    dziesietna /= 16;
    DECnaHEX(dziesietna);
    if (wynik < 10)
    cout << wynik;
    else
    {
    char litera = wynik + 55;
    cout << litera;
	}
}

void Conversion::HEXnaBIN(string cyfra){
    int dziesietna = strtol(cyfra.c_str(), NULL, 16);

	if (dziesietna == 0)
    	return;

    int wynik = dziesietna%2;
    dziesietna /= 2;
    DECnaBIN(dziesietna);

	cout << wynik;
}


int main(void)
{
    int zadanie;
    int liczba = 0;
    string cyfra;

    cout << "++MENU++"<< endl << endl;
    cout << "1.Konwersja z DEC na BIN." << endl;
    cout << "2.Konwersja z BIN na DEC." << endl;
    cout << "3.Konwersja z DEC na HEX." << endl;
    cout << "4.Konwersja z HEX na DEC." << endl;
    cout << "5.Konwersja z BIN na HEX." << endl;
    cout << "6.Konwersja z HEX na BIN." << endl;
    cout << "7.Zakonczenie programu." << endl;
    cout << endl << "Co chcesz wykonac?: ";
	cin >> zadanie;

    switch(zadanie){
        case 1:
            cout << endl << "Podaj liczbe w systemie dziesietnym: ";
            cin >> liczba;
        break;

        case 2:
            cout << endl << "Podaj liczbe w systemie dwojkowym: ";
            cin >> cyfra;
        break;

        case 3:
            cout << endl << "Podaj liczbe w systemie dziesietnym: ";
            cin >> liczba;
        break;

        case 4:
            cout << endl << "Podaj liczbe w systemie szesnastkowym: ";
            cin >> cyfra;
        break;

        case 5:
            cout << endl << "Podaj liczbe w systemie dwojkowym: ";
            cin >> cyfra;
        break;

        case 6:
            cout << endl << "Podaj liczbe w systemie szesnastkowym: ";
            cin >> cyfra;
        break;

        case 7:
            return 0;
        break;

        default:
            cout << endl << "Wybierz punkt z listy!!" << endl << endl;
            system("pause");
            return 0;
        break;
    };

    Conversion Moja(liczba, cyfra);

    if(zadanie == 1) Moja.DECnaBIN(liczba);
    if(zadanie == 2) Moja.BINnaDEC(cyfra);
    if(zadanie == 3) Moja.DECnaHEX(liczba);
    if(zadanie == 4) Moja.HEXnaDEC(cyfra);
    if(zadanie == 5) Moja.BINnaHEX(cyfra);
    if(zadanie == 6) Moja.HEXnaBIN(cyfra);

    cout << endl << endl;
    system("pause");
    system("cls");
    main();
}
