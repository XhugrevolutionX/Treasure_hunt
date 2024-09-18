#ifndef TREASURE_HUNT_H
#define TREASURE_HUNT_H

enum class Tiles
{
	k_not_digged,
	k_empty_digged,
	k_treasure
};

class Map {

public:

	std::array<Tiles, 25> map;
	std::array<Tiles, 25> map_revealed;

	void initialize()
	{
		map.fill(Tiles::k_not_digged);
	}
	void place_treasure()
	{
		int idx = (std::rand() % map.size());
		map.at(idx) = Tiles::k_treasure;

	}
	void dig()
	{
		int l = 0;
		int c = 0;

		std::cout << "Veuillez entrer le numero de la ligne suivie du numero de la colonne ou vous souhaitez creuser\n";
		std::cin >> l;
		std::cin >> c;


		int idx = (l-1) * 5 + (c-1);
		if(idx > (int)map.size())
		{
			std::cout << "La case choisie est en-dehors des limites !!";
		}
		else if(map.at(idx) == Tiles::k_empty_digged)
		{
			std::cout << "La case choisie a deja ete creuser !!";
		}
		else
		{
			map.at(idx) = Tiles::k_empty_digged;
		}
	}
	void display()
	{
		for (int idx = 0; idx < (int)map.size(); idx++)
		{
			switch((int)map.at(idx))
			{
				case 0:
					std::cout << "X ";
					break;
				case 1:
					std::cout << "O ";
					break;
				case 2:
					std::cout << "$ ";
					break;
			}

			if(idx % 5 == 4)
			{
				std::cout << "\n";
			}
		}
	}
};

#endif // TREASURE_HUNT_H
