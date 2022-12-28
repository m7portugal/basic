#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double medidaA, medidaB, medidaC, areaQuadrado, areaTriangulo, areaTrapezio;

    cout << "Digite a medida A: ";
    cin >> medidaA;

    cout << "Digite a medida B: ";
    cin >> medidaB;

    cout << "Digite a medida C: ";
    cin >> medidaC;

    areaQuadrado = medidaA * medidaA;

    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO = " << areaQuadrado << endl;

    areaTriangulo = (medidaA * medidaB) / 2;

    cout << "AREA DO TRIANGULO = " << areaTriangulo << endl;

    areaTrapezio = ((medidaA + medidaB) * medidaC) / 2;

    cout << "AREA DO TRAPEZIO = " << areaTrapezio << endl;

	return 0;
}