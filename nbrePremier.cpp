/*
  ------------------------------------------------------------------------------
  Fichier     : nbre_Premier.cpp
  Auteur(s)   : Anthony Simond
  Date        : 07.10.2026

  But         : identifier tous les nombres premiers compris
                et une valeur choisie par l'utilisateur

  Remarque(s) : les erreurs de saisie ne sont pas vérifiées

  Compilateur : gcc
  ------------------------------------------------------------------------------
*/

#include <iostream>
#include <limits>
using namespace std;


int main() {

    cout << "Ce programme ..." << endl;

    int valeur_limite;
    do {
        cout << "entrer une valeur [2-1000] : ";
        cin >> valeur_limite;
    }while(valeur_limite < 2 || valeur_limite > 1000);


    cout << "Voici la liste des nombres premiers" << endl;

    for (int nb_premier = valeur_limite/1; nb_premier < valeur_limite; ++nb_premier) {
        for (const int n_col = 5; n_col < 5; n_col) {
            cout << nb_premier << n_col << ' ';
        }
        cout << endl;
    }


    char menu;
    do {
        cout << "Voulez-vous recommancer [O/N] : ";
        cin >> menu;
    }while (menu != 'O' && menu != 'N');
    cout << "Fin de programme" << endl;



}

