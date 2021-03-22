// Программа с функцией для перевода скорости, указанной в км/ч в м/с
#include <iostream>
using namespace std;
const double raznitsa = 3.6;
double funkVvoda ()
{
    double zn_kmh;
    cout << " VVedite skorost v km/h: ";
    cin >> zn_kmh;
    return zn_kmh;
}
double funkRascheta ( double kmh)
{
    double rez;
    rez = kmh / raznitsa ;
    return rez;
}
void funkVivoda ( double mc)
{
    cout << " Skorost v m/c: " << mc;
}
int main ()
{
    double kmh;
    double mc;
    kmh = funkVvoda() ;
    mc = funkRascheta ( kmh );
   funkVivoda ( mc);
}
