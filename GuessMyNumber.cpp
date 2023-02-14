#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <Windows.h>
using namespace std;
int main()
{
    string name="fred";
    int randomNumber = 1,Attempt = 0;
    bool win = false;
    system("color 02");
    srand(time(NULL));
    cout << "hola bienvenido a adivina el numero en este programa se creara un numero aleatorio entero y tienes que adivinarlo" << endl;
    cout << "bien introduce tu nombre " << endl;
    cin >> name;
    cout << "muy bien " << endl;
    cout << name << endl;
    cout<<"haz tu primer intento, el numero es del 1 al 100" << endl;
    randomNumber = 1 + rand() % (101 - 1);
    //cout << randomNumber << endl;
    for (int i = 0; win==false ; i++)
    {
        cin >> Attempt;
        beep(1600, 200);
        if (Attempt < 1 || Attempt>100) {
            cout << "esta fuera de rango o ni siquiera es un numero entero, vuelve a abrir el programa" << endl;
            return 0;
        }
        if (Attempt < randomNumber) {
            cout << "te falto, intenta mas arriba"<<endl;
            if (Attempt < randomNumber-20) {
                system("color 04");
                cout << "estas bastante lejos pero animo" << endl;
            }
            else if (Attempt < randomNumber - 10) {
                system("color 06");
            }
            else if (Attempt < randomNumber - 5) {
                system("color 02");
            }
            else if (Attempt < randomNumber) {
                system("color 07");
                cout << "animo, estas muy cerca" << endl;
            }
        }
        if (Attempt > randomNumber) {
            cout << "te pasaste, intenta mas abajo" << endl;
            if (Attempt > randomNumber + 20) {
                system("color 04");
                cout << "estas bastante lejos pero animo" << endl;
            }
            else if (Attempt > randomNumber + 10) {
                system("color 06");
            }
            else if (Attempt > randomNumber + 5) {
                system("color 02");
            }
            else if (Attempt > randomNumber) {
                system("color 07");
                cout << "animo, estas muy cerca" << endl;
            }
        }
        if (Attempt == randomNumber) {
            if (i == 0) {
                cout << "le atinaste a la primera " << name << endl;
                win = true;
                system("color 20");
            }
            else {
                cout << "lo lograste: " << name << " en " << i + 1 << " intentos" << endl;
                win = true;
                system("color 20");
            }
        }
    }
    

}