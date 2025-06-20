int main() {
    float saldo;
    int opcion;
    float monto;

    do {
        std::cout << "\n === cajero automatico===\n";
        std::cout << "1. ver el saldo\n";
        std::cout << "2. para depositar saldo";
        std::cout << "3.retirar salfo\n";
        std::cout << "4.salir\n";
        std::cout << "elige una opcion: ";
        switch (opcion)
        {
        case 1:
            std::cout << "tu saldo es de " << saldo << "\n";
            break;
        case 2:
            std::cout << "Monto a depositar: \n";
            std::cin >> monto;
            if (monto > 0) {
                saldo += monto;
                std::cout << "deposito exitoso\n";
            }
            else {
                std::cout << "egror\n";
            }
            break;
        case 3:
            std::cout << "monto a retirar: ";
            std::cin >> monto;
            if (monto < 0 && monto <= saldo) {
                std::cout << " retiro exitoso\n";

            }
            else {
                std::cout << "error\n";

            }
            break;
        case 4:
            std::cout << "gacha\n";
            break;


        default:
            std::cout << "invalido\n";

            break;
        }

    }while (opcion != 4);


    return 0;
}
