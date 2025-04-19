#include <iostream>

#include <locale>


using namespace std;


int main()

{

setlocale(LC_ALL, "portuguese");

int numero, maior;


cout << "Digite 10 números:" << endl;
    for (int i=1; i<=10; i++) {
            cin >> numero;


    if (numero > maior) {
        maior = numero;
    }
}
cout << "O maior  número é " << maior << endl;





return 0;

}
