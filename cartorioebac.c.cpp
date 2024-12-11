#include <stdio.h>//biblioteca de comunica??o com o usu?rio
#include <stdlib.h> // biblioteca de aloca??o de espa?o de mem?ria
#include <locale.h> // biblioteca de aloca??o de texto por regi?o
#include <string.h >//biblioteca das strings

int registro() // Respons?vel por cadastrar os usu?rios no sistema
{
	//Inicio cria??o string/variaveis
  char arquivo[40];
  char cpf[40];
  char nome[40];
  char sobrenome [40];
  char cargo [40]; 	
  //Final cria??o string/ vari?veis
  
  printf("Digite seu CPF:"); //coletando info do usu?rio
  scanf("%s",cpf); //%s se refere a string
  
  strcpy(arquivo,cpf);// respons?vel por copiar os valores das strings
  
  FILE *file;// cria o arquivo
  file = fopen(arquivo,"w");//cria o arquivo do tipo write
  fprintf(file,cpf);// salvo o valor da vari?vel
  fclose(file);//fecho o arquivo
  
  file= fopen(arquivo,"a");// cria o arquivo do tipo
  fprintf(file,",");
  fclose(file);
  
  printf("Digite seu nome:");
  scanf("%s",nome);
  
  file = fopen(arquivo,"a");
  fprintf(file,nome);
  fclose(file);
  
  file= fopen(arquivo,"a");
  fprintf(file,",");
  fclose(file);
  
  printf("Digite seu sobrenome:");
  scanf("%s",sobrenome);
  
  file = fopen(arquivo,"a");
  fprintf(file,sobrenome);
  fclose(file);
  
  file= fopen(arquivo,"a");
  fprintf(file,",");
  fclose(file);
  
  printf("Digite seu cargo:");
  scanf("%s",cargo);
  
  file= fopen(arquivo,"a");
  fprintf(file,cargo);
  fclose(file);
  
  system("pause");
  
  
  
 
 	
}

int consultar()
{
	setlocale(LC_ALL, "Portuguese");// Definindo Idioma
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf a ser consultado:");
	scanf("%s",cpf);
	
	FILE *file;
	file=fopen(cpf,"r");
	
	if(file==NULL)
	{
	printf("N?o foi poss?vel abrir o arquivo, n?o localizado.\n");
		
	}
    
    while(fgets(conteudo,200, file) != NULL)
    {
    	printf("\nEssas s?o as informa??es do usu?rio: ");
    	printf("%s",conteudo);
    	printf("\n\n");
	}
	system("pause");
	
}

int deletar()
{
    char cpf[40];
    
    printf("digite o cpf a ser deletado:  ");
    scanf("%s",cpf);
	
	printf("Usuário deletado com sucesso!.\n");
	system("pause");
	
	remove(cpf);
	
	FILE*file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu?rio n?o foi encontrado no sistema!.\n");
		system("pause");
	} ;
	
}

int main()
{
	int opcao=0; // Definindo Vari?veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	system("cls");
	
	
	setlocale(LC_ALL, "Portuguese");// Definindo Idioma
	
	
	printf("### Cart?rio da EBAC ###\n\n");// In?cio do Menu
	printf ("Escolha a op??o desejada do menu:\n\n");
	printf("\t1 - Registrar Nomes\n");
	printf("\t2 - Consultar Nomes\n");
	printf("\t3 - Deletar Nomes\n");
	printf("op??o: ");//Fim do Menu
	
	scanf("%d", &opcao);// armazenando a escolha do usu?rio
	
	
	system("cls"); //respons?vel por limpar a tela
	
	switch(opcao)
	{
		case 1:
		registro ();
		break;
		
		case 2:
		consultar();
		break;
		
		case 3:
    	deletar();
	    break;
	   
	    default:	
    	printf("desculpe,esta opcao est? indisponivel\n");
		system("pause");
		break;
				
	}
	
	  

	  
	  
	  
	  
    }
    
    
    
}
	
	
	
	
    
    

	
	
	
	
