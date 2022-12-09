#include <stdio.h>
#include <stdlib.h>
/*alterando campos da struct*/
struct ponto {int x; int y};
void imprimePonto(struct ponto p){
    printf("Coordenadas (%d,%d)",p.x,p.y);

}
void alteraPonto(struct ponto p, int x, int y){
    p.x=x;
    p.y=y;
    printf("\nCoordenadas alteradas: (%d,%d)",p.x,p.y);
}
int main()
{
    struct ponto p={1,2};
    int a,b;

    printf("Informe um ponto x: \n");
    scanf("%d",&a);
    printf("Informe um ponto y: \n");
    scanf("%d",&b);

    imprimePonto(p);
    alteraPonto(p,a,b);
    return 0;
}
