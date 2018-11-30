#include <stdio.h>

int main()
{
    int iLiczba,iStep,iSumaP,iSumaN,iCounter=1;
    
    scanf("%d",&iLiczba);
    
    do{
     iStep = iLiczba%10;
     iLiczba = iLiczba/10;
     if (iCounter%2!=0){
         iSumaN = iSumaN+iStep;
     }
     else {
         iSumaP = iSumaP+iStep;
     }
     iCounter++;
    }while(iLiczba!=0);
     
    
    if((iSumaP-iSumaN)%11!=0){
        
         printf("Liczba NIE jest podzielna przez 11");
    }else{
         printf("Liczba jest podzielna przez 11");
    }
    return 0;
}
