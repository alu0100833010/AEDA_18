#include "../include/dni_t.hpp"

dni_t::dni_t(void):
    dni(0),
    letra(' ') {}

dni_t::~dni_t() {}

int dni_t::cont = 0; // Inicializamos la variable estática a 0.

int dni_t::get_dni(void) const {
    return dni;
}

void dni_t::set_dni(int n) {
    dni = n;    
}

char dni_t::get_letra(void) const {
    return letra;
}

void dni_t::set_letra(char n) {
    letra = n;
}
// SOBRECARGA DE OPERADORES //

bool dni_t::operator==(const dni_t& n) {
    cont++;
    return(dni + letra == n.get_dni() + n.get_letra());
}

bool dni_t::operator!=(const dni_t& n) {
    cont++;
    return(dni + letra != n.get_dni() + n.get_letra());
}

bool dni_t::operator>(const dni_t& n) {
    cont++;
    return(dni + letra > n.get_dni() + n.get_letra());
}

bool dni_t::operator<(const dni_t& n) {
    cont++;
    return(dni + letra < n.get_dni() + n.get_letra());
}

bool dni_t::operator<=(const dni_t& n) {
    cont++;
    return(dni + letra <= n.get_dni() + n.get_letra());
}

bool dni_t::operator>=(const dni_t& n) {
    cont++;
    return(dni + letra >= n.get_dni() + n.get_letra());
}

int dni_t::get_cont() {
    return cont;   
}

ostream& operator<<(ostream& os, dni_t dni_) {
    os << dni_.get_dni() << dni_.get_letra();
    return os;
}