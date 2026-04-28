#include <iostream>
#include <ostream>

#include "../includes/ClapTrap.hpp"

int main(void)
{
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
}