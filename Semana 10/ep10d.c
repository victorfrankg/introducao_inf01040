#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado(){            /*Função dado <- sem argumento*/
    return rand()%6+1; /*Retorna valor aleatório entre 1 e 6 incluso*/
}
int main(){            /*Main com inicialização do timestamp*/
    srand(time(NULL));
    int total[1000], un=0,deux=0,trois=0,quatre=0,cinc=0,six=0,i,n=0;
    float un_pct=0,deux_pct=0,trois_pct=0,quatre_pct=0,cinc_pct=0,six_pct=0;

    for (i=0;i<1000;i++){/*Switch para contabilização das faces dentro do laço for*/
        n=dado();
        total[i]=n;
        switch(n){
            case 1:
                un++;
                break;
            case 2:
                deux++;
                break;
            case 3:
                trois++;
                break;
            case 4:
                quatre++;
                break;
            case 5:
                cinc++;
                break;
            case 6:
                six++;
                break;
            default:
                break;
        }
    }
    un_pct = un/1000.0*100; /*Cálculo percentuais*/
    deux_pct = deux/1000.0*100;
    trois_pct = trois/1000.0*100;
    quatre_pct = quatre/1000.0*100;
    cinc_pct = cinc/1000.0*100;
    six_pct = six/1000.0*100;

    printf("Numero/Percentual (1): %d (%.2f%%)\n", un, un_pct);
    printf("Numero/Percentual (2): %d (%.2f%%)\n", deux, deux_pct);
    printf("Numero/Percentual (3): %d (%.2f%%)\n", trois, trois_pct);
    printf("Numero/Percentual (4): %d (%.2f%%)\n", quatre, quatre_pct);
    printf("Numero/Percentual (5): %d (%.2f%%)\n", cinc, cinc_pct);
    printf("Numero/Percentual (6): %d (%.2f%%)\n", six, six_pct);

    return 0;
}
//o3Jk3YU3Us
