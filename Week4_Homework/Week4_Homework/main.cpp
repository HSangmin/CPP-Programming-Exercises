#include "Ranking.h"
extern int playfifteenPuzzle();
void main()
{
	loadRanking("ranking.txt");
	int rank = playfifteenPuzzle();
	printRanking();
	storeRanking("ranking.txt");
}