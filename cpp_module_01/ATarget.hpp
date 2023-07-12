#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>

class	ASpell;

class	ATarget
{
	public :
		ATarget();
		~ATarget();
		ATarget(const ATarget &cpy);
		ATarget(std::string t);

		ATarget				&operator=(const ATarget &cpy);
		std::string const	&getType() const;
		virtual ASpell		*clone() = 0;
		void				getHitBySpell(const ASpell &spell) const;

	private :
		std::string			type;
};

#endif