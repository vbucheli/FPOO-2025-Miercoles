// Drogueria.h
// Clase que representa la droguería, gestionando productos, categorías y clientes.
// Responsabilidades:
// - Registrar y gestionar productos y categorías en la droguería.
// - Permitir la búsqueda de productos por nombre, precio o categoría.
// - Verificar el stock mínimo de los productos y notificar al propietario.
// Colaboraciones:
// - Colabora con la clase Producto para gestionar los productos disponibles.
// - Colabora con la clase Categoria para gestionar las categorías de los productos.
// - Colabora con la clase Cliente para gestionar clientes y realizar búsquedas de productos.
// Autor:Victor Buchlei
// mail:victor.bucheli@correounivalle.edu.co


#ifndef DROGUERIA_H
#define DROGUERIA_H

#include <vector>
#include <memory>
#include "Producto.h"
#include "Categoria.h"
#include "Cliente.h"

class Drogueria {
private:
    std::vector<Producto> productos;  // Productos disponibles en la droguería
    std::vector<Cliente> clientes;  // Clientes registrados

public:
    Drogueria();

    void registrarProducto(Producto auxProducto);

    std::vector<Producto> buscarPorNombre(std::string nombre);
    std::vector<Producto> buscarPorPrecio(double precio);

    void verificarStockMinimo(int stockMinimo);
};

#endif  // DROGUERIA_H
