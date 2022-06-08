#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(void)
{
    int ageUtilisateur = 0;

    void Color(int couleurDuTexte,int couleurDeFond);
    
    Color(3, 0);
    printf("Bienvenue, voici les tarifs des place de cinema\n");
    
    printf("\nQuel age avez vous ?");
    scanf("%d", &ageUtilisateur);

    if(ageUtilisateur >= 0 && ageUtilisateur <=18){
        printf("\nVous payer 10 euros\n");
    }

    else if(ageUtilisateur >=19 && ageUtilisateur <=100){
        printf("\nVous payer 20 euros\n");
    }

    return 0;
}
void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}




