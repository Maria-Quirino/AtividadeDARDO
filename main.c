#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
 setlocale(LC_ALL, "Portuguese");
 int x,y;
    printf("REGRAS:\n");
    printf("Voc� deve digitar as coordenadas, e o dardo ser� lan�ado\n");
    printf("Se o dardo cair no circulo de externo, voc� maracar� 1 ponto\n");
    printf("Se o dardo cair no circulo do meio, voc� marcar� 5 pontos\n");
    printf("Se o dardo cair no ponto central, voc� marcar� 10 pontos\n");
    printf("Caso o dardo caia fora do alvo, voc� marcar� 0 pontos\n");
    printf("Digite a coordenada x, para que o dardo seja lan�ado:\n ");
    scanf("%d",&x);
    printf("Digite a coordenada y, para que o dardo seja lan�ado:\n ");
    scanf("%d",&y);
    if ((x>10 || x>-10) && (y>10 || y<-10))
    {printf("voc� marcou um total de 0 pontos\n");}
        else if ((x<=1 && x>=-1)&& (y<=1 && y>=-1))
    {printf("PARAB�NS!!!voc� marcou um total de 10 pontos\n");}
        else if ((x<=5 && x>=-5) && (y<=5 && y>=-5))
    {printf("PARAB�NS!!!voc� marcou um total de 05 pontos\n");}
        else if((x<=10 && x>=-10) && (y<=10 && y>=-10))
    {printf("PARAB�NS!!!voc� marcou um total de 1 ponto\n");}
    return 0;

}
