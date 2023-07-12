#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell()
{
}

ASpell::~ASpell()
{

}

ASpell::ASpell(const ASpell &cpy)
{
	this->name = cpy.name;
	this->effects = cpy.effects;
}

ASpell::ASpell(std::string n, std::string e)
{
	this->name = n;
	this->effects = e;
}

ASpell	&ASpell::operator=(const ASpell &cpy)
{
	this->name = cpy.name;
	this->effects = cpy.effects;
	return (*this);
}

std::string const	&ASpell::getName() const
{
	return (this->name);
}

std::string const	&ASpell::getEffects() const
{
	return (this->effects);
}

void	ASpell::launch(ATarget const &targ) const
{
	targ.getHitBySpell(*this);
}