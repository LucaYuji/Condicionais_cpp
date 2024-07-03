#include <iostream>

using namespace std;

int main(){

    int num;

    // [1,2,3,4,5,6,7,8,9,10]
    num = 8;

    if(num > 4 && num < 7){
        cout << '\nValor aceito\n' << num;
    }else{
        cout << '\nNao aceito\n' << num;
    }

    num = 2;
    
    if(num < 3 || num > 8){
        cout << '\nValor aceito\n' << num;
    }else{
        cout << '\nNao aceito\n' << num;
    }


    num = 12;
    if((num >= 3 && num <= 6) || (num > 9 && num < 15) || (num > 15 && num < 20)){
        cout << '\nValor aceito\n' << num;
    }else{
        cout << '\nNao aceito\n' << num;
    }

    num = 1;
    // se num não for verdadeiro então a afirmação é falsa, para (1 = verdadeiro)
    if(!num){
        cout << '\nVou ao clube\n';
    }else{
        cout << '\n Vou ao Cinema';
    }

    return 0;
}