/* Este é um programa em C que estrutura as informações básicas do jogo 
War, utilizando um vetor de structs. */


#include <stdio.h>
#include <string.h> // Biblioteca para manipular strings.

     // Iniciando a estrutura (struct).2
    struct Territorio{
 
         char nome [30];
 	     char cor [10];
 	     int tropa;
 };
 
    //Função principal (main).
    
         int main (){
	 
 
        struct Territorio territorios [5];
 	    int i;
 	         
 	         
 	        printf("===================================\n");
	 	    printf("Cadastrando os 5 territorios iniciais do mundo.\n");
 		
 		      // Iniciando o Laço (for) Para o Cadastro dos 5 territorios.
         for (i = 0; i < 5; i++){
		 
 	         printf ("---- Cadastro da tropa %d ----\n",i+1);
	 	     printf ("Nome do Territorio:");
 		     fgets (territorios[i].nome, 30,stdin);
            
 		     printf ("\n");
             printf ("Cor do Exercito (ex: Amarelo, Azul):");
 		     fgets(territorios[i].cor, 10,stdin);
             
 		     printf ("Numero de Tropa:");
 		     scanf ("%d",&territorios[i].tropa);
 		     printf ("\n");
 		     fflush (stdin); // Função para limpar o buffer de entrada.
 		
		
 		
	 };
	 	    printf("======================================\n");
	 		printf(" MAPA DO MUNDO - ESTADO ATUAL\n");
	 		printf("======================================\n\n");
	 		
                //Função para exibir os dados cadastrados dos territorios.
	     for (i=0 ; i < 5 ; i++){
	 	   	
	 	   	    printf ("TERRITORIO: %d\n", i+1);
	 	   	    printf("- Nome:%s", territorios[i].nome);
 	   	        printf("- Dominado por:Exercito %s", territorios [i].cor);
	 	   	    printf("- Tropas:%d\n", territorios[i].tropa);
	 	   	
			}
	 		
		  
 	     return 0; // Fim do programa.
 }
 