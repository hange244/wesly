#include <iostream>

enum Semaforo {
    ROJO,
    AMARILLO,
    VERDE
};

void accionPeaton(Semaforo color) {
    switch (color) {
    case ROJO:
        std::cout << "Luz ROJA: Detente\n";
        break;
    case AMARILLO:
        std::cout << "Luz AMARILLA: Preparate para detenerte\n";
        break;
    case VERDE:
        std::cout << "Luz VERDE: Puedes cruzar\n";
        break;
    default:
        std::cout << "Color no reconocido\n";
    }
}

int main() {
    int opcion;
    std::cout << "Indica el color del semaforo\n";
    std::cout << "0 Rojo\n";
    std::cout << "1 Amarillo\n";
    std::cout << "2 Verde\n";
    std::cout << "Tu opcion: ";
    std::cin >> opcion;

    Semaforo color = static_cast<Semaforo>(opcion);
    accionPeaton(color);

    return 0;
}
