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
#include <iomanip>

using namespace std;


int main() {

    char menu;

    do {
        cout << "Ce programme ..." << endl;

        const int n_col = 5;
        int compteur_colonne = 0;
        int valeur_limite;
        do {
            cout << "entrer une valeur [2-1000] : ";
            cin >> valeur_limite;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }while(valeur_limite < 2 || valeur_limite > 1000);


        cout << "Voici la liste des nombres premiers" << endl;


        for (int nb_premier = 2; nb_premier <= valeur_limite; ++nb_premier) {
            int diviseur;
            for (diviseur = 2; diviseur < nb_premier; ++diviseur) {
                if (nb_premier % diviseur == 0) {
                    break;
                }
            }

            if (diviseur == nb_premier) {
                cout << setw(10) << nb_premier;
                compteur_colonne++;

                if (compteur_colonne == n_col) {
                    cout <<  endl;
                    compteur_colonne = 0; // Réinitialisation du compteur
                }
            }
        }
        cout << endl;
        do {
            cout << "Voulez-vous recommancer [O/N] : ";
            cin >> menu;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }while (menu != 'O' && menu != 'N');
    }while (menu == 'O');
    cout << "Fin de programme" << endl;
}

