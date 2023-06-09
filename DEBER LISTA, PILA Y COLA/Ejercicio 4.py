#NOMBRE:PAOLA SANGUCHO   NRC:989
#Implementar una cola utilizando una lista

class Cola:
    def __init__(self):
        self.items = []

    def esta_vacia(self):
        return len(self.items) == 0

    def agregar(self, item):
        self.items.append(item)

    def eliminar(self):
        if self.esta_vacia():
            return None
        return self.items.pop(0)

    def tamaño(self):
        return len(self.items)
cola = Cola()
print(cola.esta_vacia())  # True

cola.agregar(1)
cola.agregar(2)
cola.agregar(3)
print(cola.tamaño())  # 3

print(cola.eliminar())  # 1
print(cola.eliminar())  # 2

print(cola.tamaño())  # 1
print(cola.esta_vacia())  # False
