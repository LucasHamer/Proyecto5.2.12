#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ternas,n1,n2,n3,orden=0,mult7=0,n1p=0,mayor,n1t;

    ternas=0;

    printf("Ingrese el primer numero: ");
    scanf("%d",&n1);
    fflush(stdin);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&n2);
    fflush(stdin);
    printf("Ingrese el tercer numero: ");
    scanf("%d",&n3);
    fflush(stdin);

    while(ternas!=6)
    {
        if(n1>=n2&&n1>=n3)
        {
            orden=1;
            mayor=n1;
        }
        else if(n2>=n1&&n2>=n3)
        {
            orden=2;
            mayor=n2;
        }
        else if(n3>=n1&&n3>=n2)
        {
            orden=3;
            mayor=n3;
        }
        if(n1%7==0)
        {
            mult7++;
        }
        if(n2%7==0)
        {
            mult7++;
        }
        if(n3%7==0)
        {
            mult7++;
        }
        ternas++;
        printf("El numero mayor es: %d, con orden %d\n",mayor,orden);
        printf("Cantidad de numeros multiplos de 7: %d\n",mult7);
        printf("\n");
        mult7=0;
        n1t=n1t+n1;

        printf("Ingrese el primer numero: ");
        scanf("%d",&n1);
        fflush(stdin);
        printf("Ingrese el segundo numero: ");
        scanf("%d",&n2);
        fflush(stdin);
        printf("Ingrese el tercer numero: ");
        scanf("%d",&n3);
        fflush(stdin);

    }
    n1p=n1t/6;
    printf("El promedio de los primeros numeros de cada terna es: %d",n1p);

    return 0;
}
