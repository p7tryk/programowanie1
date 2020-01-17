#include <iostream>
//#include <string>
//#include <cstdlib>

using namespace std;

int main()
{
    char again = 'y';

    do{
        int a;

        //system ("cls");

        cout <<"Podaj:";
        cin >> a;

        switch(a){
            case 1:
                cout << endl << endl << 1 << endl << endl;
            break;

            case 2:
                again = 'n';
            break;

            default:
                cout << "blad" << endl << endl;
            break;
        };

        //system ("pause");

    }while(again == 'y');

    return 0;
}
