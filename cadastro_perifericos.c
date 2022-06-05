#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#define CAD 100


	
int main()
{
		system("Color 0C");
		setlocale(LC_ALL,"Portuguese");
		
		
		struct cadastro_produtos 
		{
			char nome1[100],marca[100],valor[100];
		}
	CAD_PRO[CAD]; //variavel da struct cadastro_produtos.
	
	
	
		int cod1,cod2,senha;
		char nome[50];
		int i, cad;

			
			
		printf("\t\t-----------------------------------------------\n");
		printf("\t\t\tSISTEMA DE CADASTROS DE PRODUTOS\n");
		printf("\t\t-----------------------------------------------\n");
		printf("\n\n");
		printf("Faça login para acessar as opções!\n");
		printf("\n\n");
		
		inicio:
		printf("Digite o seu usuário: ");
		fflush(stdin);
		scanf("%s",&nome);
		printf("Digite a senha de acesso: ");
		scanf("%i",&senha);
	meio:
		while(cod1!=4){
			
			switch(senha){
			case 123:
			system("cls");
			system("Color F5");
			printf("\tSeja bem vindo, %s \n",nome);
			printf("\n");
			printf("--------------------------------\n");
			printf("1-	 cadastrar produtos\n");
			printf("2- 	 Produtos cadastrados\n");
			printf("3- 	 Modificar cadastro\n");
			printf("4- 	 Sair \n");
			printf("---------------------------------\n");
			printf("Digite o código que desejar: ");
			scanf("%i",&cod1);		
			break;
			
				
	}
	

		
		switch(cod1){
		
		case 1 :
		
			system("cls");
			printf("Quantos cadastros deseja fazer?: ");
			scanf("%d",&cad);
			
			for(i=1;i<=cad;i++){
				
			printf("\t\t Cadastro número: %d\n",i);
				
			printf("Nome do produto: ");
			fflush(stdin);
			gets(CAD_PRO [i].nome1);
			
			printf("Marca do produto: ");
			fflush(stdin);
			scanf("%s",CAD_PRO [i].marca);
			
			printf("Valor do produto: ");
			fflush(stdin);
			scanf("%s",CAD_PRO [i].valor);
			
			
			
			printf("\n\n");
			system("pause");
			system("cls");
			
		}
		break;
	
			case 2 :
			
			for(i=1;i<=cad;i++){
				system("cls");
				printf("\t\tPRODUTO: %d\n",i);
				printf("--------------------------------------\n");
				printf("Nome:------- %s\n",CAD_PRO [i].nome1);
				printf("Valor:------ %s\n",CAD_PRO [i].valor);
				printf("Marca:------ %s\n",CAD_PRO [i].marca);
				system("pause");
		}
		break;
		
			case 3:
				
				system("cls");
				
					for(i=1;i<=cad;i++){
						
						printf("\t\t Alterar cadastros!\n");
						printf("\n\n");
						
						printf("1- Nome do produto\n");
						printf("2- Marca do produto\n");
						printf("3- Valor do produto\n");
						printf("\n\n");
						printf("Digite o código desejado: ");
						scanf("%d",&cod2);
			
			
			
		
		switch(cod2){
			case 1:
				for(i=1;i<=cad;i++){
					system("cls");
					printf("Cadastro %d\n",i);
					printf("Alterar nome do Produto: ");
					scanf("%s",CAD_PRO [i].nome1);
					printf("Nome do produto %d alterado para:--- %s\n",i,CAD_PRO [i].nome1);
					system("pause");
				}
				break;
				
			case 2:
				for(i=1;i<=cad;i++){
					system("cls");
					printf("Cadastro %d\n",i);
					printf("Alterar marca do Produto: ");
					scanf("%s",CAD_PRO[i].marca);
					printf("Marca do produto %d alterado para:--- %s\n",i,CAD_PRO [i].marca);
					system("pause");
				}
				break;
			
			case 3:
				for(i=1;i<=cad;i++){
					system("cls");
					printf("Cadastro %d\n",i);
					printf("Alterar valor do Produto: ");
					scanf("%s",CAD_PRO[i].valor);
					printf("Valor do produto %d alterado para:--- %s\n",i,CAD_PRO [i].valor);
					system("pause");
				}
				break;
			  }
			  
			}
			break;	
			
				
		}	
	}				
	
		system("pause");
		return 0;
		}

