#NOMBRE:PAOLA SANGUCHO   NRC:9898
#1. Ejercicio 1: Verificar si una lista está ordenada de forma ascendente.

def esta_ordenada_ascendente(lista):
    lista_ordenada = sorted(lista)
    return lista == lista_ordenada

# Ejemplo de uso
lista1 = [1, 2, 3, 4, 5]
print(esta_ordenada_ascendente(lista1))  # Devuelve True

lista2 = [5, 4, 3, 2, 1]
print(esta_ordenada_ascendente(lista2))  # Devuelve False
