#include "FragTrap.hpp"
#include <iostream>

void FragTrap::highFivesGuys(void)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "FragTrap " << this->_name << " is already dead , can't high five" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " positive high-fives request" << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "The constructor for FragTrap is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "The constructor for FragTrap is called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "The destructor for FragTrap is called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		this->_attackDamage = src._attackDamage;
	}
	std::cout << "FragTrap Copy assignement operator called" << std::endl;
	return *this;
}
