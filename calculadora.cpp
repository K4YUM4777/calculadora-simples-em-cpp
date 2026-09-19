#include <iostream> 

int main(){
int opcao;
std::cout <<"digite um number ai "<< std::endl;
int numero1;
std::cin >> numero1;
std::cout << "digita outro ai mn" << std::endl;
int numero2;
std::cin >> numero2;

std::cout << "escolha a operacao " << std::endl;
std::cin >> opcao;
if (opcao == 1){
    int resultado = numero1 + numero2;
    std::cout << "resultado da soma : " << resultado << std::endl;
}
else if (opcao == 2){
    int resultado = numero1 - numero2;
    std::cout << "resultado da subtracao : " << resultado << std::endl;
}
else if (opcao == 3){
    int resultado = numero1 * numero2;
    std::cout << "resultado da multiplicacao : " << resultado << std::endl;
}
else if (opcao == 4){
    float resultado = (float)numero1 / (float)numero2;
    std::cout << "resultado da divisao : " << resultado << std::endl;
}
else if (numero2 == 0){
    std::cout << "nao da pra dividir por zero" << std::endl;
}

else{
    std::cout << "opcao invalida" << std::endl;



}
}