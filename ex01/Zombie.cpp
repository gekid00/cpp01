#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "";
}

Zombie::~Zombie()
{
	std::cout <<  _name << " has been destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for(int i = 0; i < N; i++)
		horde[i].setName(name);
	return horde;
}