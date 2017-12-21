/*#include <stdio.h>
// VARIABLES GLOBALES OU LOCALES
void echange(int n1,int n2) { //void indique que echange ne renvoie pas de valeur
    int tempval;
    printf("DANS ECHANGE n1 Vaut %d, n2 Vaut %d \n", n1, n2);
    tempval=n1;
    n1=n2;
    n2=tempval;
    printf("après échange, n1 vaut %d, n2 vaut %d \n",n1,n2);

}
int main() {
    int v1,v2;
    printf("saisir 2 nombres \n");
    scanf("%d %d", &v1,&v2);
    echange(v1,v2);
    printf("DANS MAIN v1 vaut %d, v2 vaut %d \n",v1,v2);
}*/

# include <stdio.h>
int v1 = 30;

int echange(int n1, int n2){
    int tempVal;
    printf("Dans echange v1 vaut %d", v1);
    printf("Avant echange, N1 vaut %d, N2 vaut %d\n", n1 ,n2);
    tempVal = n1;
    n1 = n2;
    n2 = tempVal;
    printf("Après echange, N1 vaut %d, N2 vaut %d\n", n1 ,n2);
    return n1 + n2;
}

int main(){
    int v1, v2;
    printf("Veuillez saisir deux  nombres.\n");
    scanf("%d %d",&v1,&v2);
    printf("Dans main v1 vaut %d", v1);
    echange(v1, v2);
    printf("V1 vaut %d, V2 vaut %d\n", v1 ,v2);

}
