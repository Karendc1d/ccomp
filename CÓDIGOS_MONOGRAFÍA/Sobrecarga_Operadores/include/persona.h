#ifndef persona_h
#define persona_h

class Persona{
	public:
	  Persona();
	  Persona(const char* n, int ed, int est);
	  Persona(const Persona& otra);

	  ~Persona();

	  char* nombre() const {return nombre_;}
	  int estatura() const {return estatura_;}
	  int edad() const {return edad_;}

	  void estatura(int e) {estatura_ = e;}
	  void edad(int e) {edad_ = e;}
	  void nombre(char* n);

	  Persona& operator =(const Persona& otra);
	  Persona operator +(const Persona& otra);
	  Persona operator +(int n); //p + 4
	  friend Persona operator +(int n, Persona& p); // 4 + p

	  friend std::ostream& operator <<(std::ostream& os, Persona& p);
	  friend std::istream& operator >>(std::istream& is, Persona& p);

	private:
	  char* nombre_;
	  int edad_, estatura_;

};




#endif // PERSONA_H
