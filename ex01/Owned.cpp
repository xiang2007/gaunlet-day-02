#include "Owned.hpp"

Owned::Owned() {
	m_e = new Enemy();
}

Owned::Owned(const Owned& ot) {
	this->m_e = ot.m_e;
}

Owned& Owned::operator=(const Owned& ot) {
	this->m_e = ot.m_e;
	return (*this);
}

Owned::~Owned() {
	delete m_e;
}

Enemy* Owned::e() const {
	return m_e;
}