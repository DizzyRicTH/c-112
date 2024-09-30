#include <iostream>
#include <cmath>

double search(int market[], int size, int Mynum);

int main(){

	int market[] = {1, 99, 3, 4, 5};
	int size = sizeof(market)/sizeof(market[0]);
	int index;
	int Mynum;

	std::cout << "ennter your element to search: " << '\n';
	std::cin >> Mynum;

    index = search(market, size, Mynum);

	if (index != -1)
	{
		std::cout << Mynum << " is at index " << index;
	}
	else{
		std::cout << Mynum << " is not in the index.";
	}


	return 0;
}
double search(int market[], int size, int Mynum){

	for (int i = 0; i < size; i++)
	{
        if (market[i] == Mynum)
        {
            return i;
        }
		else{
			return -1;
		}
		
	}
}