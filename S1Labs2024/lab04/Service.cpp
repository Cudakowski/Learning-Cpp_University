#include "Service.h"
#include "Car.h"
#include <iostream>


void Service::Test(Car *MyCar1, double x)
{
    std::cout<<"\n#############################################################\n"
               "### Test serwisowy ###\n"
               "\n1. Tankowanie do pelna:";

    MyCar1->Refuel(MyCar1->GetTankCapacity());

    std::cout<<"2. Jazda testowa: "<< x <<" km:";

    MyCar1->Start();

    MyCar1->Drive(x);

    MyCar1->Stop();

    
    std::cout<<"\n### Koniec testu serwisowego ###\n"
               "#############################################################\n";


}

void Service::TestCopy(Car MyCar1, double x)
{
    std::cout<<"\n#############################################################\n"
               "### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach ###\n"
               "\n1. Tankowanie do pelna:";

    MyCar1.Refuel(MyCar1.GetTankCapacity());

    std::cout<<"2. Jazda testowa: "<< x <<" km:";

    MyCar1.Start();

    MyCar1.Drive(x);

    MyCar1.Stop();

    
    std::cout<<"\n### Koniec testu serwisowego ###\n"
               "#############################################################\n";


}