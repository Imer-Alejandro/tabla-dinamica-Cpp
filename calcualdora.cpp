#include <iostream>
using namespace std;



int main() {
    int numero;
    cout<<"ingrese el numero que se desea saber su tabla de multiplicar:"<<endl;
    cin>>numero;
    for(int i=1;i<=12;i++){
        cout<< numero<<" x "<< i <<" = "<<numero * i<<endl;
    }

    system("pause"); 
}
