#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
	protected:
		std::string _name;
	public:
		Victim(std::string name);
		Victim(const Victim &copy);
		~Victim();
		Victim &operator=(const Victim &copy);

		std::string getName() const;
		virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Victim const &victim);

#endif
