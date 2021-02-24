#include "Waitress.h"
#include "Iterator.h"
#include "DinerMenu.h"

int main()
{
	DinerMenu* m1 = new DinerMenu();
	DinerMenu* m2 = new DinerMenu();

	Waitress* waitress = new Waitress(m1, m2);
	waitress->printMenu();

	return 0;
}