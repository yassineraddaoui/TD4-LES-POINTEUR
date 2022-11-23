
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void inverser(int *tab,int n){
    int aux;
    /*for (int i=0;i<n/2;i++){

        aux=*(tab+i);
        *(tab+i)=*(tab+n-i-1);
        *(tab+n-i-1)=aux;

    }*/
    int i=0;
    while(i<n){
        aux = *(tab+i);
        *(tab+i) = *(tab+n-1);
        *(tab+n-1) = aux;
        i++;
        n--;
  }
}

int min(int *tab,int n){
    int min=*tab;
    for(int i=1;i<n;i++)
        if(*(tab+i)<min)
            min=*(tab+i);
    return min;
}
int max(int *tab,int n){
    int max=*tab;
    for(int i=1;i<n;i++)
        if(*(tab+i)>max)
            max=*(tab+i);
    return max;
}
void ex3(){

    int n;
    tailleN(&n);
    int *t=(int)malloc(sizeof(int)*n);
    remplir(t,n);
    inverser(t,n);
    printf("MAX = %d\n",max(t,n));
    printf("MIN = %d\n",min(t,n));
    afficher(t,n);


}
