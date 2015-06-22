#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <string>

class contact {

public:

	std::string fn;
	std::string ln;
	std::string nk;
	std::string lo;
	std::string pa;
	std::string ea;
	std::string pn;
	std::string bd;
	std::string fm;
	std::string uc;
	std::string ds;

	contact( void );
	~contact( void );

	void	first_name( std::string s);
	void	last_name( std::string s );
	void	nickname( std::string s );
	void	login( std::string s );
	void	postal_address( std::string s );
	void	email_address( std::string s );
	void	phone_number( std::string s );
	void	birthday_date( std::string s );
	void	favorite_meal( std::string s );
	void	underwear_color( std::string s );
	void	darkest_secret( std::string s );
};

#endif