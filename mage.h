#ifndef DEF_MAGE
#define DEF_MAGE

#include <iostream>
#include <string>
#include "monstre.h"
 
class Mage
{
    public:
 
    Mage();
    Mage(std::string nom, int pv);
    void AfficherMage();
    void Invoquer();
    void Attaquer(Monstre &cible);
    void AttaqueMage(Mage &cible, int degatsMonstre);
    void recevoirDamage(int dommagesPris);
 
    private:
 
    std::string nameMage;
    int hpMage;
    std::string listMonstre[3];
    int listPV[3];
    int listAtt[3];

};
 
#endif