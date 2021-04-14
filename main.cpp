#include <iostream>
#include <string>
#include "mage.cpp"

using namespace std;

int main(){

    Mage Joueur1 ("Mori", 12);
    Mage Joueur2 ("Bertham", 14);

    //Affichage
    Joueur1.AfficherMage();
    Joueur2.AfficherMage();

    //Invocation
    cout << "Le joueur 1 invoque ! " << endl;
    Joueur1.Invoquer();
    Joueur1.AfficherMage();
    cout << "Le joueur 2 invoque ! " << endl;
    Joueur2.Invoquer();
    Joueur2.AfficherMage();

    //Attaque
    cout << "Le joueur 1 attaque directement ! " << endl;
    Joueur1.AttaqueMage(Joueur2,2);
    Joueur2.AfficherMage();

    cout << "Le joueur 2 attaque un monstre ! " << endl;
    //Joueur2.Attaquer();

    return 0;
}