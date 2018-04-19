/* Cristian Siles
 * 20180416
 */
#include <iostream>
#include <string.h>

using namespace std;


int suma;
int longi=0;
int b=853;
double div;
char letra= 'z';
bool boleano = true;
unsigned valor=59;
string cadena ="universo";

int main(){

suma= b+valor;
longi=cadena.length();

div= (suma/longi)*3.1415;

cout<<div<<" "<<letra<<" "<<boleano;

}
