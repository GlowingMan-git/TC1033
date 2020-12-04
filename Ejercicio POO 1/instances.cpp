#include "norm_car.h"
#include "elec_car.h"

using namespace std;

int main()
{
    norm_car Toyota;
    elec_car Tesla;

    Toyota.setMarca("Toyota");
    Toyota.setMaxVelocity(175.5);
    Toyota.setModelo(2018);
    Toyota.setNombre("Corolla");

    Tesla.setMarca("Tesla");
    Tesla.setMaxVelocity(160.7);
    Tesla.setModelo(2020);
    Tesla.setNombre("Model X");

    return 0;
}