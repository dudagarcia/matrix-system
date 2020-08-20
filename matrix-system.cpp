#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
FILE *fp;
int consist (int x[37][20], int max, int min, int chamada, int j)
{
	do
	{
			printf("\tDigite um valor entre %d e %d: ", min, max);
			scanf("%d", &x[chamada][j]);
	}while (x[chamada][j]>max || x[chamada][j]<min);
	if (x[chamada][j]<=max && x[chamada][j]>=min)
		return x[chamada][j];
}
void um (int matriz[37][20], int chamada, FILE *fp)
{
	fp=fopen("arq71b.txt", "w+");
	int j=1;
	int max=0;
	int min=0;
	printf("\n\n\n\t\tRESPONDA ÀS QUESTÕES ABAIXO:\n");
	printf("\n\n\t1-Idade:\n\n");
		min=10;
		max=50;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t2-Gênero\n\n\t(1) Masculino\n\t(2) Feminino\n\n");
		min=1;
		max=2;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t3-Qual seu jogo estilo MOBA favorito?\n\n\t(1) LOL\n\t(2) Dota\n\t(3) Tenho uma vida\n\n");
		min=1;
		max=3;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t4-Humanas, exatas ou biológicas? \n\n\t(1) Humanas\n\t(2) Exatas\n\t(3) Biológicas\n\n");
		min=1;
		max=3;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t5-Qual matéria do técnico você tem mais afinidade? \n\n\t(1) TP\n\t(2) FPD\n\t(3) LIA\n\t(4) Outros \n\n");
		min=1;
		max=4;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t6-Qual seu esporte favorito? \n\n\t(1) Basquete\n\t(2) Futebol\n\t(3) Volêi\n\t(4) Tênis\n\t(5) Outros \n\n");
		min=1;
		max=5;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t7-Qual seu estilo muscial favorito? \n\n\t(1) Rock\n\t(2) Clássico\n\t(3) Funk\n\t(4) Sertanejo\n\t(5) Eletrônica \n\n");
		min=1;
		max=5;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf ("\n\n\n\t8-Qual das cores a seguir mais te agrada? \n\n\t(1) Azul\n\t(2) Preto\n\t(3) Verde\n\t(4) Amarelo \n\n");
		min=1;
		max=4;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t9-Qual o melhor sistema operacional? \n\n\t(1) Windows\n\t(2) Linux\n\t(3) Outros \n\n");
		min=1;
		max=3;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t10-Qual a sua plataforma preferida para jogar? \n\n\t(1) PC\n\t(2) PlayStation\n\t(3) XBOX\n\t(4) Nintendo\n\t(5) Celular \n\n");
		min=1;
		max=5;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t11-Qual a sua marca de celular favorita? \n\n\t(1) Samsung\n\t(2) Nokia\n\t(3) Motorola\n\t(4) Apple\n\t(5) Outros \n\n");
		min=1;
		max=5;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t12-Qual sua rede social preferida? \n\n\t(1) Whatsapp\n\t(2) Facebook\n\t(3) Twitter\n\t(4) Outros \n\n");
		min=1;
		max=4;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t13-Quantos irmãos você tem? \n\n\t(0) Nenhum\n\t(1) Um\n\t(2) Dois\n\t(3) Três\n\t(4) Quatro \n\n");
		min=0;
		max=4;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t14-Qual navegador que você prefere? \n\n\t(1) Google Chrome\n\t(2) Mozilla Firefox\n\t(3) Internet Explorer\n\t(4) Opera\n\t(5) Safari\n\t(6) Outros \n\n");
		min=1;
		max=6;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t15-Quanto você sabia de programação antes de entrar no CTI? \n\n\t(Escala de 1 a 10) \n\n");
		min=1;
		max=10;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t16-Qual cidade você gostaria de visitar? \n\n\t(1) Istambul\n\t(2) Paris\n\t(3) Rio de Janeiro\n\t(4) Miami\n\t(5) Outros \n\n");
		min=1;
		max=5;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t17-Com que frequência você pratica esportes? \n\n\t(1) Todos os dias\n\t(2) De três a quatro vezes por semana\n\t(3) Uma ou duas vezes por semana\n\t(4) Nunca \n\n");
		min=1;
		max=4;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t18-Em qual candidato você votaria nas eleições presidenciais de 2018? \n\n\t(1) Lula\n\t(2) Bolsonaro\n\t(3) Marina Silva\n\t(4) João Dória\n\t(5) Não sei/Outros \n\n");
		min=1;
		max=5;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		j++;
	printf("\n\n\n\t19-Dentre as alternativas abaixo, qual dos aparelhos consome mais energia? \n\n\t(1) Chuveiro elétrico\n\t(2) Ferro de passar\n\t(3) Notebook \n\n");
		min=1;
		max=3;
		matriz[chamada][j]=consist(matriz, max, min, chamada, j);
		
	//SALVAR DADOS NO ARQUIVO
	for(int i=0 ; i<37 ; i++)
	{
		for(int j=0 ; j<20 ; j++)
		{	
			fprintf(fp,"%3d", matriz[i][j]);
		}
		fprintf(fp, "\n");
	}
	fclose(fp);
	printf ("\n\n\n\t\t");
	system ("pause");
}
void eum (int matriz [37][20])
{
	int j=0;
	for (int i=1; i<37; i++	)
	{
		if (matriz[i][10]==1 && matriz[i][9]==1 && matriz[i][4]==2)
			j++;
	}
	printf ("\n\nResultado: %d", j);
	printf ("\n\n");
	system ("pause");
}
void edois (int matriz [37][20])
{
	int j=0;
	for (int i=1; i<37; i++)
	{
		if (matriz [i][2]==1 && matriz [i][4]==2 && matriz [i][5]==1)
			j++;
	}
	printf ("\n\nResultado: %d", j);
	printf ("\n\n");
	system ("pause");
}
void etres (int matriz [37][20])
{
	int j=0;
	for (int i=1; i<37; i++	)
	{
		if (matriz[i][9]==2 && matriz[i][14]==2 )
			j++;
	}
	printf ("\n\nResultado: %d", j);
	printf ("\n\n");
	system ("pause");
}
void equatro (int matriz [37][20])
{
	int j=0;
	for (int i=1; i<37; i++)
	{
		if (matriz [i][2]==1 && matriz [i][6]==2 && matriz [i][4]==2)
			j++;
	}
	printf ("\n\nResultado: %d", j);
	printf ("\n\n");
	system ("pause");
}
void ecinco (int matriz [37][20])
{
	int j=0;
	for (int i=1; i<37; i++	)
	{
		if (matriz[i][2]==2 && matriz[i][7]==3 && matriz[i][9]==1 )
			j++;
	}
	printf ("\n\nResultado: %d", j);
	printf ("\n\n");
	system ("pause");	
}
void eseis (int matriz [37][20])
{
	int j=0;
	for (int i=1; i<37; i++)
	{
		if (matriz[i][2]==2 && matriz[i][4]==2 && matriz[i][5]==2)
			j++;
	}
	printf ("\n\nResultado: %d", j);
	printf ("\n\n");
	system ("pause");
}
void esete (int matriz [37][20])
{
	int j=0;
	for (int i=1; i<37; i++	)
	{
		if (matriz[i][2]==1 && matriz[i][5]==1 && matriz[i][9]==1 )
			j++;
	}
	printf ("\n\nResultado: %d", j);
	printf ("\n\n");
	system ("pause");
}
void eoito (int matriz [37][20])
{
	int j=0;
	for (int i=1; i<37; i++)
	{
		if (matriz[i][9]==2 && matriz[i][5]==3)
			j++;
	}
	printf ("\n\nResultado: %d", j);
	printf ("\n\n");
	system ("pause");
}
void enove (int matriz [37][20])
{
	int j=0;
	for (int i=1; i<37; i++)
	{
		if (matriz[i][2]==2 && matriz[i][7]==4 && matriz[i][16]==4)
			j++;
	}
	printf ("\n\nResultado: %d", j);
	printf ("\n\n");
	system ("pause");
}
void edez (int matriz [37][20])
{
	int j=0;
	for (int i=1; i<37; i++)
	{
		if (matriz[i][16]==4 && matriz[i][14]==1)
			j++;
	}
	printf ("\n\nResultado: %d", j);
	printf ("\n\n");
	system ("pause");
}
void eonze (int matriz [37][20])
{
	int j=0;
	for (int i=1; i<37; i++)
	{
		if (matriz[i][2]==2 && matriz[i][13]==0 && matriz[i][4]==1)
			j++; 
	}
	printf ("\n\nResultado: %d", j);
	printf ("\n\n");
	system ("pause");
}
void edoze (int matriz [37][20])
{
	int j=0;
	for (int i=1; i<37; i++)
	{
		if (matriz[i][2]==1 && matriz[i][9]==2 && matriz[i][4]==2)
			j++;
	}
	printf ("\n\nResultado: %d", j);
	printf ("\n\n");
	system ("pause");
}
void etreze (int matriz [37][20])
{
	int j=0;
	for (int i=1; i<37; i++)
	{
		if (matriz[i][9]==2 && matriz[i][14]==1)
			j++;
	}
	printf ("\n\nResultado: %d", j);
	printf ("\n\n");
	system ("pause");
}
void ecatorze (int matriz [37][20])
{
	int j=0;
	for (int i=1; i<37; i++)
	{
		if (matriz[i][2]==1 && matriz[i][15]>5 && matriz[i][5]==1 || matriz[i][5]==2)
			j++;
	}
	printf ("\n\nResultado: %d", j);
	printf ("\n\n");
	system ("pause");
}
void equinze (int matriz [37][20])
{
	int j=0; 
	for (int i=1; i<37; i++)	
	{
		if (matriz[i][4]==2 && matriz[i][17]==4 && matriz[i][3]==1)
			j++;
	}
	printf ("\n\nResultado: %d", (j*100)/35); //pois pede-se a porcentagem
	printf ("\n\n");
	system ("pause");
}
void edezesseis (int matriz [37][20])
{
	int j=0;
	for (int i=1; i<37; i++)
	{
		if (matriz[i][2]==1 && matriz[i][18]==1)
			j++;
	}
	printf ("\n\nResultado: %d", j);
	printf ("\n\n");
	system ("pause");
}
void edezessete (int matriz [37][20])
{
	int j=0;
	for (int i=1; i<37; i++)
	{
		if (matriz[i][2]==1 && matriz[i][4]==2 && matriz[i][19]==1)
			j++;
	}
	printf ("\n\nResultado: %d", (j*100)/35); //pois pede-se porcentagem
	printf ("\n\n");
	system ("pause");
}
void dois(int matriz[37][20])
{
	system ("cls");
	printf ("\n\n\n\t\tESTATÍSTICAS:\n");
	int a;
	printf ("\n\n1- Quantos machos jogam no PC, preferem Windows e escolheram Exatas?");
	printf ("\n\n2- Quantos meninos são de exatas e preferem TP?");
	printf ("\n\n3- Quantas pessoas preferem o sistema operacional Linux e usam o navegador Mozilla Firefox?");
	printf ("\n\n4- Quantas pessoas são do sexo masculino, jogam futebol e preferem exatas?");
	printf ("\n\n5- Quantas meninas preferem funk e Windows?");
	printf ("\n\n6- Quantas meninas são de exatas e preferem FPD?");
	printf ("\n\n7- Quantos meninos têm mais facilidade em TP e preferem o sistema operacional Windows?");
	printf ("\n\n8- Quantos usuários de Linux têm facilidade em LIA?");
	printf ("\n\n9- Quantas meninas preferem sertanejo e viajariam para Miami?");
	printf ("\n\n10- Quantas pessoas preferem visitar Miami e utilizam o navegador Google Chrome?");
	printf ("\n\n11- Quantas meninas não têm irmãos e são da área de humanas?");
	printf ("\n\n12- Quantos meninos preferem Linux e são de exatas?");
	printf ("\n\n13- Quantas pessoas preferem Linux e Google Chrome?");
	printf ("\n\n14- Quantos meninos preferem TP ou FPD e tinham conhecimento em programação superior a 5 antes de entrar no CTI?");
	printf ("\n\n15- Qual a porcentagem de pessoas que são de exatas, nunca praticam esportes e jogam LOL?");
	printf ("\n\n16- Quantos meninos votariam no Bolsonaro?");
	printf ("\n\n17- Qual a porcentagem de meninos que preferem as Ciências Exatas e pensam que o chuveiro elétrico consome mais energia?");
	char escolha;
	do
	{
		printf ("\n\n\n\t\tDigite a estatística desejada: ");
		scanf ("%d", &a);
		while (a<1 || a>17)
		{
			printf("\n\t\tDigite uma opção válida:  ");
			scanf("%d", &a);
		}
		switch (a)
		{
			case 1: eum (matriz);
					break;
			case 2: edois (matriz);
					break;
			case 3: etres (matriz);
					break;
			case 4: equatro (matriz);
					break;
			case 5: ecinco (matriz);
					break;
			case 6: eseis (matriz);
					break;
			case 7: esete (matriz);
					break;
			case 8: eoito (matriz);
					break;
			case 9: enove (matriz);
					break;
			case 10:edez (matriz);
					break;
			case 11:eonze (matriz);
					break;
			case 12:edoze (matriz);
					break;
			case 13:etreze (matriz);
					break;
			case 14:ecatorze (matriz);
					break;
			case 15:equinze (matriz);
					break;
			case 16:edezesseis (matriz);
					break;
			case 17:edezessete (matriz);
					break;
		}
		fflush (stdin);
		system ("cls");
		printf ("\n\n\n\t\tDeseja consultar outra estatística? (S ou N): ");
		escolha = getche ();
		while (escolha != 'S' && escolha != 's' && escolha != 'N' && escolha != 'n')
		{
			printf ("\n\t\tDigite S ou N: ");
			escolha = getche ();
		}
		if (escolha == 'S' || escolha == 's')
		{
			char b;
			system ("cls");
			printf ("\n\n\n\t\tDeseja consultar as opções de estatísticas? (S ou N): ");
			b = getche ();
			while (b != 'S' && b != 's' && b != 'N' && b != 'n')
			{
				printf ("\n\t\tDigite S ou N: ");
				b = getche ();
			}
			printf ("\n\n\n\t\tESTATÍSTICAS:\n");
			printf ("\n\n1- Quantos machos jogam no PC, preferem Windows e escolheram Exatas?");
			printf ("\n\n2- Quantos meninos são de exatas e preferem TP?");
			printf ("\n\n3- Quantas pessoas preferem o sistema operacional Linux e usam o navegador Mozilla Firefox?");
			printf ("\n\n4- Quantas pessoas são do sexo masculino, jogam futebol e preferem exatas?");
			printf ("\n\n5- Quantas meninas preferem funk e Windows?");
			printf ("\n\n6- Quantas meninas são de exatas e preferem FPD?");
			printf ("\n\n7- Quantos meninos têm mais facilidade em TP e preferem o sistema operacional Windows?");
			printf ("\n\n8- Quantos usuários de Linux têm facilidade em LIA?");
			printf ("\n\n9- Quantas meninas preferem sertanejo e viajariam para Miami?");
			printf ("\n\n10- Quantas pessoas preferem visitar Miami e utilizam o navegador Google Chrome?");
			printf ("\n\n11- Quantas meninas não têm irmãos e são da área de humanas?");
			printf ("\n\n12- Quantos meninos preferem Linux e são de exatas?");
			printf ("\n\n13- Quantas pessoas preferem Linux e Google Chrome?");
			printf ("\n\n14- Quantos meninos preferem TP ou FPD e tinham conhecimento em programação superior a 5 antes de entrar no CTI?");
			printf ("\n\n15- Qual a porcentagem de pessoas que são de exatas, nunca praticam esportes e jogam LOL?");
			printf ("\n\n16- Quantos meninos votariam no Bolsonaro?");
			printf ("\n\n17- Qual a porcentagem de meninos que preferem as Ciências Exatas e pensam que o chuveiro elétrico consome mais energia?");
			printf ("\n\n\t");
			system ("pause");
			system ("cls");
		}
	} while (escolha != 'n' && escolha != 'N');
}
void tres (int matriz [37][20], FILE *fp)
{
	fp=fopen("arq71b.txt", "r");
	printf ("\n\n\n\t\tMATRIZ DOS RESULTADOS:\n\n\n");
	for (int i=0; i<37; i++)
	{
		if (i<10)
			printf ("0%d", i);
		else 
			printf ("%d", i);
		for (int j=0; j<20; j++)
		{
			fscanf(fp, "%d ", &matriz[i][j]);
			fflush(stdin);
			printf("%3d", matriz[i][j]);
		}
		printf("\n");
	}
	printf ("\n\n\n\t\t");
	system ("pause");
	fclose(fp);
}
void quatro (int matriz [37][20])
{
	printf("\n\n\n\t\t\t\t. . .\n\n\n\n\t\t");
	system ("pause");
	system ("cls");
}
main()
{	
	setlocale (LC_ALL, "Portuguese");
	system ("color 70");
	int matriz[37][20];
	char resp;
	
	for (int i=0; i<37; i++)
	{
		for (int j=0; j<20; j++)
		{
			matriz [i][j]=0;
		}
	}
	fp=fopen("arq71b.txt", "r");
	for (int i=0; i<37; i++)
	{
		for (int j=0; j<20; j++)
		{
			fscanf(fp,"%3d ", &matriz[i][j]);
		}
	}
	fclose(fp);
	
	int chamada;
	int opcao;
	do
	{
		system ("cls");
		printf("\n\n\n\t\t\tBEM VINDO\n\n\n\n\t\t");
		system ("pause");
		system ("cls");
		printf("\n\n\n\t\tDigite seu número de chamada: ");
		scanf("%d", &chamada);
		while (chamada < 1 || chamada > 36 || chamada == 32)
		{
			printf ("\n\t\tDigite um número de chamada entre 1 e 36: ");
			scanf ("%d", &chamada);
		}
		do
		{
			system ("cls");
			printf("\n\n\n\t\t\tMENU\n\n\n\t\t1-Acessar dados e salvar arquivo\n\n\t\t2-Selecionar estatísticas\n\n\t\t3-Apresentar respostas cadastradas\n\n\t\t4-Finalizar\n\n\n\n\n\t\t\tEscolha uma das opções acima: ");
			scanf("%d", &opcao);
			while (opcao < 1 || opcao > 4)
			{
				printf ("\n\t\t\tEscolha uma das opções acima (1, 2, 3 ou 4): ");
				scanf ("%d", &opcao);
			}
			system ("cls");
			switch (opcao)
			{
				case 1: um (matriz, chamada, fp);
						break;
				case 2: dois (matriz);
						break;
				case 3: tres (matriz, fp);
						break;
				case 4: quatro (matriz);
						break;
			}
		} while (opcao!=4);
		printf("\n\n\tDeseja cadastrar novo número de chamada? (S ou N): ");
		resp=getche();
		while (resp != 'S' && resp != 's' && resp != 'N' && resp != 'n')
		{
			printf ("\n\n\n\t\tDigite uma opção válida: ");
			resp = getche ();
		}
		if (resp=='n')
		{
			system ("cls");
			printf("\n\n\n\n\t\t\tPROGRAMA FINALIZADO!!!\n\n\n");
			break;
		}
		fp=fopen("arq71b.txt", "w");
		for(int i=0; i<37; i++)
		{
			for (int m=0; m<20; m++)
			{
				fprintf(fp, "%d ", matriz[i][m]);
			}	
			fprintf(fp, "\n");
		}
		fclose(fp);
	}while (resp!='n');

}
