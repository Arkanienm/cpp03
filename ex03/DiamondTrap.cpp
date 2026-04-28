#include "DiamondTrap.hpp"
#include <iostream>

void DiamondTrap::whoAmI()
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "DiamondTrap " << this->_name << " is already dead , can't talk" << std::endl;
		return;
	}
	std::cout << "DiamondTrap name is " << this->_name << " ClapTrap name is " << ClapTrap::_name << std::endl;
}

DiamondTrap::DiamondTrap() : ScavTrap() , FragTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	std::cout << "The constructor for DiamondTrap is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap (name + "_clap_name") , ScavTrap(name) , FragTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	std::cout << "The constructor for DiamondTrap is called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap (src) , ScavTrap(src) , FragTrap(src)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "The destructor for DiamondTrap is called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
		this->_name = src._name;
	}
	std::cout << "DiamondTrap Copy assignement operator called" << std::endl;
	return *this;
}
