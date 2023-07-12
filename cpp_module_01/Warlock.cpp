#include "Warlock.hpp"

Warlock::Warlock()
{
    this->title = "ND";
    this->name = "ND";
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const Warlock &cpy)
{
    this->name = cpy.name;
    this->title = cpy.title;
}

Warlock::Warlock(std::string n, std::string t)
{
    this->name = n;
    this->title = t;
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock &Warlock::operator=(const Warlock &cpy)
{
    this->name = cpy.name;
    this->title = cpy.title;
    return (*this);
}

std::string const	Warlock::getName() const
{
	return (this->name);
}

std::string const	Warlock::getTitle() const
{
	return (this->title);
}

void	Warlock::setTitle(std::string const &t)
{
	this->title = t;
}

void	Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}