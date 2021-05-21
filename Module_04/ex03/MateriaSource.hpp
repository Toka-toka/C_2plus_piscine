#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>

class MateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		~MateriaSource();
		MateriaSource &operator=(const MateriaSource &copy);
	private:
};
#endif
