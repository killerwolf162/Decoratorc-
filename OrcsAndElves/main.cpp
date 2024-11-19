#include <iostream>
#include "Orc.h"
#include "Elf.h"
#include "Decorator.h"
#include "SoldierDecorator.h"
#include "FarmerDecorator.h"
#include "ShamanDecorator.h"


int main()
{
	Unit* orc = new Orc("Gogzub Ulfirag");
	orc->render();

	Unit* orcSoldier = new SoldierDecorator(new Orc("Dumbron Burizuf"));
	orcSoldier->render();

	Unit* orcSoldierFarmer = new FarmerDecorator(new SoldierDecorator(new Orc("Dubrkub Orun")));
	orcSoldierFarmer->render();

	Unit* elf = new Elf("Ciririil Faeorinh");
	elf->render();

	Unit* elfFarmer = new Elf("Gilntur Larethiuth");
	elfFarmer = new FarmerDecorator(elfFarmer);
	elfFarmer->render();

	Unit* elfSoldierShaman = new Elf("Mankonriel Thilinfhar");
	elfSoldierShaman = new SoldierDecorator(elfSoldierShaman);
	elfSoldierShaman = new ShamanDecorator(elfSoldierShaman);
	elfSoldierShaman->render();

	delete orc;
	delete orcSoldier;
	delete orcSoldierFarmer;
	delete elf;
	delete elfFarmer;
	delete elfSoldierShaman;

	return 0;
}