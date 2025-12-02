#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	Weapon::setType(weapon);
}

Weapon::~Weapon()
{
	std::cout << _type << " has been destroyed" << std::endl;
}

const std::string &Weapon::getType() const
{
	return _type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}