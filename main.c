#include <stdio.h>

struct var{
    int num;
    int par;
    int pos;
    int zero;
};

typedef struct var var;


void imprimeTudo(var n){
    {
        if (n.pos == 0) {
            puts("numero primo");

        } else {
            if (n.par == 1) {
                puts("numero par");
            }
        }
    }
    if(n.zero > 0){
        puts("numero positivo");
    }
    else if(n.zero < 0){
        puts("numero negativo");
    }
    else{
        puts("numero igual zero");
    }
}

int primo(int n) {
    int i, p = 0, aux, b;
    aux = n;
    if (n == 2) {
        return 1;
    } else {
        for (i = 2; i < aux; i++) {
            b = i;
            if (n % b == 0) {
                p++;
            } else {

            }
        }
        return p;
    }
}

int numeros(var p, var u){
    int n = p.num, i, aux;
    p.pos = 1;
    for (i = 0; u.num > n; i++) {
        n++;
        aux = primo(n);
        if(aux == 0) {
            printf("%iº ==> %i\n",p.pos,n);
            p.pos++;
        }
    }
    return 0;
}

var coisa(var n){
int aux;
    aux = n.num % 2;
    if(aux == 0){
        n.par = 1;
    }
    else{
        n.par = 0;
    }
    return n;
}

var mais(var n){
    if(n.num > 0){
        n.zero = 1;
    }
    else if(n.num < 0){
        n.zero = -1;
    }
    else{
        n.zero = 0;
    }
    return n;
}

void menu(){
    int op;
    puts("Escolha uma das opçoes\n"
                 "1 - ver os numeros primos de um ponto a outro\n"
                 "2 - ver as caracteristicas de um numero");
    scanf("%i", &op);
    if(op == 1) {
        var p, u;
        puts("A Partir de Qual Numero?");
        scanf("%i", &p.num);
        puts("Ate Qual Numero?");
        scanf("%i", &u.num);
        numeros(p, u);
    }
    else if(op == 2){
        var n;
        puts("Insira o numero que deseja conhecer");
        scanf("%i", &n.num);
        n = coisa(n);
        n = mais(n);
        n.pos = primo(n.num);
        imprimeTudo(n);
    }
    else{
        puts("opcao nao existente");
    }
}

int main(int argc, char *argv[]) {
    menu();
    return 0;
}