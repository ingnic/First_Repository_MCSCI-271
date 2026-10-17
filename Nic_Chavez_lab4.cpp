#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre, nombreMes, zodiacSign;
    int dia, mes;

    cout << "Enter full name: ";
    getline(cin, nombre);

    cout << "Enter birth day: ";
    cin >> dia;

    cout << "Enter birth month (1-12): ";
    cin >> mes;

    /* switch (mes)
    {
        case 1:
            nombreMes = "Enero";
            break;

        case 2:
            nombreMes = "Febrero";
            break;

        case 3:
            nombreMes = "Marzo";
            break;

        case 4:
            nombreMes = "Abril";
            break;

        case 5:
            nombreMes = "Mayo";
            break;

        case 6:
            nombreMes = "Junio";
            break;

        case 7:
            nombreMes = "Julio";
            break;

        case 8:
            nombreMes = "Agosto";
            break;

        case 9:
            nombreMes = "Septiembre";
            break;

        case 10:
            nombreMes = "Octubre";
            break;

        case 11:
            nombreMes = "Noviembre";
            break;

        case 12:
            nombreMes = "Diciembre";
            break;

        default:
            nombreMes = "Mes invalido";
    } */

    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19))
        zodiacSign = "Aries";

    else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20))
        zodiacSign = "Taurus";

    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
        zodiacSign = "Gemini";

    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22))
        zodiacSign = "Cancer";

    else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22))
        zodiacSign = "Leo";

    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
        zodiacSign = "Virgo";

    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
        zodiacSign = "Libra";

    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
        zodiacSign = "Scorpio";

    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
        zodiacSign = "Sagittarius";

    else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19))
        zodiacSign = "Capricorn";

    else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18))
        zodiacSign = "Aquarius";

    else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20))
        zodiacSign = "Pisces";

    cout << "\n \nHello " << nombre << "! \nYour zodiac sign is: " << zodiacSign << endl;

    cout << "\n \n--- DATOS INGRESADOS ---\n";
    cout << "Nombre: " << nombre << endl;
    cout << "Dia: " << dia << endl;
    cout << "Mes: " << mes << endl;

    return 0;
}