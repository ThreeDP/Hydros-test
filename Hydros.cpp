# include "Hydros.hpp"

Pia::Pia(void) : vazao(20.0), status(false) {
	std::cout << "Construção Pia" << std::endl;
}

Pia::~Pia(void) {
	std::cout << "Destrução Pia" << std::endl;
}

void	Pia::setStatus(bool s) {
	this->status = s;
}

VasoSanitario::VasoSanitario(void) : vazao(25.0), status(false) {
	std::cout << "Construção VasoSanitario" << std::endl;
}

VasoSanitario::~VasoSanitario(void) {
	std::cout << "Destrução VasoSanitario" << std::endl;
}

void	VasoSanitario::setStatus(bool s) {
	this->status = s;
}

Chuveiro::Chuveiro(void) : vazao(40.0), status(false) {
	std::cout << "Construção Chuveiro" << std::endl;
}

Chuveiro::~Chuveiro(void) {
	std::cout << "Destrução Chuveiro" << std::endl;
}

void	Chuveiro::setStatus(bool s) {
	this->status = s;
}

BanheiroPublico::BanheiroPublico(void) : SanitarioPublico(), chuveiro(Chuveiro()) {
	std::cout << "Construção BanheiroPublico" << std::endl;
}

BanheiroPublico::~BanheiroPublico(void) {
	std::cout << "Destrução BanheiroPublico" << std::endl;
}

void	BanheiroPublico::setStatus(bool s) {
	std::vector<Pia>::iterator it = this->pia.begin();
	it->setStatus(s);
}

SanitarioPublico::SanitarioPublico(void) {
	this->pia.push_back(Pia());
	this->vaso.push_back(VasoSanitario());
	std::cout << "Construção SanitarioPublico" << std::endl;
}

SanitarioPublico::~SanitarioPublico(void) {
	std::cout << "Destrução SanitarioPublico" << std::endl;
}
