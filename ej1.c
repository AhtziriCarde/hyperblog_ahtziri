
#include <stdio.h>
int n;
int values;

int mayor=0;
int menor=0;
//-------------------------Funciones--------------------------------------
//
//---------------------------MAin---------------------------------------------
int main(){
	//Verificar que se agrega minimo 5 valores
	do{
		printf("Ingrese la cantidad de valores (minimo 5 maximo 10) : ");
		scanf("%d",&values);
		if(values>10 || values<5){
			printf("------------------------------------------------------\n");
			printf("Por favor elige un numero minimo 5 valores y maximo 10. \n");
			printf("--------------------------------------------------------\n");
		}
	}
	while(values<5 || values>10);  //repetir mientras no se de en el rango establecido

	printf("Se agregaran: %d \n",values);
	//Ya que conocemos el tamaño del arreglo
	int array_n[values];
	int i=0;
	do{
	
		printf("Agrega un numero de 0 al 99: ");
		scanf("%d",&n);
		//-------------Si aprieta x---------------------
		if(n=='x'){
			break;  //se sale de todo
		}	
		//------------si es un número invalido ------------------
		if(n>99|| n<0){
			printf("----------------------------------------------\n");
			printf("¡¡Por favor agrega un numero del 0 al 99!! \n");
			printf("----------------------------------------------\n");
			//regresa a pedir el número
			
		}
		else{
			//agrega al número al arreglo y suma al contador i
			array_n[i]=n;
			i++;
		}
	}
	while(i<values);
        //----------------Mayoooooooooooooooooor-----------------
	
	mayor=array_n[0]; //empieza a comparar con el primer valor de array_n
	for(int j=0; j<values; j++){
		if (array_n[j]>mayor){
			mayor=array_n[j];
		}
	}
	printf("El mayor es: %d \n", mayor);
	
	//-------------------MENOR---------------------------
	menor=array_n[0];//empieza a comparar con el primer valor de array_n
	for(int k=0; k<values; k++){
		if(array_n[k]<menor){
			menor=array_n[k];
		}
	}
	printf("El menor es: %d \n",menor);
	//---------------Mediana------------------
	int media=0;
	int suma=0;
	for(int i=0; i<values; i++ ){
		suma=suma+array_n[i];
	}	
	media=suma/values;
	printf("La media es: %d \n",media);
	
	
	return 0;
}
