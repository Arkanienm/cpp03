#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap
{
public:
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	ClapTrap& operator=(ClapTrap const &src);
	~ClapTrap();
protected:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
};


#endif