//ejercio de las copias
#include <stdio.h>
#include <stdlib.h>


int main()
 {
 	
	char nombre_prof[20], departamento[50], resp;
	int num_seccion, seccion_dicta, cant_copia,i,total_copia=0, total_entrega, hoja, cant_hoja;
	float promedio, mayor=-9999,monto;
	
	printf("\n\t Quiere sacar alguna copia:  ");
    resp=tolower(getch());
	
	while(resp=='s' || resp=='S')
	{
		printf("\ningrese el nombre del prof: ");
		fflush(stdin);
		gets(nombre_prof);
		printf("ingrese el departamento: ");
		gets(departamento);
		printf("ingrese cuantas secciones tiene el prof: ");
		scanf("%d",&seccion_dicta);
	
	
		
		   total_copia=0;
		for(i=0; i<seccion_dicta; i++)
		{
			printf("ingrese el numero de la seccion: ");
		   	scanf("%d",&num_seccion);
	       	printf("ingrese la cantidad de copias: ");
		    scanf("%d",&cant_copia);
		    	total_copia=total_copia+cant_copia;
		    	
		}
		i+=1;
		
		printf("\nla cantidad de copia a entregar al prof: %s es de: %d", nombre_prof, total_copia);
	    
		hoja=total_copia*3;	
		printf("\nla cantidad de hojas blancas entregadas al prof es: %d", hoja);
	
	    fflush(stdin);
		cant_hoja=hoja/seccion_dicta;
		printf("\nla cantidad de hojas blancas entregadas al prof para cada seccion es: %d", cant_hoja);
	
		promedio=total_copia/seccion_dicta;
		printf("\n el promedio de copias de la seccion es: %.2f", promedio);
	    
			if(promedio>mayor)
		 {
		     mayor=promedio;	
		 }
		 
		 monto=((0,150*cant_copia)+(0,070*hoja));
		 fflush(stdin);
		 printf("\n el monto a pagar la reproduccion y por las hojas blancas es de: %.2f ", monto);
		
			printf("\n\n\t\t existe un prof. para sacar mas copias s/n:  ");
          resp=tolower(getch());
        	
	} 
	
	fflush(stdin);
	 printf("\n El prof. %s del departamento de: %s obtuvo el mayor promedio de copias con: %.2f",nombre_prof,departamento, mayor);	

	return 0;
}
