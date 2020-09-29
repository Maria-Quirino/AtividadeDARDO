#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
 setlocale(LC_ALL, "Portuguese");
 int x,y;
    printf("REGRAS:\n");
    printf("Você deve digitar as coordenadas, e o dardo será lançado\n");
    printf("Se o dardo cair no circulo de externo, você maracará 1 ponto\n");
    printf("Se o dardo cair no circulo do meio, você marcará 5 pontos\n");
    printf("Se o dardo cair no ponto central, você marcará 10 pontos\n");
    printf("Caso o dardo caia fora do alvo, você marcará 0 pontos\n");
    printf("Digite a coordenada x, para que o dardo seja lançado:\n ");
    scanf("%d",&x);
    printf("Digite a coordenada y, para que o dardo seja lançado:\n ");
    scanf("%d",&y);
    if ((x>10 || x>-10) && (y>10 || y<-10))
    {printf("você marcou um total de 0 pontos\n");}
        else if ((x<=1 && x>=-1)&& (y<=1 && y>=-1))
    {printf("PARABÉNS!!!você marcou um total de 10 pontos\n");}
        else if ((x<=5 && x>=-5) && (y<=5 && y>=-5))
    {printf("PARABÉNS!!!você marcou um total de 05 pontos\n");}
        else if((x<=10 && x>=-10) && (y<=10 && y>=-10))
    {printf("PARABÉNS!!!você marcou um total de 1 ponto\n");}
    return 0;

}
