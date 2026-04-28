#include "../includes/ClapTrap.hpp"
#include <iostream>

void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead , can't attack" << std::endl;
		return;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " have not enough energy points , so can't attack" << std::endl;
		std::cout << "ClapTrap " << this->_name << " Current energy is " << this->_energyPoints << std::endl;
		return;
	}
	this->_energyPoints -= 1;
	std::cout << "ClapTrap " << this->_name
	<< " attacks " << target
	<< " causing " << _attackDamage
	<< " points of damage" << std::endl;
	std::cout << "ClapTrap "<< this->_name << " Current energy is " << this->_energyPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead , can't repair iself" << std::endl;
		return;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name
		<< " have not enough energy points , so can't repair itself" << std::endl;
		std::cout << "ClapTrap " << this->_name << " Current energy is " << this->_energyPoints<< std::endl;
		return;
	}
	this->_energyPoints -= 1;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name
	<< " repaires itself " << amount
	<< " points , current health = " << this->_hitPoints << std::endl;
	std::cout << "ClapTrap " << this->_name << " Current energy is " << this->_energyPoints<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
		return;
	}
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name
	<< " takes " << amount << " points of damage" << std::endl;
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " die" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name
	<< " have now " << this->_hitPoints << " points of health" << std::endl;
}

ClapTrap::ClapTrap() : _hitPoints(10) , _energyPoints(10) , _attackDamage(0)
{
	std::cout << "The constructor for ClapTrap is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) , _hitPoints(10) , _energyPoints(10) , _attackDamage(0)
{
	std::cout << "The constructor for ClapTrap is called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "The destructor for ClapTrap is called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		this->_attackDamage = src._attackDamage;
	}
	std::cout << "ClapTrap Copy assignement operator called" << std::endl;
	return *this;
}
