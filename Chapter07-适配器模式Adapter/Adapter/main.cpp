#include <iostream>
#include "MallardDuck.h"
#include "Duck.h"
#include "WildTurKey.h"
#include "TurKey.h"
#include "TurkeyAdapter.h"
#include "TurkeyClassAdapter.h"

using namespace std;

static void testDuck(Duck* duck)
{
	duck->quack();
	duck->fly();
}


int main()
{
	MallardDuck* duck = new MallardDuck();
	WildTurKey* turkey = new WildTurKey();
	Duck* turkeyAdapter = new TurkeyAdapter(turkey);
	Duck* turkeyClassAdapter = new TurkeyClassAdapter();

	turkey->gobble();
	turkey->fly();

	cout << endl;

	testDuck(duck);
	cout << endl;
	testDuck(turkeyAdapter);
	cout << endl;
	testDuck(turkeyClassAdapter);


	return 0;
}