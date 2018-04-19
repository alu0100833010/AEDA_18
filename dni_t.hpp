#pragma once
#include <iostream>
using namespace std;

class dni_t {
    private:
        
    public:
        static int cont;
        int dni;
        char letra;
        
        dni_t();
        ~dni_t();
        int get_dni(void) const;
        void set_dni(int n);
        char get_letra(void) const;
        void set_letra(char n);
        bool operator==(const dni_t& n);
        bool operator!=(const dni_t& n);
        bool operator>(const dni_t& n);
        bool operator<(const dni_t& n);
        bool operator<=(const dni_t& n);
        bool operator>=(const dni_t& n);
        int get_cont(void);
        
        friend ostream& operator<<(ostream& os, dni_t dni_);
        
};