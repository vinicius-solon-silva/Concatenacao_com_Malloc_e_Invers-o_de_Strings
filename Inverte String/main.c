#include <stdio.h>
#include <string.h>

// PROGRAMA INCOMPLETO

int main(void) {
  
  int i, tam, aux;
  char st[80], ultima, primeira;

  printf("\nEscreva uma String: ");
  fgets(st, 80, stdin);
    
  tam = (strlen(st))-2;
  aux = tam;

  printf("\nString inversa: ");
  
  if(tam%2==0){

    tam = tam/2;

    for(i=0; i<tam; i++){
    ultima = st[aux];
    primeira = st[i];
    st[i] = ultima;
    st[aux] = primeira;
    aux--;
    }
  }else{

    tam = (tam/2)+1;

    for(i=0; i<tam; i++){
    ultima = st[aux];
    primeira = st[i];
    st[i] = ultima;
    st[aux] = primeira;
    aux--;
    }
  }
  printf("%s", st);

  return 0;
}