#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>

class	ATarget;

class	ASpell
{
	public :
		ASpell();
		virtual ~ASpell();
		ASpell(const ASpell &cpy);
		ASpell(std::string n, std::string e);

		ASpell				&operator=(const ASpell &cpy);
		std::string const	&getName() const;
		std::string const	&getEffects() const;
		void				launch(ATarget const &targ) const;
		virtual ASpell		*clone() = 0;

	private :
		std::string			name;
		std::string			effects;
};

#endif