#include<stdio.h>
int main(){
	float x[100],y[100],a,s=1,t=1,k=0;
	int n,i,j,d=1;
	printf("Ingresa el numero de valores de la tabla: ");
	scanf("%d",&n);
	printf("\nIngresa los valores respectivos de x & y: \n");
	for(i=0; i<n; i++){
		scanf ("%f",&x[i]);
		scanf("%f",&y[i]);
	}
	printf("\nLa tabla ingresa es:\n\n");
	for(i=0; i<n; i++){
		printf("%0.3f\t%0.3f",x[i],y[i]);
		printf("\n");
	}
	while(d==1){
		printf("\n\nIngresa el valor de x para encontrar su valor en y\n\n\n");
		scanf("%f",&a);
		for(i=0; i<n; i++){
			s=1;
			t=1;
			for(j=0; j<n; j++){
				if(j!=i){
					s=s*(a-x[j]);
					t=t*(x[i]-x[j]);
				}
			}
			k=k+((s/t)*y[i]);
		}
		printf("\nEl valor de y es: %f",k);
		printf("\n\nQuieres continuar?\n\nPresiona 1 para continuar y otra tecla para salir");
		scanf("%d",&d);
	}
	return 0;
}