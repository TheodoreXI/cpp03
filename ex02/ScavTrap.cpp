#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string val)
	:ClapTrap(val, 20, 100, 50)
{
	std::cout << "Constructor of ScavTrap.\n";
}

ScavTrap::ScavTrap(void)
{
	std::cout << "Default Constructor called of ScavTrap.\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called of ScavTrap.\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (hit_point > 0 && energy_point > 0)
	{
		std::cout << "ScavTrap " << name << " attaks " << target << ", causing " << attack_damage << " points of damage!\n";
		energy_point -= 1;
	}
}
void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap in Gate keeper mode.\n";
}