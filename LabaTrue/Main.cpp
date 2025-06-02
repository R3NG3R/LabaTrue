#include <iostream>

using namespace std;

void initialize();

void GetPlayerInput();
void Update();
void Render();

void shutdown();



int main()
{

	
	initialize();

	while (true)
	{
		GetPlayerInput();
	if (Update()
		{
			break;
		}

		Render();

	}
	shutdown();


	return 0;

}


void initialize();
{
	cout << "Hello in Game Tic-Tac-Toe" << endl;
}

void GetPlayerInput();
{

}
bool Update();
{
	return true;
}
void Render();
{

}

void shutdown();
{
	cout << "Good bye!" << endl;
}