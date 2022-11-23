
#include<stdio.h>
#include<stdlib.h>
//hash map is crying !!!  n*n
void occurrence(int *tab,int n){
    int occ;
    for (int i=0;i<n;i++){
        occ=0;
        for(int j=0;j<n;j++){
            if(*(tab+j)==*(tab+i))
                occ++;
        }
        printf("%d se repete %d fois\n",*(tab+i),occ);
    }
}

void ex2(){

    int n;
    tailleN(&n);
    int *t=(int*)malloc(sizeof(int)*n);
    remplir(t,n);
    occurrence(t,n);


}
