#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"

class Squad: public ISquad
{
	private:
		ISpaceMarine**	_ptr;
		size_t			_count;
	public:
		Squad();
		Squad(const Squad &copy);
		~Squad();
		Squad &operator=(const Squad &copy);

		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);
};
#endif
