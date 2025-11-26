#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	std::string t = "Oscar";
	a.attack(t);
	a.takeDamage(5);
	a.beRepaired(3);
}