#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::~Fwoosh()
{

}

 ASpell	*Fwoosh::clone() const
{
	//ASpell	*A = new Fwoosh();
	return (new Fwoosh());
}