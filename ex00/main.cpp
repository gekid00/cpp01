#include "Zombie.hpp"

int main(void)
{
	Zombie* heap = newZombie("Bob");
	heap->announce();
	delete heap;
	randomChump("John");
	return 0;
}