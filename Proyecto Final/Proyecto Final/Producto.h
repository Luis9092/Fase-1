#pragma once
#include "Producto.h"
#include <iostream>
using namespace std;

class Producto
{
	// atributos
protected:
string producto, Descripcion, Imagen, FechaI;
int Telefono = 0, idmarca=0, existencia=0;
float pcosto=0, pventa=0;
		 // costructor
protected:
	Producto() {
	}
	Producto(string pro, int idmarc, string desc, string ima,float pcos,float pven,int exis ,string FI) {
		producto = pro;
		idmarca = idmarc;
		Descripcion = desc;
		Imagen = ima;
		pcosto = pcos;
		pventa = pven;
		existencia = exis;
		FechaI = FI;
	}
};

class Marca{
protected: string marca;

protected:
	Marca() {
	}
	Marca(string mar) {
		marca = mar;
	}
};

class Compras
{
	// atributos
protected:
	string fecha_orden, fecha_ingreso;
	int idProveedor = 0;
	
	// costructor
protected:
	Compras() {
	}
	Compras(int idprod, string fechaO,  string ing) {
		idProveedor = idprod;
		fecha_orden = fechaO;
		fecha_ingreso = ing;
	}
};


class Compras_detalle
{
	// atributos
protected:
	int  Id_producto = 0, cantidad=0;
	
	// costructor
protected:
	Compras_detalle() {
	}
	Compras_detalle( int idprod, int cant) {
		Id_producto = idprod;
		cantidad = cant;
	}
};