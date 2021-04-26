//METODOS DE ORDENAMIENTOS CON SUS DIAGRAMAS DE FLUJO DENTRO DE LA CARPETA
#include <iostream>
using namespace std;
int CUI[]={2,3,8,4,1,1,1,7,6,1,4,0,6};
int CUI1[]={3,0,8,3,6,6,0,3,4,1,4,0,6};
int CUI2[]={2,1,9,1,8,6,1,3,8,1,4,0,6};
int i,j,aux,minimo,sw,salto,bandera,x,tem,n=13;

int main(){
//Este es el Algoritmo del ordenamiento por seleccion------------------------------------------------
for(i=0;i<13;i++){
    minimo=i;
    for(j=i+1;j<13;j++){
        if(CUI[j]<CUI[minimo]){
            minimo=j;
        }
    }
    aux=CUI[i];
    CUI[i]=CUI[minimo];
    CUI[minimo]=aux;
}
cout<<"El ORDENAMIENTO POR SELECCION de forma ascendente es: \n";
for(int i=0;i<13;i++){
    cout<<CUI[i]<<" ";
}
//Este es el Algoritmo del ordenamiento por inserción------------------------------------------------
for(i=0;i<13;i++){
    aux=CUI1[i];
    j=i-1;
    sw=0;
    while(sw==0&&j>=0){
        if(aux<CUI1[j]){
            CUI1[j+1]=CUI1[j];
            j=j-1;
        }else{
            sw=1;
        }
    }
        CUI1[j+1]=aux;
}
cout<<"\nEL ORDENAMIENTO POR INSERCION de forma ascendente es: \n";
for(int i=0;i<13;i++){
    cout<<CUI1[i]<<" ";
}
//Este es el algoritmo del ordenamiento de Shell--------------------------------------------------
  for(i=0;i<n;i++){
      salto=13+1;//tamaño del vector + una unidad
      while(salto>1){
          salto=salto/2;
          bandera=1;
          while(bandera==1){
              bandera=0;
              i=0;
              while((i+salto)<n){
                  if(CUI2[i]>CUI2[i+salto]){
                      aux=CUI2[i];
                      CUI2[i]=CUI2[i+salto];
                      CUI2[i+salto]=aux;
                      bandera=1;
                  };
                  i++;
              };
          };
      };
  };
cout<<"\nEL ORDENAMIENTO POR SHELL de forma ascendente es: \n";
for(int i=0;i<13;i++){
    cout<<CUI2[i]<<" ";
}
return 0;
}