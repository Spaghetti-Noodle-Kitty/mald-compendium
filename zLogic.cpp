#include "zLogic.h"
#pragma region Functions
bool zLogic::AND(bool StateA, bool StateB)
{
	if (StateA && StateB)
		return true;
	else
		return false;
}

bool zLogic::NAND(bool StateA, bool StateB)
{
	if (StateA && StateB)
		return false;
	else
		return true;
}

bool zLogic::NOR(bool StateA, bool StateB)
{
	if (!StateA && !StateB)
		return true;
	else
		return false;
}

bool zLogic::NOT(bool StateA)
{
	return !StateA;
}

bool zLogic::OR(bool StateA, bool StateB)
{
	if (!StateA && !StateB)
		return false;
	else
		return true;
}

bool zLogic::XNOR(bool StateA, bool StateB)
{
	if (StateA && StateB)
		return true;
	if (!StateA && !StateB)
		return true;
	else
		return false;
}

bool zLogic::XOR(bool StateA, bool StateB)
{
	if (StateA && StateB)
		return false;
	if (!StateA && !StateB)
		return false;
	else
		return true;
}
#pragma endregion