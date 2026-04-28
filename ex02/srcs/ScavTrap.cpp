#include "../includes/ScavTrap.hpp"
#include <iostream>

void ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is already dead , can't attack" << std::endl;
		return;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "ScavTrap " << this->_name << " have not enough energy points , so can't attack" << std::endl;
		std::cout << "ScavTrap " << this->_name << " Current energy is " << this->_energyPoints << std::endl;
		return;
	}
	this->_energyPoints -= 1;
	std::cout << "ScavTrap " << this->_name
	<< " attacks " << target
	<< " causing " << _attackDamage
	<< " points of damage" << std::endl;
	std::cout << "ScavTrap "<< this->_name << " Current energy is " << this->_energyPoints << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is already dead , can't guard" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "The constructor for ScavTrap is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "The constructor for ScavTrap is called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "The destructor for ScavTrap is called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		this->_attackDamage = src._attackDamage;
	}
	std::cout << "ScavTrap Copy assignement operator called" << std::endl;
	return *this;
}
