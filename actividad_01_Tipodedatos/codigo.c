n");
scanf("%d",&buscar);
printf("el valor que usted introdujo es %d\n",buscar);
encontrado=0;
for(indice=0;indice<16;indice++){
    if(arreglo[indice]==buscar){
        encontrado=1;
    }
}
if(encontrado==1){
    printf("Numero encontrado!");
}else{
printf("Numero no encontrado!\n Lista de numeros: ");
for(indice=0;indice<16;indice++){
printf("%d, ",arreglo[indice]);
}
}
return 0;
}
