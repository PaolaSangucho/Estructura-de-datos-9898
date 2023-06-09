#NOMBRE:PAOLA SANGUCHO   NRC:989
#Verificar si una palabra es un palindromo utilizando pila
class Pila:
    def __init__(self):
        self.items = []

    def esta_vacia(self):
        return len(self.items) == 0

    def apilar(self, item):
        self.items.append(item)

    def desapilar(self):
        if not self.esta_vacia():
            return self.items.pop()
        return None

def es_palindromo(palabra):
    pila = Pila()

    for letra in palabra:
        pila.apilar(letra)

    palabra_invertida = ""
    while not pila.esta_vacia():
        palabra_invertida += pila.desapilar()

    return palabra == palabra_invertida


# Ejemplo de uso
palabra = "reconocer"
if es_palindromo(palabra):
    print(f"{palabra} es un palíndromo")
else:
    print(f"{palabra} no es un palíndromo")
