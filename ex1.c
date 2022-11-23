void tailleN(int *n){
    do{
    printf("TAILLE TABLEAU : ");
    scanf("%d",n);
    }
    while(*n<10|| *n>20);
}
void afficher(int *tab,int n){
    for (int i=0;i<n;i++){
        printf("T[%d] = %d\n",i,*(tab+i));
    }
    printf("-----------\n");
}
void remplir(int *tab,int n){
    for(int i=0;i<n;i++){
        printf("T[%d] = ",i);
        scanf("%d",tab+i);

    }
}

void ex1(){
    int n;
    tailleN(&n);
    int *t=(int*)malloc(sizeof(int)*n);
    remplir(t,n);
    afficher(t,n);


}
