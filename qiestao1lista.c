#include <stdio.h>

void verifica_eventos_ano(int ano) {
    // Anos dos Jogos Olímpicos de Verão
    int jogos_olimpicos_verao[] = {
        1896, 1900, 1904, 1908, 1912, 1920, 1924, 1928, 1932, 1936, 1948, 1952,
        1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000,
        2004, 2008, 2012, 2016};

    // Anos da Copa do Mundo de Futebol
    int copa_mundo_futebol[] = {
        1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974, 1978, 1982,
        1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014, 2018};

    int tem_jogos_olimpicos = 0;
    int tem_copa_mundo = 0;

    // Verifica se o ano está na lista de Jogos Olímpicos de Verão
    for (int i = 0; i < sizeof(jogos_olimpicos_verao) / sizeof(jogos_olimpicos_verao[0]); i++) {
        if (ano == jogos_olimpicos_verao[i]) {
            tem_jogos_olimpicos = 1;
            break;
        }
    }

    // Verifica se o ano está na lista da Copa do Mundo de Futebol
    for (int i = 0; i < sizeof(copa_mundo_futebol) / sizeof(copa_mundo_futebol[0]); i++) {
        if (ano == copa_mundo_futebol[i]) {
            tem_copa_mundo = 1;
            break;
        }
    }

    // Imprime a saída de acordo com a presença ou ausência dos eventos
    if (tem_jogos_olimpicos && tem_copa_mundo) {
        printf("Os Jogos Olímpicos de Verão e a Copa do Mundo de Futebol ocorreram no ano de %d.\n", ano);
    } else if (tem_jogos_olimpicos) {
        printf("Os Jogos Olímpicos de Verão ocorreram no ano de %d.\n", ano);
    } else if (tem_copa_mundo) {
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
    } else {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }
}

int main() {
    int ano;

    printf("Digite o ano (entre 1800 e 2022): ");
    scanf("%d", &ano);

    verifica_eventos_ano(ano);

    return 0;
}

  
