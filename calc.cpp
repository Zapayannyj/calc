#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char op;
    double a,b;

    cout << "Scegli l'operatore (*, /, -, +, %)";
    cin >> op;
    
    cout << "Inserisci valore di a:";
    cin >> a;
    
    cout << "Inserisci valore di b:";
    cin >> b;
    
    long quoziente = a / b;
    long resto = fmod(a,b);

    switch( op ){
        case '+':
        cout<<a<<"+"<<b<<"="<<(a+b);
        break;
        case '-':
        cout<<a<<"-"<<b<<"="<<(a-b);
        break;
        case '*':
        cout<<a<<"-"<<b<<"="<<(a*b);
        break;
        case '/':
            if( b != 0.0000)
                cout<<a<<"/"<<b<<"="<<(a/b);
            else
                for(int i=0; i<=100; i++){cout<<"*/Armaggedon*"<<endl;};
        break;
        case '%':
            cout << "Quoziente = " << quoziente << endl;
            cout << "Resto = " << resto;
        break;

            
        default:
            cout<<op<<"Hai sbagliato a scegliere l'operatore";
            
            
    }


    return 0;
}




