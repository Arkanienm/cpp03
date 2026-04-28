#include <iostream>
#include <ostream>
#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

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

	std::cout << "FragTrap Tests" << std::endl;

	FragTrap frag("Frag1");
	std::cout << std::endl;
	frag.attack("Frag6");
	std::cout << std::endl;
	frag.takeDamage(5);
	std::cout << std::endl;
	frag.beRepaired(15);
	std::cout << std::endl;

	FragTrap frag2(frag);
	std::cout << std::endl;
	FragTrap frag3 = frag2;
	std::cout << std::endl;

	frag3.takeDamage(5);
	std::cout << std::endl;
	frag3.beRepaired(15);
	frag3.highFivesGuys();
	std::cout << std::endl;

	std::cout << "DiamondTrap Tests" << std::endl;

	DiamondTrap diamond("Diamond1");
	std::cout << std::endl;
	diamond.attack("Frag6");
	std::cout << std::endl;
	diamond.takeDamage(5);
	std::cout << std::endl;
	diamond.beRepaired(15);
	std::cout << std::endl;

	DiamondTrap diamond2(diamond);
	std::cout << std::endl;
	DiamondTrap diamond3 = diamond2;
	std::cout << std::endl;

	diamond3.takeDamage(5);
	std::cout << std::endl;
	diamond3.beRepaired(15);
	diamond3.highFivesGuys();
	diamond2.guardGate();
	diamond.whoAmI();
	std::cout << std::endl;
}