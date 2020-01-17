#ifndef CONVERSION_H_INCLUDED
#define CONVERSION_H_INCLUDED

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

#endif // CONVERSION_H_INCLUDED
