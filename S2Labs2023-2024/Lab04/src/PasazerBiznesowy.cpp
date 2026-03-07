#include "PasazerBiznesowy.h"

void PasazerBiznesowy::przedstawSie() const  {
    std::cout<<"Jestem pasazerem biznesowym.\n";
    IPasazer::przedstawSie();
    std::cout<<"Stan konta: "<<_stanKonta<<"\n\n";
}
