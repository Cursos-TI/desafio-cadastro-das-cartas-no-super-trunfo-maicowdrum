#include <stdio.h>

int main(){
    char estado[50],estado2[50];
    char cod[20],cod2[20];
    char cidade[50],cidade2[50];
    int populacao,pontosturisticos,populacao2,pontosturisticos2;
    float area,area2;
    float pib,pib2;
   // Dados da carta 1 //
   
    printf ("==== A Seguir Adicione os dados da carta 1:=====\n");

    printf ("Digite o estado: \n");
    scanf ("%s", &estado);

    printf ("Digite o Codigo da Carta: \n");
    scanf ("%s", &cod);

    printf ("Digite a Cidade: \n");
    scanf ("%s", &cidade);

    printf ("Digite a População : \n");
    scanf ("%d", &populacao);
   
    printf ("Digite o N° de Pontos Turisticos : \n");
    scanf ("%d", &pontosturisticos);
    
    printf ("Digite a Àrea(em km²) : \n");
    scanf ("%f", &area);

    printf ("Digite o PIB : \n");
    scanf ("%f", &pib);


printf ("==============Carta 1:==============\n");
printf ("Estado: %s\n",estado);
printf ("Codigo: %s\n",cod);
printf ("Nome da Cidade: %s\n",cidade);
printf ("População: %d\n",populacao);
printf ("Àrea: %.2f km²\n",area);
printf ("PIB: %.2f bilhões de reais\n",pib);
printf ("Números de Pontos Turisticos:%d\n",pontosturisticos);

printf("=========== Exibimos Dados da Carta 1: =============\n");



 
printf ("==== A Seguir Adicione os dados da carta 2:=====\n");

 // Dados da carta 2 //
printf ("Digite o estado: \n");
    scanf ("%s", &estado2);

    printf ("Digite o Codigo da Carta: \n");
    scanf ("%s", &cod2);

    printf ("Digite a Cidade: \n");
    scanf ("%s", &cidade2);

    printf ("Digite a População : \n");
    scanf ("%d", &populacao2);
   
    printf ("Digite o N° de Pontos Turisticos : \n");
    scanf ("%d", &pontosturisticos2);
    
    printf ("Digite a Àrea(em km²) : \n");
    scanf ("%f", &area2);

    printf ("Digite o PIB : \n");
    scanf ("%f", &pib2);

printf ("==============Carta 2:================\n");
printf ("Estado: %s\n",estado2);
printf ("Codigo: %s\n",cod2);
printf ("Nome da Cidade: %s\n",cidade2);
printf ("População: %d\n",populacao2);
printf ("Àrea: %.2f km²\n ",area2);
printf ("PIB: %.2f bilhões de reais\n",pib2);
printf ("Números de Pontos Turisticos:%d\n",pontosturisticos2);

printf("=========== Exibimos Dados da Carta 2: =============\n");

return 0;


}
