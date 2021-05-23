#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>

class Amateia;
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		~MateriaSource();
		MateriaSource &operator=(const MateriaSource &copy);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria** _source;
		size_t	_count;
};
#endif
