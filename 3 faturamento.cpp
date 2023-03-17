#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Definindo o vetor de faturamento diário da distribuidora
    vector<double> faturamento_diario = {22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612, 0.0, 42889.2258, 46251.174, 11191.4722, 0.0, 0.0, 3847.4823, 373.7838, 2659.7563, 48924.2448, 18419.2614, 0.0, 0.0, 35240.1826, 43829.1667, 18235.6852, 4355.0662, 13327.1025, 0.0, 0.0, 25681.8318, 1718.1221, 13220.495, 8414.61};

    // Calculando o menor e o maior valor de faturamento diário
    double menor_faturamento = *min_element(faturamento_diario.begin(), faturamento_diario.end());
    double maior_faturamento = *max_element(faturamento_diario.begin(), faturamento_diario.end());

    // Calculando a média mensal de faturamento diário
    double media_mensal = 0.0;
    for (double faturamento : faturamento_diario)
    {
        media_mensal += faturamento;
    }
    media_mensal /= faturamento_diario.size();

    // Calculando o número de dias no mês em que o faturamento diário foi superior à média mensal
    int dias_acima_da_media = 0;
    for (double faturamento : faturamento_diario)
    {
        if (faturamento > media_mensal)
        {
            dias_acima_da_media++;
        }
    }

    // Exibindo os resultados
    cout << "Menor faturamento diário: " << menor_faturamento << endl;
    cout << "Maior faturamento diário: " << maior_faturamento << endl;
    cout << "Dias com faturamento acima da média mensal: " << dias_acima_da_media << endl;

    return 0;
}
