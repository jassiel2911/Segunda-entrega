void CapturarM(){
	int mat1[30][30], mat2[30][30];
	int x,y,filas,columnas;
	
	printf("Digite el numero de filas de la matriz: ");
	scanf("%d",&filas);
	printf("Digite el numero de columnas de la matriz: ");
	scanf("%d",&columnas);
	
	printf("\n\t**Introduzca primera matriz**\n\n");
	for(x=0;x<filas;x++){
		for(y=0;y<columnas;y++){
		printf("Captura 1 [%d][%d]: ",x+1,y+1);
		scanf("%d",&mat1[x][y]);
		}
	}
	printf("\n\n");
	
	printf("\n\t**Introduzca segunda matriz**\n\n");
	for(x=0;x<filas;x++){
		for(y=0;y<columnas;y++){
		printf("Captura 2[%d][%d]: ",x+1,y+1);
			scanf("%d",&mat2[x][y]);
		}
	}

}

void sumar(int a[30][30],int b[30][30],int filas, int columnas){
	int suma[filas][columnas],x,y;
	for(x=0;x<filas;x++){
		for(y=0;y<columnas;y++){
			suma[x][y] = a[x][y] + b[x][y]; 
		}
	}
	
	for(x=0;x<filas;x++){
		for(y=0;y<columnas;y++){
			printf("%d ",suma[x][y]);
		}
		printf("\n");
	}
}

void Resultado(){
	int mat1[30][30], mat2[30][30];
	int filas, columnas;
	printf("\nSuma: \n");
	sumar(mat1,mat2,filas,columnas);
}
