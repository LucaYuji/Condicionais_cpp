#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int n1, n2, res;
    char opc;

    inicio:

    system("cls");

    cout << 'Digite o valor da nota 1: ';
    cin >> n1;
    cout << 'Digite o valor da nota 2: ';
    cin >> n1;

    res = n1 + n2;

    /*
    para notas maiores ou igual a 60 o aluno está aprovado
    para notas entre 40 e menores que 60 o aluno está de recuperação
    para notas menores que 40 o aluno está reprovado
    */

    if(res >= 60){
        cout << '\nAluno Aprovado\n';
    }else if(res >= 40){
        cout << '\nAluno Recuperacao\n';
    }else{
        cout << '\nAluno Reprovado\n';
    }
    
    cout << '\nDigita outras notas?(s/n):';
    cin >> opc;

    if(opc == 's' or opc == 'S'){
        goto inicio;
    }

    return 0;
}