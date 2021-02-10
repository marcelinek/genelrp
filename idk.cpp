#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char str1[100];
    char str2[100]; 
    int i,j,num,c,a;
    float ctr;
       printf("\n\n Sayilari basamaklarina ayirma :\n");
       printf("---------------------------------------\n");    
 
    printf(" Bir sayi giriniz : ");
    scanf("%d", &num);

 	itoa(num, str1, 10);
    ctr=0;

    ctr=truncf(strlen(str1)%3);
    ctr = ctr + strlen(str1);
   	j=0, i=0;

	if((strlen(str1)%3)==0){	
 		for(i=0; i<=strlen(str1); i++){      
 		
 			str2[j]= str1[i];
 			printf("str2=%s \t str1=%s \t j=%d \t i=%d \n", str2, str1, j, i); //Adımlar.
 			c=i+1;
 			if(str1[i]=='\0'){
 				break;
			 }
			 else{
			 
		 	if((c % 3) == 0){
		 	
 				j++;
		 		str2[j] = '.';
 				
			}
			j++;
		}
	
		}
		str2[j-1]=NULL;
    printf("%s", str2);
    }
    
    else if((strlen(str1)%3)==1){
    	
    	str2[j]= str1[i];
		i++; j++;	
		str2[j] = '.';
		j++;
		for(i=1; i<=strlen(str1); i++){      
 		
 			str2[j]= str1[i];
 			printf("str2=%s \t str1=%s \t j=%d \t i=%d \n", str2, str1, j, i); //Adımlar.
 			c=i+1;
 		if(str1[i]=='\0'){
 				break;
		}
		else{
			 
		 	if(((c-1) % 3) == 0){
		 	
 				j++;
		 		str2[j] = '.';
 				
			}
			j++;
		}
	
		}
		str2[j-1]=NULL;
		printf("%s", str2);
	}
	
   else if((strlen(str1)%3)==2){
    	for(a=0; a<=1;a++){
	    	str2[j]= str1[i];
			i++; j++;	
		}
			str2[j] = '.';
			j++;

		for(i=2; i<=strlen(str1); i++){      
 		
 			str2[j]= str1[i];
 			printf("str2=%s \t str1=%s \t j=%d \t i=%d \n", str2, str1, j, i); //Adımlar.
 			c=i+1;
 		if(str1[i]=='\0'){
 				break;
		}
		else{
			 
		 	if(((c-2) % 3) == 0){
		 	
 				j++;
		 		str2[j] = '.';
 				
			}
			j++;
		}
	
		}
		str2[j-1]=NULL;
		printf("%s", str2);
	}
   return 0;
}
