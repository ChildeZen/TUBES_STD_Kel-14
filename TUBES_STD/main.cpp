#include <iostream>
#include "main.h"
#include "Jurnalis.h"

using namespace std;

int main()
{
    string nama, bidang, status;
    int idJurnalis;
    infotypeJurnalis dataJ;
    ListJurnalis LJ;
    createListJurnalis(LJ);
    adrJurnalis j;

    int option=99;
    while (option != 0) {
        system("cls");
        cout << "============ Menu ============ " << endl;
        cout << "|| 1. Input Jurnalis        ||" << endl;
        cout << "|| 2. Show                  ||" << endl;
        cout << "|| 0. exit                  ||" << endl;
        cout << "============================== " << endl;
        cout << "Choose your option : ";
        cin >> option;
        switch(option) {
           case 1  :
              cout << "you choose option 1" << endl;
              cout << "input nama: ";
              cin >> dataJ.nama;
              cout << "input bidang: ";
              cin >> dataJ.bidang;
              cout << "status: ";
              cin >> dataJ.status;
              cout << "input idjurnalis";
              cin >> dataJ.idJurnalis;
              j = allocateJurnalis(dataJ);
              insertFirstJurnalis(LJ, j);
              break;
           case 2  :
              cout << "you choose option 2" << endl;
              showAllJurnalis(LJ);
              system("pause");
              break;

           default :
              exit(0);
        }
    }


    return 0;
}

