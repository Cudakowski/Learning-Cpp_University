#include "PasazerEkonomiczny.h"

void PasazerEkonomiczny::przedstawSie() const {
    std::cout<<"Jestem pasazerem ekonomicznym.\n";
    IPasazer::przedstawSie();
    std::cout<<'\n';
}
