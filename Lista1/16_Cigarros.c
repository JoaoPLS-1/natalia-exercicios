
#include <stdio.h>

int main()
{
    int cigarros,cigarroshoje, dias;
    float vida;
    printf("Digite quantos maços de cigarro voce fuma por dia:");
    scanf("%d", &cigarros);
    printf("Digite ha quantos voce fuma: ");
    scanf("%d", &cigarroshoje);
    vida = ((cigarros * cigarroshoje * 365) * 10) / (24*60);
    printf("Voce fuma: %d cigarros por dia \n Fumou: %d cigarros hoje \n Considerando que a cada cigarro fumado voce perde 10 minutos de vida. Voce perdeu aproximadamente %.1f dias de vida!",cigarros, cigarroshoje, vida);

    return 0;
}
