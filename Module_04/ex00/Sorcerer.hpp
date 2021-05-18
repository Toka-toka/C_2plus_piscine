#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
	private:
		std::string _name;
		std::string _title;
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer();
		Sorcerer(const Sorcerer &copy);
		~Sorcerer();
		Sorcerer &operator=(const Sorcerer &copy);

		std::string getName() const;
		std::string getTitle() const;

		void polymorph(Victim const &a);
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcer);

#endif
