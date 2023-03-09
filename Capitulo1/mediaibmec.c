/*
#include <stdio.h>
//Atribuir valoras as variaveis ap1,ap2,ac e gerando media

main(){
    float ap1,ap2,ac,media; //Atribuindo Variaveis
    ap1=8.5;    //Valores a variaveis
    ap2=7.3;
    ac=5.0;
    media = (0.4*(ap1+ap2)+0.2*ac);  //Atribuindo valor Media 
    printf("%f",media);     //Gera o Valor da Media
}
*/

//Recebendo valores as variaveis ap1,ap2,ac e gerando media
#include <stdio.h>
int main(){
    float ap1,ap2,ac;  //Atribuindo Variaveis

    printf("Digite nota para Ap1:\n");  //Recebendo dados OBS: N PRECISA SER SEPARADO FIZ ISSO APENAS PARA FICAR ORGANIZADO    
    scanf("%f",&ap1);                   

    printf("Digite nota para Ap2:\n");
    scanf("%f",&ap2);

    printf("Digite nota para Ac:\n");
    scanf("%f",&ac);

    float media = (0.4*(ap1+ap2)+0.2*ac);
    printf("A sua media foi de: %2.2f",media); //Gera valor media
    return 0;
}