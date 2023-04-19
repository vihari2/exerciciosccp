// Escreva função chamada tempoJogo() que recebe 4 parâmetros
// inteiros, cada par de inteiros representando dois horários (horas e
// minutos). A função deve devolver o período em minutos decorrido entre
// os dois horários, e também o valor 1 (um) se o intervalo de tempo
// calculado for maior que 3 horas e meia e 0 (zero) caso contrário

#include <iostream>

using namespace std;

int tempoJogo(int horario1, int minuto1, int horario2, int minuto2)
{
    int horasParaMinutos1 = horario1 * 60;
    int horasParaMinutos2 = horario2 * 60;
    int intervaloDeTempo = (horasParaMinutos1 + minuto1) - (horasParaMinutos2 + minuto2);
    if (intervaloDeTempo > 210)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int resultado = tempoJogo(1, 30, 2, 40);
    cout << resultado << endl;
    return 0;
}
