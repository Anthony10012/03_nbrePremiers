/*
PSEUDO-CODE :
   -------------
    FAIRE
    FAIRE
    Afficher "Entrer une valeur [2-1000] : "
    Saisir valeur_limite
    Vider le buffer
    TANT QUE valeur_limite < 2 OU valeur_limite > 1000

      Afficher "Voici la liste des nombres premiers"
      
      POUR nb_premier de 2 à valeur_limite FAIRE
         diviseur <- 2
         TANT QUE diviseur < nb_premier ET nb_premier % diviseur != 0 FAIRE
            diviseur <- diviseur + 1
         FIN TANT QUE
         
         SI diviseur == nb_premier ALORS
            Afficher nb_premier avec setw(10)
            compteur_colonne <- compteur_colonne + 1
            SI compteur_colonne == n_col ALORS
               Aller à la ligne
               compteur_colonne <- 0
            FIN SI
         FIN SI
      FIN POUR
      Aller à la ligne

      FAIRE
         Afficher "Voulez-vous recommencer [O/N] : "
         Saisir menu
         Vider le buffer
      TANT QUE menu != 'O' ET menu != 'N'

    TANT QUE menu == 'O'
    Afficher "Fin de programme"
*/