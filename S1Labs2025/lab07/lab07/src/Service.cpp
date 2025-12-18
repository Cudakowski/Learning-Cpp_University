#include "Service.h"

void Service::Test(IceMachine* machine, double x)
{
std::cout<<"\n#############################################################\n"
    "### Test serwisowy ###\n\n"

    "1. Wsyp proszek do pelna:\n";

    machine->Reload(machine->capacity);

    std::cout<<"2. Przebieg testowy: "<<x<<" porcji:\n";

    machine->Start();
    machine->Make(static_cast<int>(x));
    machine->Stop();

    std::cout<<"\n### Koniec testu serwisowego ###\n"
    "#############################################################\n";
}


void Service::TestCopy(IceMachine machine, double x)
{
std::cout<<"\n#############################################################\n"
    "### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach ###\n\n"

    "1. Wsyp proszek do pelna:\n";
    
    machine.Reload(machine.capacity);

    std::cout<<"2. Przebieg testowy: "<<x<<" porcji:\n";

    machine.Start();
    machine.Make(static_cast<int>(x));
    machine.Stop();

    std::cout<<"\n### Koniec testu serwisowego ###\n"
    "#############################################################\n";
}
