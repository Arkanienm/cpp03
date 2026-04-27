#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		void attack(const std::string& target);
		void highFivesGuys();
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		FragTrap& operator=(FragTrap const &src);
		~FragTrap();
};


#endif