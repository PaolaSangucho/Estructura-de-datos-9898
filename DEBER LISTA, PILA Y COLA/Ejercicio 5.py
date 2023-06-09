#NOMBRE:PAOLA SANGUCHO   NRC:989
#Verificar si una lista es simétrica

def es_simetrica(lista):
    longitud = len(lista)
    for i in range(longitud // 2):
        if lista[i] != lista[longitud - i - 1]:
            return False
    return True

# Ejemplo de uso
lista1 = [1, 2, 3, 2, 1]
lista2 = [1, 2, 3, 4, 5]

if es_simetrica(lista1):
    print("La lista 1 es simétrica")
else:
    print("La lista 1 no es simétrica")

if es_simetrica(lista2):
    print("La lista 2 es simétrica")
else:
    print("La lista 2 no es simétrica")
