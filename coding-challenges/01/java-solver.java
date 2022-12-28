
import java.util.Locale;
import java.util.Scanner;

public class medidas {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double medidaA, medidaB, medidaC, areaQuadrado, areaTriangulo, areaTrapezio;

	    System.out.print("Digite a medida A: ");
	    medidaA = sc.nextDouble();

	    System.out.print("Digite a medida B: ");
	    medidaB = sc.nextDouble();

	    System.out.print("Digite a medida C: ");
	    medidaC = sc.nextDouble();


	    areaQuadrado = medidaA * medidaA;
	    System.out.printf("AREA DO QUADRADO = %.4f\n", areaQuadrado);

	    areaTriangulo = (medidaA * medidaB) / 2;
	    System.out.printf("AREA DO TRIANGULO = %.4f\n", areaTriangulo);

	    areaTrapezio = ((medidaA + medidaB) * medidaC) / 2;
	    System.out.printf("AREA DO TRAPEZIO = %.4f\n", areaTrapezio);

		sc.close();
		
	}
}
