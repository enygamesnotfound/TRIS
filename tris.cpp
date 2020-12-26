/**
 * @file tris.cpp
 * @author Enea Romano
 * @brief questo è un tris
 * @version 1.0
 * @date 2020-12-26
 * @copyright Copyright (c++) 2020
 */

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

char segno[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char giocatore = 'x';
int n;

void turno()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << segno[i][j] << " ";
        }
        cout << endl;
    }
}

void get_input()
{
    int a;
    cout << "e' il turno di " << giocatore << "\n" << "inserisci il numero per mettere il segno" << endl;
    cin >> a;

    if (a == 1)
    {
        segno[0][0] = giocatore;
    }
    else if (a == 2)
    {
        segno[0][1] = giocatore;
    }
    else if (a == 3)
    {
        segno[0][2] = giocatore;
    }
    else if (a == 4)
    {
        segno[1][0] = giocatore;
    }
    else if (a == 5)
    {
        segno[1][1] = giocatore;
    }
    else if (a == 6)
    {
        segno[1][2] = giocatore;
    }
    else if (a == 7)
    {
        segno[2][0] = giocatore;
    }
    else if (a == 8)
    {
        segno[2][1] = giocatore;
    }
    else if (a == 9)
    {
        segno[2][2] = giocatore;
    }
    system("cls");
}

void cambio_player()
{
    if (giocatore == 'x')
    {
        giocatore = 'o';
    }
    else
    {
        giocatore = 'x';
    }
}

char vittoria()
{

    //00 01 02   1 2 3
    //10 11 12   4 5 6
    //20 21 22   7 8 9

    //giocatore 'x'
    if (segno[0][0] == 'x' && segno[0][1] == 'x' && segno[0][2] == 'x')
    {
        return 'x';
        cout << "ha vinto x" << endl;
        system("pause");
        return 0;
    }
    if (segno[1][0] == 'x' && segno[1][1] == 'x' && segno[1][2] == 'x')
    {
        return 'x';
        cout << "ha vinto x" << endl;
        system("pause");
        return 0;
    }
    if (segno[2][0] == 'x' && segno[2][1] == 'x' && segno[2][2] == 'x')
    {
        return 'x';
        cout << "ha vinto x" << endl;
        system("pause");
        return 0;
    }
    if (segno[0][0] == 'x' && segno[1][0] == 'x' && segno[2][0] == 'x')
    {
        return 'x';
        cout << "ha vinto x" << endl;
        system("pause");
        return 0;
    }
    if (segno[0][1] == 'x' && segno[1][1] == 'x' && segno[2][1] == 'x')
    {
        return 'x';
        cout << "ha vinto x" << endl;
        system("pause");
        return 0;
    }
    if (segno[0][2] == 'x' && segno[1][2] == 'x' && segno[2][2] == 'x')
    {
        return 'x';
        cout << "ha vinto x" << endl;
        system("pause");
        return 0;
    }
    if (segno[0][0] == 'x' && segno[1][1] == 'x' && segno[2][2] == 'x')
    {
        return 'x';
        cout << "ha vinto x" << endl;
        system("pause");
        return 0;
    }
    if (segno[0][2] == 'x' && segno[1][1] == 'x' && segno[2][0] == 'x')
    {
        return 'x';
        cout << "ha vinto x" << endl;
        system("pause");
        return 0;
    }

    //giocatore 'o'
    if (segno[0][0] == 'o' && segno[0][1] == 'o' && segno[0][2] == 'o')
    {
        return 'o';
        cout << "ha vinto o" << endl;
        system("pause");
        return 0;
    }
    if (segno[1][0] == 'o' && segno[1][1] == 'o' && segno[1][2] == 'o')
    {
        return 'o';
        cout << "ha vinto o" << endl;
        system("pause");
        return 0;
    }
    if (segno[2][0] == 'o' && segno[2][1] == 'o' && segno[2][2] == 'o')
    {
        return 'o';
        cout << "ha vinto o" << endl;
        system("pause");
        return 0;
    }
    if (segno[0][0] == 'o' && segno[1][0] == 'o' && segno[2][0] == 'o')
    {
        return 'o';
        cout << "ha vinto o" << endl;
        system("pause");
        return 0;
    }
    if (segno[0][1] == 'o' && segno[1][1] == 'o' && segno[2][1] == 'o')
    {
        return 'o';
        cout << "ha vinto o" << endl;
        system("pause");
        return 0;
    }
    if (segno[0][2] == 'o' && segno[1][2] == 'o' && segno[2][2] == 'o')
    {
        return 'o';
        cout << "ha vinto o" << endl;
        system("pause");
        return 0;
    }
    if (segno[0][0] == 'o' && segno[1][1] == 'o' && segno[2][2] == 'o')
    {
        return 'o';
        cout << "ha vinto o" << endl;
        system("pause");
        return 0;
    }
    if (segno[0][2] == 'o' && segno[1][1] == 'o' && segno[2][0] == 'o')
    {
        return 'o';
        cout << "ha vinto o" << endl;
        system("pause");
        return 0;
    }
    return '/';
}

int main()
{
    cout << "regole: " << endl;
    cout << "non barare;\n";
    cout << "non occupare posti già occupati;\n";
    cout << "divertiti :)\n";

    n = 0;
    system("cls");
    turno();
    while (1)
    {
        n++;
        get_input();
        turno();
        if (vittoria() == 'x')
        {
            cout << "ha vinto x" << endl;
            system("pause");
            break;
        }
        else if (vittoria() == 'o')
        {
            cout << "ha vinto o" << endl;
            system("pause");
            break;
        }
        else if (vittoria() == '/' && n == 9)
        {
            cout << "la partita si è conclusa pari :) " << endl;
            system("pause");
            break;
        }
        cambio_player();
    }
    system("cls");
}