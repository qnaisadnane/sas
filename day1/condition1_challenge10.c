#include<stdio.h>

int main(){
    int j,m,a;
     printf("entrer une date:");
     scanf(" %d/%d/%d",&j,&m,&a);
     switch(m){
        case 1:
        printf("%d - janvier - %d",j,a);
        break;
        case 2:
        printf("%d - fev - %d",j,a);
        break;
        case 3:
        printf("%d - mars - %d",j,a);
        break;
        case 4:
        printf("%d - avril - %d",j,a);
        break;
        case 5:
        printf("%d - mai - %d",j,a);
        break;
         case 6:
        printf("%d - juin - %d",j,a);
        break;
        case 7:
        printf("%d - juillet - %d",j,a);
        break;
        case 8:
        printf("%d - aout - %d",j,a);
        break;
        case 9:
        printf("%d - sep - %d",j,a);
        break;
        case 10:
        printf("%d - oct - %d",j,a);
        break;
        case 11:
        printf("%d - nov - %d",j,a);
        break;
        case 12:
        printf("%d - dec - %d",j,a);
        break;
        default:
        printf("erreur");
        break;
     }
    
     return 0;
}