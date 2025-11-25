#include "ScavTrap.hpp"

int main()
{
	// ClapTrap a;
	std::string t = "Oscar";
	// a.attack(t);
	// a.takeDamage(5);
	// a.beRepaired(3);
	ScavTrap l("lScav");
	// ScavTrap m("mScav");
	l.attack(t);
	l.takeDamage(5);
	l.beRepaired(3);
	l.guardGate();

}