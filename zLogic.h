#pragma once
class zLogic
{
public:
	static bool NOT		(bool StateA);
	static bool AND		(bool StateA, bool StateB);
	static bool NOR		(bool StateA, bool StateB);
	static bool NAND	(bool StateA, bool StateB);
	static bool OR		(bool StateA, bool StateB);
	static bool XOR		(bool StateA, bool StateB);
	static bool XNOR	(bool StateA, bool StateB);

};

