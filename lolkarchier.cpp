#include "conversion.h"
#include "conversion.cpp"

int main(void)
{
    char again = 'y';

    do{

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

        default:
	  break;
        break;
    };

    Conversion Moja(liczba, cyfra);

    if(zadanie == '1') Moja.DECnaBIN(liczba);
    if(zadanie == '2') Moja.BINnaDEC(cyfra);
    if(zadanie == '3') Moja.DECnaHEX(liczba);
    if(zadanie == '4') Moja.HEXnaDEC(cyfra);
    if(zadanie == '5') Moja.BINnaHEX(cyfra);
    if(zadanie == '6') Moja.HEXnaBIN(cyfra);

    cout << endl << endl;
    system("pause");
    system("cls");

    }while(again == 'y');
}
