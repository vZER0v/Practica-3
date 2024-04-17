#ifndef CUENTACORRIENTE_H
#define CUENTACORRIENTE_H
#include <string>

class CuentaCorriente {
private:
    std::string nombre;
    std::string apellidos;
    std::string direccion;
    std::string telefono;
    double saldo;

public:
    CuentaCorriente();
    CuentaCorriente(const std::string& nom, const std::string& apel, const std::string& dir, const std::string& tel, double sal);
    void setNombre(const std::string& nom);
    std::string getNombre() const;
    // Implementa los demás get y set aquí
    void retirarDinero(double cantidad);
    void ingresarDinero(double cantidad);
    void consultarCuenta() const;
    bool saldoNegativo() const;
};
#endif
