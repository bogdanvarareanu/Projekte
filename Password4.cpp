#include<iostream>
#include <cstring>
#include<windows.h>
using namespace std;

void main()
{
	char Apass[20], A1pass[20], Np[20], Np2[20], var1 = 'j';
	strcpy_s(A1pass, "123456");
	cout << A1pass << endl;
	do
	{
		cout << "Aktuelles Kennwort:  ";
		
		cin.getline(Apass, 20);
		/*cout << "Aici " << int(Apass[0]) << endl;*/

		if (strcmp(Apass, A1pass) == 0)
		{
			cout << "Neues Kennwort: ";
			cin.getline(Np, 20);
			for (int i = 0; i < 20; i++)
			{
				if (int(Np[i]) > 64 && int(Np[i]) < 91)
				{
					for (int i = 0; i < 20; i++)
					{
						if (int(Np[i]) > 47 && int(Np[i]) < 58)
						{
							for (int i = 0; i < 20; i++)
							{
								if (int(Np[i]) > 96 && int(Np[i]) < 123)
								{
									for (int i = 0; i < 20; i++)
									{
										if (int(Np[i]) > 32 && int(Np[i]) < 48 || int(Np[i]) > 57 && int(Np[i]) < 65 || int(Np[i]) > 122 && int(Np[i]) < 127)
										{
											cout << "Neues Kennwort (noch einmal)";
											cin.getline(Np2, 20);
											if (strcmp(Np, Np2) == 0)
											{
												
												strcpy_s(A1pass, Np);
												cout << "j/n" << endl;
												cin >> var1;
												
												break;
											}
											else
											{
												cout << "Tschuess" << endl;
											}

											break;
										}
										


									}
									break;
								}
								


							}

							break;

						}
					
						

					}
					break;
				}
				
				

			}

		}
		
		
		system("cls");
		cout << A1pass << endl;
	} while (var1 == 'j');




















	system("pause");
}