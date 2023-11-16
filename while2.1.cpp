
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int registro()
	{   
	    char arquivo [40];
		 char cpf [40];
		 char nome [40]; 
		 char sobrenome [40];
		 char cargo [40];
		  
		printf ("Digite o CPF a ser cadastrado: \n\n");
        scanf ("%s",cpf);
        
        strcpy (arquivo,cpf);
        
        FILE *file;   /////cria arquivo no banco de dados
        file = fopen(arquivo,"w");    ////// cria o arquivo e abre // "W" de write
        fprintf(file,cpf);     ////// salvo o valor do arquivo
        fclose(file);           ////fecha o arquivo
        
        file = fopen (arquivo,"a");  ///
        fprintf (file, ",");
        fclose (file);
        
        printf ("Digite o nome a ser cadastrado : \n\n");
        scanf("%s" , nome);
        
        file = fopen (arquivo , "a");   /// "a" de atualização 
        fprintf (file,nome);
        fclose (file);
        
        file = fopen (arquivo,"a");  ///
        fprintf (file,",");
        fclose (file);
        
        printf ("Digite o sobrenome a ser cadastrado: \n\n");
        scanf ("%s",sobrenome);
        
        file = fopen (arquivo,"a");
        fprintf (file,sobrenome);
        fclose (file);
		
		file = fopen (arquivo,"a");
        fprintf (file ,",");
        fclose (file);
        
        
        
        
        
        
        printf ("Digite o cargo a ser cadastrado \n\n");
        scanf ("%s",cargo);
        
        file = fopen (arquivo , "a");
        fprintf(file ,cargo);
        fclose (file);
        
        system ("pause");
        
        
        
    }   
int consulta()
	{
		setlocale(LC_ALL, "Portuguese");
		
		char cpf [40];
		char conteudo [200];
		
		printf ("Digite o CPF a ser consultado \n\n");
		scanf  ("%s",cpf);
		
		FILE *file;
		file = fopen (cpf,"r");   /// "r" de read , ler 
		
		if (file == NULL) 
		{
		 printf ("Não foi possivel abrir o arquivo, Não localizado \n\n" );  
		}
		
		while (fgets(conteudo ,200 , file) != NULL)
		{
		  printf ("\nEssas são as informações do usuario:  ");
		  printf ("%s",conteudo);
		  printf ("\n\n");
		  
		} 
		system ("pause");
			
		
		
		
		
	}

int deletar()
	{
		
		char cpf [40];
		
		printf ("Digite o CPF a ser deletado ! \n\n");	
		scanf ("%s",cpf);
		
		remove (cpf);
		
		FILE *file;   
		file = fopen  (cpf , "r");
		
		if (file == NULL);
		{
			printf ("Usuario não consta no banco de dados \n\n");
		    system ("pause");
		}
	   
	
	}

	
	int main ()
	{
	    int opcao = 0;   //definindo variaveis
	    int laco =1;
	    for (laco=1;laco=1;)
	{
      system ("cls");
   	
   
	setlocale(LC_ALL, "Portuguese");
	printf ("### Cadastro de usuarios ### \n\n");
	printf ( "Escolher categoria do menu: \n\n" );
	printf (  " \t 1 - Registro de nomes \n\n"  );
	printf (  " \t 2 - Consulta de nomes \n\n"  );
	printf (  " \t 3 - Deletar nomes \n\n");
	printf (  " \t 4 - Sair do sistema \n\n ");
    
    scanf ("%d",&opcao);	 ///armazenar escolha do usuario
   
    system ("cls");  ///clean 
    
    switch (opcao)
		{
		       case 1:
			   	   registro();
		        break;
		        
		        case 2: 
		            consulta();
			    break;
	  		    
				case 3: 
			       	deletar();
			    break;   
			    	
				case 4:
					printf ("Obrigado por utilizar o sistema");
				    return 0;
				break;
				
				
				default: 
			        printf ("Está opção não existe ! \n\n ");
		            system ("pause");
			    break;
		}
    


    }

    };

