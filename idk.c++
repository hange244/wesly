#include <iostream>
#include <string>

const int MAX_USUARIOS = 3;
const int INTENTOS_MAX = 3;

struct Usuario {
    std::string nombre;
    std::string clave;
};

int main() {
    Usuario usuarios[MAX_USUARIOS] = {
        {"juan", "1234"},
        {"maria", "abcd"},
        {"admin", "admin"}
    };

    std::string entradaNombre, entradaClave;
    bool accesoConcedido = false;

    for (int intento = 1; intento <= INTENTOS_MAX; intento++) {
        std::cout << "\nIntento " << intento << "/" << INTENTOS_MAX << "\n";
        std::cout << "Usuario: ";
        std::getline(std::cin, entradaNombre);
        std::cout << "Clave: ";
        std::getline(std::cin, entradaClave);

        for (int i = 0; i < MAX_USUARIOS; i++) {
            if (entradaNombre == usuarios[i].nombre && entradaClave == usuarios[i].clave) {
                accesoConcedido = true;
                break;
            }
        }

        if (accesoConcedido) {
            break;
        } else {
            std::cout << "Credenciales incorrectas.\n";
        }
    }

    if (accesoConcedido) {
        std::cout << "\n✅ Acceso concedido. Bienvenido, " << entradaNombre << "!\n";
    } else {
        std::cout << "\n❌ Demasiados intentos fallidos. Acceso denegado.\n";
    }

    return 0;
}
