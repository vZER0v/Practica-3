#include "CuentaCorriente.h"
#include <iostream>

CuentaCorriente::CuentaCorriente() : saldo(0.0) {}

CuentaCorriente::CuentaCorriente(const std::string& nom, const std::string& apel, const std::string& dir, const std::string& tel, double sal)
    : nombre(nom), apellidos(apel), direccion(dir), telefono(tel), saldo(sal) {}

// Métodos get y set aquí

void CuentaCorriente::retirarDinero(double cantidad) {
    if (cantidad > 0 && saldo >= cantidad) saldo -= cantidad;
}

void CuentaCorriente::ingresarDinero(double cantidad) {
    if (cantidad > 0) saldo += cantidad;
}

void CuentaCorriente::consultarCuenta() const {
    std::cout << "Nombre: " << nombre << "\nApellidos: " << apellidos << "\nDirección: " << direccion << "\nTeléfono: " << telefono << "\nSaldo: " << saldo << std::endl;
}

bool CuentaCorriente::saldoNegativo() const {
    return saldo < 0;
}
