#include <iostream>
//#include <string>
//#include <cstdlib>

using namespace std;

int main()
{
  bool valid=true;
    do{
        int a;
        cout <<"Podaj:";
        cin >> a;

        switch(a){
            case 1:
                cout << endl << endl << 1 << endl << endl;
            break;

            case 2:
	      !valid;
            break;

            default:
                cout << "blad" << endl << endl;
		continue;
        };
        //system ("pause");

    }while(valid);

    return 0;
}
