using System;
using System.Globalization;

namespace medidas
{
	class Program
	{
		static void Main(string[] args)
		{
			CultureInfo CI = CultureInfo.InvariantCulture;

			double medidaA, medidaB, medidaC, areaQuadrado, areaTriangulo, areaTrapezio;

			Console.Write("Digite a medida A: ");
			medidaA = double.Parse(Console.ReadLine(), CI);

			Console.Write("Digite a medida B: ");
			medidaB = double.Parse(Console.ReadLine(), CI);

			Console.Write("Digite a medida C: ");
			medidaC = double.Parse(Console.ReadLine(), CI);


			areaQuadrado = medidaA * medidaA;
			Console.WriteLine("AREA DO QUADRADO = " + areaQuadrado.ToString("F4", CI));

			areaTriangulo = (medidaA * medidaB) / 2;
			Console.WriteLine("AREA DO TRIANGULO = " + areaTriangulo.ToString("F4", CI));

			areaTrapezio = ((medidaA + medidaB) * medidaC) / 2;
			Console.WriteLine("AREA DO TRAPEZIO = " + areaTrapezio.ToString("F4", CI));
		}
	}
}