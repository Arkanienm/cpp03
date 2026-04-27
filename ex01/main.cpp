#include <iostream>
#include <ostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "ClapTrap Tests" << std::endl;

	ClapTrap clap("test");
	std::cout << std::endl;
	clap.attack("test1");
	std::cout << std::endl;
	clap.takeDamage(5);
	std::cout << std::endl;
	clap.beRepaired(15);
	std::cout << std::endl;

	ClapTrap clap2(clap);
	std::cout << std::endl;
	ClapTrap clap3 = clap2;
	std::cout << std::endl;

	clap2.takeDamage(5);
	std::cout << std::endl;
	clap3.beRepaired(15);
	std::cout << std::endl;

	std::cout << "ScavTrap Tests" << std::endl;

	ScavTrap scav("Scav1");
	std::cout << std::endl;
	scav.attack("scav6");
	std::cout << std::endl;
	scav.takeDamage(5);
	std::cout << std::endl;
	scav.beRepaired(15);
	std::cout << std::endl;

	ScavTrap scav2(scav);
	std::cout << std::endl;
	ScavTrap scav3 = scav2;
	std::cout << std::endl;

	scav3.takeDamage(5);
	std::cout << std::endl;
	scav3.beRepaired(15);
	scav3.guardGate();
	std::cout << std::endl;
}