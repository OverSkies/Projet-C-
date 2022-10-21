#ifndef VOITURE_H
#define VOITURE_H

#include <iostream>
#include <cstring>
#include "modele.h"
#include "option.h"

using namespace std;

class Voiture
{
  friend Voiture operator+(const Option& o, const Voiture& v);

private:
  string nomProjet;
  Modele modele;
  Option *options[5];
public:
  Voiture(void);
  Voiture(string, Modele);

  Voiture(const Voiture&);

  ~Voiture();

  void setNom(string);
  void setModele(Modele);

  string getNom() const;
  Modele getModele() const;
  Option getOption() const;
  float getPrix() const;

  Voiture& operator=(const Voiture&);
  Voiture operator+(const Option& o);
  Voiture operator-(const string s);
  Voiture operator-(const Option& o);
  int operator<(const Voiture&);
  int operator>(const Voiture&);
  int operator==(const Voiture&);

  void AjouteOption(const Option&);
  void RetireOption(string);
  void Affiche();
};

#endif