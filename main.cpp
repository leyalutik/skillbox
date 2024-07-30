
#include <iostream>
#include <cassert>
#include<vector>


//TAsk1
//--------------------------MAIN-------

int main()
{
	
std::vector<std::vector<int>> chairs =   {{1,1,1,1,1,1},{1,1,1,1,1,1}};
	
std::vector<std::vector<int>> plates = {{3,2,2,2,2,2},{3,2,2,2,2,2}};

	std::vector<std::vector<int>>  tableware = {{4,3,3,3,3,3},{4,3,3,3,3,3}};

//Woman came with child. 
	std::cout << "Woman with child had " << ++chairs[0][4] << " chairs.\n";
	//Somebody stole a spoon. 
std::cout << "After stealing a spoon one person had " <<	--tableware[1][2] << " tablewares.\n";;
	//vip shared a spoon. And waiter took one plate.
	std::cout << "After sharing a spoon Vip had " <<	----tableware[0][0] << " tablewares and after taking one plate by waiter he had  " << --plates[0][0] << " plates.\n";;
std::cout << "Vip shared a spoon with one person. And person than had " <<	++tableware[1][2] << " tablewares.\n";

	
	
	return 0;
}



