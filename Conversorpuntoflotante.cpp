#include <iostream>
#include <vector>
using namespace std;

int main()
{
    float num;//numero a ingresar
    int entero;
    int aux,auxi;
    float deci;
    int tam1 = 8;
    int tam2 = 23;//cant de bits que deseas mostrar
    int nor = 132;
    int exp = 5;
    int aux2;
    vector<int>arr;
    vector<int>arr2;
    vector<int>arr3;
    cout << "ingrese el numero a convertir: ";
    cin >> num;
    cout << num << endl;

    if (num < 0) {
        entero = num / 1;
        deci = (num - entero)*-1;

        cout << "Parte entera: " << entero << endl;//parte entera
        cout << "Parte decimal: " << deci << endl;//parte decimal

        arr[0] = 1;
        aux = (pow(2, (arr.size() - 1)));
        auxi = aux + entero;
        for (int i = 0; i < tam1 - 1; i++) {
            arr.push_back(auxi % 2);
            auxi /= 2;
        }

        cout << "Binario parte entera: ";
        for (int i = 0; i <= (arr.size() - 1); i++) {
            cout << arr[i];
        }
        cout << endl;

        for (int i = 1; i <= tam2; i++) {
            deci *= 2;
            aux2 = deci;
            cout << deci;
            arr2.push_back(deci / 1);

            if (aux2 == 1) {
                deci -= aux2;
            }
            cout << endl;
        }
        cout << endl;
        cout << "parte decimal: ";
        for (int i = 0; i < (arr2.size() - 1); i++) {
            cout << arr2[i];
        }

        cout << '\n' << endl;

        for (int i = 0; i < (arr.size() - 1); i++) {
            cout << arr[i];
        }
        cout << " . ";
        for (int i = 0; i < (arr2.size() - 1); i++) {
            cout << arr2[i];
        }
    }

    if (num > 0) {
        entero = num / 1;
        deci = num - entero;

        cout << "Parte entera: " << entero << endl;//parte entera
        cout << "Parte decimal: " << deci << endl;//parte decimal

        for (int i = 0; i < tam1 - 1; i++) {
            arr.push_back( entero % 2);
            entero /= 2;
        }
        cout << "Binario parte entera: ";
        for (int i = (arr.size() - 1); i >= 0; i--) {
            cout << arr[i];
        }
        cout << endl;

        for (int i = 1; i <= tam2; i++) {
            deci *= 2;
            aux2 = deci;
            cout << deci;
            arr2.push_back(deci / 1);

            if (aux2 == 1) {
                deci -= aux2;
            }
            cout << endl;
        }
        cout << endl;
        cout << "parte decimal: ";
        for (int i = (arr2.size() - 1); i >=0 ; i--) {
            cout << arr2[i];
        }

        cout << '\n' << endl;

        for (int i = (arr.size() - 1); i >= 0; i--) {
            cout << arr[i];
        }
        cout << " . ";
        for (int i = 0; i < (arr2.size() - 1); i++) {
            cout << arr2[i];
        }
        cout <<'\n' << endl;
        int auxiliar;
        for (int i = 0; i < tam1-1; i++) { 
            auxiliar = exp + nor;
            arr3.push_back(auxiliar % 2);
            auxiliar /= 2;
        } 
        for (int i = 0; i < (arr3.size() - 1); i++) {
            arr[0] = 0;
            cout << arr3[i];
        }
        cout << " ";
        for (int i = (arr2.size() - 1); i >=0 ; i--) {
            cout << arr2[i];
        }
    }
    

}


