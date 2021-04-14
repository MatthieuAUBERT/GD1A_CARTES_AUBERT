#include "monstre.cpp"
#include "mage.h"
#include <string>
#include <vector>

using namespace std;

Mage::Mage() {
    listMonstre[0] = "";
    listMonstre[1] = "";
    listMonstre[2] = "";
    listPV[0] = 0;
    listPV[1] = 0;
    listPV[2] = 0;
    listAtt[0] = 0;
    listAtt[1] = 0;
    listAtt[2] = 0;
}

Mage::Mage(std::string nom, int pv) : nameMage(nom), hpMage(pv){
    listMonstre[0] = "";
    listMonstre[1] = "";
    listMonstre[2] = "";
    listPV[0] = 0;
    listPV[1] = 0;
    listPV[2] = 0;
    listAtt[0] = 0;
    listAtt[1] = 0;
    listAtt[2] = 0;
}

void Mage::AfficherMage(){
    cout << nameMage << " : HP = " << hpMage << endl;
    if (hpMage == 0){
        cout << nameMage << " est mort !" << endl;
    }
    else {
        for (int i(0); i<3;i++){
            cout << listMonstre[i] ;
        } 
    }
}

void Mage::Invoquer(){
    string m_name;
    int m_pv;
    int m_att;
    cout << "Nom du monstre : " ;
    cin >> m_name ;

    cout << "Points de vie : " ;
    cin >> m_pv;

    cout << "Points d'attaque : " ;
    cin >> m_att;

    if (listMonstre[0] == ""){
        listMonstre[0] = m_name;
        listPV[0] = m_pv;
        listAtt[0] = m_att;
    }
    else {
        if (listMonstre[1] == ""){
            listMonstre[1] = m_name;
            listPV[1] = m_pv;
            listAtt[1] = m_att;
        }
        else {
            if (listMonstre[2] == ""){
                listMonstre[2] = m_name;
                listPV[2] = m_pv;
                listAtt[2] = m_att;
            }
            else {
                cout << "Trop de monstres sur votre terrain...";
            }
        }
    }
    


}

void Mage::Attaquer(Monstre &Possede){
    int input;
    cout << "Quel monstre attaquera ? (Chiffre à entrer) ";
    cin >> input;
    Monstre Attaquant(listMonstre[input],listPV[input], listAtt[input],true);
    Attaquant.Attaque(Possede);
}

void Mage::AttaqueMage(Mage &cible, int degatsMonstre){
    cible.recevoirDamage(degatsMonstre);
}

void Mage::recevoirDamage(int dommagesPris){
    hpMage -= dommagesPris;

    if (hpMage < 0)
    {
        hpMage = 0;
    }
}
