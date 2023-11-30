#ifndef __HYDROS_HPP__
# define __HYDROS_HPP__

# include <iostream>
# include <vector>
# include <iterator>

class Chuveiro {
	float			vazao;
	bool			status;

	public:
		Chuveiro(void);
		~Chuveiro(void);
		void 		setStatus(bool s);
};

class Pia {
	float	vazao;
	bool	status;
	public:
		Pia(void);
		~Pia(void);

		void			setStatus(bool s);
};

class VasoSanitario {
	float	vazao;
	bool	status;
	public:
		VasoSanitario(void);
		~VasoSanitario(void);

		void			setStatus(bool s);
};

class SanitarioPublico {
	public:
		SanitarioPublico(void);
		virtual ~SanitarioPublico(void);

		std::vector<VasoSanitario >			vaso;
		std::vector<Pia >					pia;
		virtual void						setStatus(bool s)=0;
};

class BanheiroPublico : public SanitarioPublico {
	Chuveiro			chuveiro;
	public:
		BanheiroPublico(void);
		~BanheiroPublico(void);

		void						setStatus(bool s);
};

#endif