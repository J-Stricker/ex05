#include "ATarget.hpp"
#include "ASpell.hpp"


ATarget::ATarget()
{
	this->type = "ND";
}

ATarget::~ATarget()
{

}

ATarget::ATarget(std::string t)
{
	this->type = t;
}

ATarget::ATarget(const ATarget &cpy)
{
	this->type = cpy.type;
}

ATarget	&ATarget::operator=(const ATarget &cpy)
{
	this->type = cpy.type;
	return (*this);
}

std::string const	&ATarget::getType() const
{
	return (this->type);
}

void	ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}