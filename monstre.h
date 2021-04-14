#ifndef DEF_MONSTRE
#define DEF_MONSTRE

#include <iostream>
#include <string>
 
class Monstre
{
    public:
 
    Monstre();
    Monstre(std::string nom, int pv, int degats, bool etat);
    void Affichage();
    void Attaque(Monstre &cible);
    void recevoirDamage(int nbDegats);
    int getDamage() const;
 
    private:
 
    std::string name;
    int hp;
    int att;
    bool currentState;
};
 
#endif