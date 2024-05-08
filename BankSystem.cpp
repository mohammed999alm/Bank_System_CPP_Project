#include <iostream>
#include "clsLogInScreen.h"
#include "clsCurrency.h"
//#include "clsLoginRegisterScreen.h"

using namespace std;


int main() 
{
	while (true == clsLogInScreen::showLogInScreen());
	//{
	//	if (!clsLogInScreen::showLogInScreen()) 
	//	{
	//		break;
	//	}
	//}

	system("pause > 0");
	return 0;
}