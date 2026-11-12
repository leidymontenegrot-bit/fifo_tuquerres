#include <iostream>
#include <vector>
#include <string>

class ColaFIFO {
private:
    std::vector<std::string> elementos;


public:
    // Verifica si la cola está vacía
    bool esta_vacia() {
        return elementos.empty();
    }


    // Agrega un elemento al final de la cola
    void encolar(const std::string& item) {
        elementos.push_back(item);
        std::cout << "Encolado: " << item << "\n";
    }


    // Saca y retorna el primer elemento que entró
    std::string desencolar() {
        if (esta_vacia()) {
            return "La cola esta vacia";
        }
        std::string frente = elementos.front();
        // Eliminamos el primer elemento (desplaza el resto)
        elementos.erase(elementos.begin());
        return frente;
    }


    // Muestra el siguiente elemento en salir sin eliminarlo
    std::string ver_frente() {
        if (esta_vacia()) {
            return "La cola esta vacia";
        }
        return elementos.front();
    }
};


int main() {
    ColaFIFO cola;
    
    cola.encolar("Tarea A");
    cola.encolar("Tarea B");
    cola.encolar("Tarea C");


    std::cout << "\nSiguiente en la fila: " << cola.ver_frente() << "\n\n";


    std::cout << "Procesando: " << cola.desencolar() << "\n";
    std::cout << "Procesando: " << cola.desencolar() << "\n";


    std::cout << "\nSiguiente en la fila despues de atender: " << cola.ver_frente() << "\n";


    return 0;
}