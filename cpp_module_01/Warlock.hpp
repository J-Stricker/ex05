#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

class   Warlock
{
    public :
        ~Warlock();
        Warlock(std::string n, std::string t);

        std::string const   getName() const;
		std::string const	getTitle() const;
		void				setTitle(std::string const &t);
		void				introduce() const;


    private :
        std::string 		name;
        std::string 		title;

		Warlock();
        Warlock(const Warlock &cpy);
        Warlock     		&operator=(const Warlock &cpy);
};

#endif