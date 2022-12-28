medidaA: float; medidaB: float; medidaC: float
areaQuadrado: float; areaTriangulo: float; areaTrapezio: float

medidaA = float(input('Digite a medida A: '))
medidaB = float(input('Digite a medida B: '))
medidaC = float(input('Digite a medida C: '))

areaQuadrado = medidaA ** 2
areaTriangulo = ( medidaA * medidaB ) / 2
areaTrapezio =  ( medidaC * ( medidaA + medidaB ) ) / 2

print(f"AREA DO QUADRADO = {areaQuadrado:.4f}")
print(f"AREA DO TRIANGULO = {areaTriangulo:.4f}")
print(f"AREA DO QUADRADO = {areaTrapezio:.4f}")