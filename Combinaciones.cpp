#include <iostream>
#include <limits>
#include <fstream>

using namespace std;

void ImprimirCombinacion(int s[], int tam);
void CapturaSegura(int &n, const char texto[]);

#define MAX_N 25

int main()
{
    ofstream combinaciones;
    combinaciones.open("Combinaciones.txt");


    cout << "Programa que genera combinaciones.\n\n";

    int n;
    do{
        cout << "Introduce el tamanio del arreglo [1,"<< MAX_N <<"]: ";
        cin >> n;
        while(cin.fail()){
            cin.clear();
            cin.ignore(std::numeric_limits<int>::max(),'\n');

            cout << "Introduce el tamanio del arreglo [1,"<< MAX_N <<"]: ";
            cin >> n;
        }


        if(n < 1 || n > MAX_N ){
            cout << "\nError: el tamanio del arreglo tiene que estar entre 1 y" << MAX_N <<".\n";
        }

    }while(n < 1 || n > MAX_N );


    int r;
    do{

        cout << "Introduce el tamanio de la combinacion [0,"<<n<<"]: ";
        cin >> r;
        while(cin.fail()){
            cin.clear();
            cin.ignore(std::numeric_limits<int>::max(),'\n');

            cout << "Introduce el tamanio de la combinacion [0,"<<n<<"]: ";
            cin >> r;
        }

        if(r < 0 || r > n ){
            cout << "\nError: el tamanio de la combinacion tiene que estar entre [0," << n << "].";
        }

    }while(r < 0 || r > n );

    combinaciones << "C(" << n << "," << r << "):" << endl << endl;

    //Crear arreglo
    int *s = new int[r];
    int m,val_max;
    //llenar el arreglo de 1, hasta r.
    for(int i=0; i<r;++i){
        s[i] = i+1;
        combinaciones << s[i] << "  ";
    }
    combinaciones << endl;

    cout << "Calculando combinaciones...";
    while(true){

        m = r-1;
        val_max = n;
        while(m>=0 && s[m] == val_max){
            --m;
            --val_max;
        }
        if(m<0){
            break;
        }
        ++s[m];

        for(int j=m+1;j<r;++j){
            s[j] = s[j-1] + 1;
        }

        for(int i=0;i<r;++i){
            combinaciones << s[i] << "  ";
        }
        combinaciones << endl;
    }

    cout << "\n\nListo!";


    //liberar la memoria
    delete []s;
    cout << endl << endl;

    //cin.get() Para pausar la ejecucion
    cin.get();
    combinaciones.close();
    return 0;
}

//////////////////////////////////////////////////////////
void ImprimirCombinacion(int s[], int tam)
{
    for(int i=0;i<tam;++i){
        cout << s[i] << "  ";
    }

    return;
}






