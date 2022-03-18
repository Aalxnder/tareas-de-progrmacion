/*Arreglos de multiples dimensiones*/

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color E0");
	//dimensiones [1] Regiones [2] ciudad [3] estacion [4] monitores
	int mediciones[5][5][5][5];
	int dim1,dim2,dim3,dim4;
	for (dim1=0;dim1<15;dim1++)
	{
		for(dim2=0;dim2<5;dim2++)
		{
			for(dim3=0;dim3<5;dim3++)
			{
				for(dim4=0;dim4<5;dim4++)
				{
					mediciones[dim1][dim2][dim3][dim4]=0;
					printf("\n");
				}
				printf("\n");
			}
			printf("1\n");
		}
		printf("1\n");
	}
	
	//imprimir la matriz multi
	for (dim1=0;dim1<5;dim1++)
	{
		for(dim2=0;dim2<5;dim2++)
		{
			for(dim3=0;dim3<5;dim3++)
			{
				for(dim4=0;dim4<5;dim4++)
				{
					printf("%d",mediciones[dim1][dim2][dim3][dim4]);
				}
				printf("\n");
			}
			printf("\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}*/


//multi ejemplo de un libro


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("color E0");
	int i,j,k;
	int libro[3][3][3];
	printf("Escriba en el libro\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				scanf("%d",&libro[i][j][k]);	
			}		
		}
	}
	
	printf("imprimiendo los resultados\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",libro[i][j][k]);
			}
			printf("\n");	
		}
		printf("\n");
	}
	
}
