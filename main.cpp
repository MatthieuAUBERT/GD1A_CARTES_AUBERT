#include <iostream>
#include <string>
#include "monstre.cpp"

using namespace std;

int main(){


    // Création des classes de monstres
    Monstre Gobelin;
    Monstre Orc ("Orc",4,3,true);

    //Affichage
    Gobelin.Affichage();
    Orc.Affichage();

    Gobelin.Attaque(Orc);
    //Riposte du monstre
    Orc.Attaque(Gobelin);

    //Update
    Gobelin.Affichage();
    Orc.Affichage();

    return 0;
}