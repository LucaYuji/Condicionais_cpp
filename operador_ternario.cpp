#include <iostream>
using namespace std;
int main(){
    //ternário (expressão) ? verdadeiro : falso;
    //(expressão) ? valor1 : valor2;

    int n1, n2, nota;
    string res;

    cout << 'Digite a primeira nota: ';
    cin >> n1;
    cout << 'Digite a segunda nota: ';
    cin >> n2;

    nota = n1 + n2;

    // se a nota for maior ou igual a 60 aprovado
    // se a nota for menor que 60 reprovado

    //(nota >= 60) ? res = 'Aprovado' : res = 'Reprovado';

    //para retornar um valor
    res = (nota >= 60) ? 'Aprovado' : 'Reprovado';

    cout << '\nSituacao do aluno: \n' << res << '\n';
    return 0;
}

int main(){

    int n1, x;

    x = 5;
    cout << 'Digite um valor: ';
    cin >> n1;

    (n1 >= 10) ? x++ : x--;

    cout << '\nNovo valor do X: ' << x << '\n';

    return 0;
}