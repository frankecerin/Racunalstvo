#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
string ime;
int godine;
string igra;
ofstream ispis("D:\\Fran_Kecerin\\podaci.txt");
cout<<"Unesite ime igraca: ";
cin>> ime;
cout<<"Unesite godine igraca: ";
cin>> godine;
cout<<"Unesite igru: ";
cin>> igra;
ispis<<"Ime igraca: "<<ime<<endl;
ispis<<"Godine: "<<godine<<endl;
ispis<<"Igra :"<<igra<<endl;
return 0;
}
