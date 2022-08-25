// עליכם לקרוא את כל הקובץ ולייצר בהתאמה את מרחבי הזכרון לפי ההוראות ש ל הקובץ 
//3c4i5c5i8i2c4c5i6c3c8i
//i30 c23
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
    FILE* ex3;
    ex3 = fopen("C:\\Users\\User\\source\\repos\\targilLehagasha\\text3.txt", "r");
    char num;
    char let;
    num = fgetc(ex3) - '0';    // minus 0 convert from num in string to num in int
    let = fgetc(ex3);
    int sum = 0;
    int dum = 0;



    if (ex3 == NULL)
    {
        printf("Error");
    }
    while (let != EOF)
    {
        if (let == 'c')
        {
            sum = sum + num;
        }
        else if (let == 'i')
        {
            dum = dum + num;
        }
        num = fgetc(ex3) - '0';
        let = fgetc(ex3);
    }
    fclose(ex3);
    char* sasha;
    char* sasha2;

    sasha = malloc(sum * sizeof(char));

    sasha2 = sasha;
    int* avi;

    avi= malloc(dum * sizeof(int));
    int* avi2 = avi;
    

    for (int i = 0; i < sum; i++)
    {
        printf("tachnis charim\n");
        scanf(" %c",sasha);
        

        sasha++;
    }
    printf("\n\n\n\n");


    for (int i = 0; i < dum; i++)
    {
        printf("tachnis intim:");
        scanf("%d",avi);
        avi++;
    }

    free(sasha2);
    free(avi2);
    return 0;
}
