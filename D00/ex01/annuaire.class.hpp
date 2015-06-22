#ifndef ANNUAIRE_CLASS_H
# define ANNUAIRE_CLASS_H
# include "contact.class.hpp"

class annuaire {

public:

	contact		list[9];
	std::string	buffer;
	int			actual;
	int			i;

	annuaire( void );
	~annuaire( void );

	void		add( void );
	void		search( void );
	void		specsearch( int id );
	std::string extend_search( std::string s);
};

#endi