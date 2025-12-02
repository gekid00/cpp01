#include "Zombie.hpp"

int main(void)
{
	int size = 5;
	Zombie* horde = zombieHorde(size, "Zombar");
	for (int i = 0; i < size; i++)
	{
		horde[i].announce();
	}
	delete[] horde;

	return 0;
}