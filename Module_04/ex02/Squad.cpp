#include "Squad.hpp"

Squad::Squad(): ISquad()
{
	_count = 0;
	_ptr = 0;
}

Squad::~Squad()
{
	for (int i = 0 ; i < _count ; i++)
		delete _ptr[i];
	if (_ptr != 0)
		delete [] _ptr;
}

Squad::Squad(const Squad &copy)
{
	_count = 0;
	_ptr = 0;
	*this = copy;
}

Squad	&Squad::operator=(const Squad &copy)
{
	if (_count != 0)
		this->~Squad();
	_count = copy._count;
	if (_count != 0)
	{
		_ptr = new ISpaceMarine * [_count];
		for (int i = 0 ; i < _count ; i++)
		{
			_ptr[i] = copy._ptr[i]->clone();
		}
	}
	return (*this);
}

int Squad::getCount() const
{
	return(_count);
}

ISpaceMarine* Squad::getUnit(int i) const
{
	if (i < 0 || i + 1 > _count)
		return(0);
	return(_ptr[i]);
}

int Squad::push(ISpaceMarine* ptr)
{
	if (ptr == 0)
		return(0);
	ISpaceMarine **copy = new ISpaceMarine * [_count + 1];
	for (int i = 0 ; i < _count ; i++)
	{
		if(ptr == _ptr[i])
		{
			delete [] copy;
			return(0);
		}
		copy[i] = _ptr[i];
	}
	if (_count != 0)
		delete [] _ptr;
	_ptr = copy;
	_ptr[_count] = ptr;
	_count++;
	return(_count);
}