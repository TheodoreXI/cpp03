#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	// ClapTrap a;
	std::string t = "Oscar";
	// a.attack(t);
	// a.takeDamage(5);
	// a.beRepaired(3);
	FragTrap l("lFrag");
	ScavTrap m("mScav");
	l.attack(t);
	l.takeDamage(5);
	l.beRepaired(3);
	l.highFivesGuys();

}