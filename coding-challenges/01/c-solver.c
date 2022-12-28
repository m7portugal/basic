#include <stdio.h>

int main(){
    double medidaA, medidaB, medidaC, areaQuadrado, areaTriangulo, areaTrapezio;

    printf("Digite a medida A: ");
    scanf("%lf", &medidaA);

	printf("Digite a medida B: ");
    scanf("%lf", &medidaB);

	printf("Digite a medida C: ");
    scanf("%lf", &medidaC);


    areaQuadrado = medidaA * medidaA;
    printf("AREA DO QUADRADO = %.4lf\n", areaQuadrado);

    areaTriangulo = (medidaA * medidaB) / 2;
	printf("AREA DO TRIANGULO = %.4lf\n", areaTriangulo);

    areaTrapezio = ((medidaA + medidaB) * medidaC) / 2;
	printf("AREA DO TRAPEZIO = %.4lf\n", areaTrapezio);

	return 0;
}