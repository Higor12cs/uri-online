sal = float(input())

if sal <= 400:
	nsal=sal*1.15
	print("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %", nsal, nsal-sal)