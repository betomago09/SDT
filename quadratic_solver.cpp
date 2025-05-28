#include <iostream>   // Biblioteca para entrada e saída de dados
#include <cmath>      // Biblioteca para funções matemáticas como sqrt()
using namespace std;

int main() {
    // Declaração das variáveis para os coeficientes da equação
    double a, b, c;

    // Leitura dos coeficientes fornecidos pelo usuário
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    // Verifica se 'a' é zero, o que descaracteriza a equação do segundo grau
    if (a == 0) {
        cout << "This is not a quadratic equation." << endl;
        return 1;
    }

    // Cálculo do discriminante (delta = b² - 4ac)
    double discriminant = b * b - 4 * a * c;
    double root1, root2;

    // Verifica se o discriminante é positivo, nulo ou negativo
    if (discriminant > 0) {
        // Duas raízes reais e distintas
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        // Duas raízes reais iguais (raiz dupla)
        root1 = -b / (2 * a);
        cout << "Roots are real and the same." << endl;
        cout << "Root = " << root1 << endl;
    } else {
        // Raízes complexas e diferentes (conjugadas)
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    // Finaliza o programa com sucesso
    return 0;
}