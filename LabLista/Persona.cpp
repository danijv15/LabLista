#include "stdafx.h" 

#include "Persona.h"

Persona::Persona() {

}

Persona::Persona(int id, string nombre) {
	this->id = id;
	this->nombre = nombre;
}

Persona::~Persona() {
}

int Persona::getID() {
	return this->id;
}

void Persona::setID(int id) {
	this->id = id;
}

string Persona::getNombre() {
	return this->nombre;
}

void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}