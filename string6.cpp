#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    
string ulaz,zalu;
int duzina;

getline(cin, ulaz);

duzina=ulaz.length();

zalu="";
for(int i=duzina-1;i>=0;i--)
        zalu=zalu+ulaz[i];
if(ulaz==zalu)
              cout<<"Unesena rijec je palindrom."<<endl;
else
              cout<<"Unesena rijec nije palindrom."<<endl;
              
    system("PAUSE");
    return EXIT_SUCCESS;
}
