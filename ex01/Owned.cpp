#include "Owned.hpp"
#include <iostream>

Owned::Owned() {
	m_e = new Enemy();
}

Owned::~Owned() {
	delete m_e;
}

Enemy* Owned::operator->() {
	return m_e;
}