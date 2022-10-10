#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
	
	/*
		Programa da prova: Cálculo de votos numa eleição
	*/
	
	int num;
	float k1 = 0, k2 = 0, k3 = 0, k4 = 0, k5 = 0, k6 = 0;  //contadores e numero do voto
	int i, j = 5;                               		   //acumuladores de loop
	
	printf("\n****Eleicoes****\n");
	printf("\nDigite o numero do candidato\n");
	printf("\ncandidato 1 - (1)\n");
	printf("\ncandidato 2 - (2)\n");
	printf("\ncandidato 3 - (3)\n");
	printf("\ncandidato 4 - (4)\n");
	printf("\nem brancos - (5)\n");
	printf("\nnulo - (6)\n");
	
	for (i = 1; i <= j; i++) {
	    scanf("%d", &num);                  //leitura do numero
	    switch(num){
		    case 1:
			    k1++;
			    break;
	
		    case 2:
			    k2++;
			    break;
	
		    case 3:
			    k3++;
			    break;
	
		    case 4:
			    k4++;
			    break;
		
		    case 5:
			    k5++;
			    break;
		
		    case 6:
			    k6++;
			    break;
		
		    default:
		        printf("\n numero invalido");
		        break;
	    }                                   //fecha switch case
	}                                       //fecha loop do for
	
	printf("\n o numero de votos do candidato (1)=%f e em porcentagem %f %%\n",k1,((k1/j)*100));
    printf("\n o numero de votos do candidato (2)=%f e em porcentagem %f %%\n",k2,((k2/j)*100));
    printf("\n o numero de votos do candidato (3)=%f e em porcentagem %f %%\n",k3,((k3/j)*100));
    printf("\n o numero de votos do candidato (4)=%f e em porcentagem %f %%\n",k4,((k4/j)*100));
    printf("\n o numero de votos em branco (5)=%f e em porcentagem %f %%\n",k5,((k5/j)*100));
    printf("\n o numero de votos nulo (6)=%f e em porcentagem %f %%\n",k6,((k6/j)*100));

}
