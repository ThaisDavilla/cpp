#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int a = 5, b = 2;

    int soma = a + b;
    cout << "Soma: " << soma << endl;

    int sub = a - b;
    cout << "Subtacao: " << sub << endl;

    int mult = a * b;
    cout << "Multiplicacao: " << mult << endl;

    int quocdiv = a / b;
    cout << "Quociente da divisao: " << quocdiv << endl;

    int restodiv = a % b;
    cout << "Resto da divisao: " << restodiv << endl;

    float div = (float)a / (float)b;
    cout << "Divisao: " << div << endl;

    float pot = pow(a, b);
    cout << "Potencia: " << pot << endl;

    // incremento e decremento

    cout << " a antigo: " << a << endl;
    // a = a + 1;
    // a += 1;
    //  a ++;
    //  a += 3;

    // a = a - 1;
    // a -= 1;
    // a --;
    // a -= 4;

    a *= 3;

    cout << "a novo: " << a << endl;

    return 0;
}