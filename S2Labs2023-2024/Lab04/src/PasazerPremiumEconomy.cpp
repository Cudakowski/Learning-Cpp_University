#include "PasazerPremiumEconomy.h"

void PasazerPremiumEconomy::przedstawSie() const  {
    std::cout<<"Jestem pasazerem Premium Economy.\n";
    IPasazer::przedstawSie();
    std::cout<<(_czyVip?"Posiadam dostep":"Nie posiadam dostepu")<<" do Salonu VIP.\n\n";
}
