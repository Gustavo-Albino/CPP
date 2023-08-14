#include <iostream>
#include <string>

void PlayGame();

int StopContinue() {
    std::string res;
    std::cout << "Voce deseja continuar jogando (Y/n)?";
    std::cin >> res;
    if (res == "Y" || res == "y") {
        PlayGame();
        return StopContinue();
    } else if(res == "N" || res == "n") {
        return 0;
    } else {
        std::cout << "Resposta invalida. Tente novamente" << std::endl;
        return 0;
    }
}

void PlayGame() {
    srand(time(NULL));
    int num_rand = rand() % 5 + 1;
    int num_input;

    std::cout << "Digite um numero de 1 a 5: ";
    std::cin >> num_input;
    
    if (num_input == num_rand) {
        std::cout << "Voce ganhou. o numero secreto era o numero " << 
        num_rand << std::endl;
    } else {
        std::cout << "Infelizmente nao foi dessa vez. o numero secreto era " << num_rand;
    }
}

int main() {

    PlayGame();
    return StopContinue();
}