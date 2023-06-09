# Crear una lista vacía para almacenar los nombres
nombres = []

# Obtener la cantidad de nombres que se ingresarán
num_nombres = int(input("Ingrese la cantidad de nombres: "))

# Pedir al usuario que ingrese los nombres y agregarlos a la lista
for i in range(num_nombres):
    nombre = input("Ingrese un nombre: ")
    nombres.append(nombre)

# Ordenar la lista de nombres alfabéticamente
nombres.sort()

# Mostrar los nombres en orden alfabético
print("Nombres en orden alfabético:")
for nombre in nombres:
    print(nombre)
