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
