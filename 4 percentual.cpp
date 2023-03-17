#include <iostream>
using namespace std;

int main() {
    // Definindo os valores de faturamento mensal de cada estado
    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.48;
    float outros = 19849.53;
    
    // Calculando o valor total mensal da distribuidora
    float total = sp + rj + mg + es + outros;
    
    // Calculando o percentual de representação de cada estado
    float pct_sp = (sp / total) * 100;
    float pct_rj = (rj / total) * 100;
    float pct_mg = (mg / total) * 100;
    float pct_es = (es / total) * 100;
    float pct_outros = (outros / total) * 100;
    
    // Imprimindo os resultados
    cout << "Percentual de representacao de cada estado dentro do valor total mensal da distribuidora:\n";
    cout << "SP: " << pct_sp << "%\n";
    cout << "RJ: " << pct_rj << "%\n";
    cout << "MG: " << pct_mg << "%\n";
    cout << "ES: " << pct_es << "%\n";
    cout << "Outros: " << pct_outros << "%\n";
    
    return 0;
}
