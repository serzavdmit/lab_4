#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ukr");
    int Factor_1 = 1;
    int Factor_2 = 1;
    int Factor_3 = 1;
    int k;
    int vybor;
    int P;
    cout << "\t\tПрограма для розрахунку операцiй комбiнаторики" << endl;
    cout << "Виберiть операцiю:"<<endl;
    cout << "1) Перестановка без повторення натиснiть 1;" << endl;
    cout << "2) Розмiщення без повторення натиснiть 2;" << endl;
    cout << "3) Комбiнацiя без повторення натиснить 3;" << endl;
    cout << "4) Розмiщення з повторенням натиснить 4;" << endl;
    cout << "5) Комбiнацiя з повторенням натиснiть 5;" << endl;
    do
    {
        cin >> vybor;
        switch (vybor)
        {
        case 1:
            cout << "Введiть кiлькiсть елементiв = ";
            cin >> P;
            for (int i = 1; i <= P; ++i)
            {
                Factor_1 *= i;
            }
            cout << "Кiлькiсть перестановок = "<<Factor_1;
            break;
        case 2:
            do
            {
                cout << "Введiть кiлькiсть елементiв = ";
                cin >> P;
                cout << "Введiть кiлькiсть вибiрки = ";
                cin >> k;
                if (k < P)
                {
                    for (int i = 1; i <= P; ++i)
                    {
                        Factor_1 *= i;
                    }
                    for (int i = 1; i <= P - k; ++i)
                    {
                        Factor_2 *= i;
                    }
                    cout << "Кiлькiсть розмiщення без повторень = " << Factor_1 / Factor_2;
                }
                else
                {
                    cout << "Кiлькiсть вибiрки бiльша за кiлькiсть елементiв"<<endl;
                }
            } while (k > P);
            break;
        case 3:
            do
            {
                cout << "Введiть кiлькiсть елементiв = ";
                cin >> P;
                cout << "Введiть кiлькiсть вибiрки = ";
                cin >> k;
                if (k < P)
                {
                    for (int i = 1; i <= P; ++i)
                    {
                        Factor_1 *= i;
                    }
                    for (int i = 1; i <= P - k; ++i)
                    {
                        Factor_2 *= i;
                    }
                    for (int i = 1; i <= k; ++i)
                    {
                        Factor_3 *= i;
                    }
                    cout << "Кiлькiсть комбiнацiй без повторення = " << Factor_1 / (Factor_2 * Factor_3);
                }
                else
                {
                    cout << "Кiлькiсть вибiрки бiльша за кiлькiсть елементiв" << endl;
                }
            } 
            while (k > P);
            break;
        case 4:
            do
            {
                cout << "Введiть кiлькiсть елементiв = ";
                cin >> P;
                cout << "Введiть кiлькiсть вибiрки = ";
                cin >> k;
                if (k < P)
                {
                    
                    cout << "Кiлькiсть розмiщення з повторенням = " << pow(P,k);
                }
                else
                {
                    cout << "Кiлькiсть вибiрки бiльша за кiлькiсть елементiв" << endl;
                }
            } while (k > P);
            break;
        case 5:
            do
            {
                cout << "Введiть кiлькiсть елементiв = ";
                cin >> P;
                cout << "Введiть кiлькiсть вибiрки = ";
                cin >> k;
                if (k < P)
                {
                    for (int i = 1; i <= P+k-1; ++i)
                    {
                        Factor_1 *= i;
                    }
                    for (int i = 1; i <= P-1; ++i)
                    {
                        Factor_2 *= i;
                    }
                    for (int i = 1; i <= k; ++i)
                    {
                        Factor_3 *= i;
                    }
                    cout << "Кiлькiсть комбiнацiй з повторенням = " << Factor_1 / (Factor_2 * Factor_3);
                }
                else
                {
                    cout << "Кiлькiсть вибiрки бiльша за кiлькiсть елементiв" << endl;
                }
            } while (k > P);
            break;
        default:
            cout << "Введiть правильну нумерацiю";
        }
    }
        while (vybor < 1 || vybor>5);
}


