#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		void attack(const std::string& target);
		void guardGate();
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		ScavTrap& operator=(ScavTrap const &src);
		~ScavTrap();
};


#endif