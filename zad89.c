#include <stdio.h>

// Omoguci korisniku unos gornje granicue u intervalu te program treba ispisat brojeve koji su dijeljivi sa 5.

int main()
{
    int i,n;
	printf("Unesi gornju granicu intervala");       
	scanf("%d",&n);                           
    printf("Djeljivi sa 5 od 0 do n \n");  
    for(i = 5; i <= n; i++)  
    {
        if(i % 5 == 0)
        {
            printf("%d ",i);               
        }
     }
   return 0;
}
