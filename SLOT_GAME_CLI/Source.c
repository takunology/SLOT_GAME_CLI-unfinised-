#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
int coin = 100;
int main()
{
	int p = 0;
	system("cls");
	SetConsoleTitle(TEXT("�X���b�g�Q�[��"));
	cout << "�R�C���������q���܂����H" << "    ���݂̖��� " << coin << "��" << endl;
	cin >> p;
	if (p > coin)
	{
			cout << "�R�C���̏��������𒴂��Ă��܂��B" << endl;
			Sleep(1000);
			return main();
	}
		else {}
	for (int i = 0; i < p; i++)
	{
		coin--;
	}

	int a[10] = { 1,2,3,4,5,6,7,8,9,0 }, b[10] = { 2,4,6,8,0,1,3,5,7,9 }, c[10] = { 4,2,1,5,7,8,0,3,6,9 }, i, j, k, l, m;

	// �ʏ탂�[�h////////////////////////////////////////////////////////////////////////////////////////////////////
	while (true)
	{
		for (i = 0; i < 10; i++) //�P�X���b�g��
		{
			cout << a[i] << " ";
			Sleep(25);
			system("cls");
			cout << "�X���b�g��                                    ���Ȃ��̏����R�C���� " << coin << "��" << endl;
			if (GetAsyncKeyState('V'))
			{
				Sleep(100);
				cout << a[i];
				goto b;
			}
		}

	}

b://2�X���b�g��////////////////////////////////////////////////////////////////////////////////
	while (true)
	{
		for (j = 0; j < 10; j++)
		{
			cout << " " << b[j];
			Sleep(25);
			system("cls");
			cout << "�X���b�g��                                    ���Ȃ��̏����R�C���� " << coin << "��" << endl;
			cout << a[i];
			if (GetAsyncKeyState('B'))
			{
				Sleep(100);
				cout << " " << b[j];
				if (a[i] == b[j])
				{
					goto ra;
				}
				else goto c;

			}
		}
	}

c://�ʏ�R�X���b�g��///////////////////////////////////////////////////////////////////////////////
	while (true)
	{
		for (k = 0; k < 10; k++)
		{
			cout << " " << c[k] << endl;
			Sleep(25);
			system("cls");
			cout << "�X���b�g��                                    ���Ȃ��̏����R�C���� " << coin << "��" << endl;
			cout << a[i] << " " << b[j];
			if (GetAsyncKeyState('N'))
			{
				Sleep(80);
				cout << " " << c[k];
				cout << endl;
				system("pause");
				return main();
			}
		}
	}

ra://���[�`�̎��̏���/////////3�X���b�g��////////////////////////////////////////////////////////////////
	printf("\a\a");
	while (true)
	{
		for (k = 0; k < 10; k++)
		{
			cout << "\n���[�`�I�I" << endl;
			Sleep(120);
			system("cls");
			cout << "�X���b�g��                                    ���Ȃ��̏����R�C���� " << coin << "��" << endl;
			cout << a[i] << " " << b[j];
			cout << " " << c[k];
			if (GetAsyncKeyState('N'))
			{
				Sleep(80);

				cout << endl;
				if (a[i] == c[k])//�����蔻��
				{
					printf("\a\a\a");
					cout << endl;
					if (a[i] == 1)
					{
						coin += p * 30;

						cout << "���߂łƂ��������܂��B " << p * 30 << "���̃R�C����������܂����I" << endl;
						system("pause");
						goto kakuhen;
					}

					if (a[i] == 0)
					{
						coin += p * 1;
						cout << "���߂łƂ��������܂��B " << p * 1 << "���̃R�C����������܂����I" << endl;
						system("pause");
						return main();
					}

					else if (a[i] == 2)
					{
						coin += p * 2;
						cout << "���߂łƂ��������܂��B " << p * 2 << "���̃R�C����������܂����I" << endl;
						system("pause");
						return main();

					}

					else if (a[i] == 3)
					{
						coin += p * 3;
						cout << "���߂łƂ��������܂��B " << p * 3 << "���̃R�C����������܂����I" << endl;
						system("pause");
						return main();
					}

					else if (a[i] == 4)
					{
						coin += p * 5;
						cout << "���߂łƂ��������܂��B " << p * 5 << "���̃R�C����������܂����I" << endl;
						system("pause");
						return main();
					}

					else if (a[i] == 5)
					{
						coin += p * 8;
						cout << "���߂łƂ��������܂��B " << p * 8 << "���̃R�C����������܂����I" << endl;
						system("pause");
						return main();
					}

					else if (a[i] == 6)
					{
						coin += p * 10;
						cout << "���߂łƂ��������܂��B " << p * 10 << "���̃R�C����������܂����I" << endl;
						system("pause");
						return main();
					}

					else if (a[i] == 7)
					{
						coin += p * 100;
						cout << "���߂łƂ��������܂��B " << p * 100 << "���̃R�C����������܂����I" << endl;
						system("pause");
						return main();
					}

					else if (a[i] == 8)
					{
						coin += p * 20;
						cout << "���߂łƂ��������܂��B " << p * 20 << "���̃R�C����������܂����I" << endl;
						system("pause");
						return main();
					}

					else if (a[i] == 9)
					{
						coin += p * 50;
						cout << "���߂łƂ��������܂��B " << p * 50 << "���̃R�C����������܂����I" << endl;
						system("pause");
						return main();
					}

				}
				else //������łȂ������ꍇ/////////////////////////////////////////
				{
					system("pause");
					cout << "�c�O�ł����B" << endl;
					return main();
				}
			}
		}
	}

kakuhen://�m�σ��[�h/////////////////////////////////////////////////////////////////////////

	system("cls");
	cout << "�m�σ��[�h�I�I" << endl;
	Sleep(2000);
	int ka[10] = { 2,4,6,1,3,5,7,8,9,0 };
	int kb[10] = { 1,3,2,4,5,7,6,8,9,0 };
	int kc[10] = { 9,0,8,7,5,6,3,4,2,1 };
	int kd[10] = { 5,4,6,3,7,2,8,1,9,0 };
	int ke[10] = { 3,5,4,2,1,6,0,7,8,9 };
kakuhens:
	system("cls");
	cout << "�R�C���������q���܂����H" << "    ���݂̖��� " << coin << "��" << endl;
	cin >> p;
	if (p > coin)
	{
		cout << "�R�C���̏��������𒴂��Ă��܂��B" << endl;
		Sleep(1000);
		return main();
	}
	else {}
	for (int i = 0; i < p; i++)
	{
		coin--;
	}
	while (true)//����i��ځj�̃X���b�g��//////////////////////////////////////////////////////////
	{
		for (i = 0; i < 10; i++)
		{
			cout << ka[i];
			Sleep(25);
			system("cls");
			cout << "�m�ϒ��I                                    ���Ȃ��̏����R�C���� " << coin << "��" << endl;;
			if (GetAsyncKeyState('C'))
			{
				Sleep(100);
				cout << ka[i];
				goto kB;
			}
		}

	}
kB://�E��i��ځj�̃X���b�g��//////////////////////////////////////////////////////////////////
	while (true)
	{
		for (j = 0; j < 10; j++)
		{
			cout << " " << kb[j];
			Sleep(25);
			system("cls");
			cout << "�m�ϒ��I                                    ���Ȃ��̏����R�C���� " << coin << "��" << endl;
			cout << ka[i];
			if (GetAsyncKeyState('V'))
			{
				Sleep(100);
				cout << " " << kb[j];
				goto kC;
			}
		}
	}
kC://�����i�O�ځj�̃X���b�g��////////////////////////////////////////////////////////////////
	while (true)
	{
		for (k = 0; k < 10; k++)
		{
			cout << "\n\n" << kc[k];
			Sleep(25);
			system("cls");
			cout << "�m�ϒ��I                                    ���Ȃ��̏����R�C���� " << coin << "��" << endl;
			cout << ka[i] << " " << kb[j];
			if (GetAsyncKeyState('N'))
			{
				Sleep(00);
				cout << "\n\n" << kc[k];
				goto kD;
			}
		}
	}
kD://�E���i�l�ځj�̃X���b�g��//////////////////////////////////////////////////////////////////////
	while (true)
	{
		for (l = 0; l < 10; l++)
		{
			cout << " " << kd[l];
			Sleep(25);
			system("cls");
			cout << "�m�ϒ��I                                    ���Ȃ��̏����R�C���� " << coin << "��" << endl;
			cout << ka[i] << " " << kb[j] << "\n\n" << kc[k];
			if (GetAsyncKeyState('M'))
			{
				Sleep(100);
				cout << " " << kd[l];

				if (ka[i] == kd[l] || kb[j] == kc[k])//�m�ώ��̃��[�`����////////////////////////////////////////////////////
				{
					goto Kr;
				}
				else
				{
					goto kE;
				}
			}
		}

	}




kE://�^�񒆁i�܂ځj�̃X���b�g��/////////////////////////////////////////////////////////////
	while (true)
	{
		for (m = 0; m < 10; m++)
		{
			Sleep(25);
			system("cls");
			cout << "�m�ϒ��I                                    ���Ȃ��̏����R�C���� " << coin << "��" << endl;
			cout << ka[i] << " " << kb[j] << "\n " << ke[m] << "\n" << kc[k] << " " << kd[l];
			if (GetAsyncKeyState('B'))
			{
				Sleep(100);
				system("cls");
				cout << "�m�ϒ��I                                    ���Ȃ��̏����R�C���� " << coin << "��" << endl;
				cout << ka[i] << " " << kb[j] << "\n " << ke[m] << "\n" << kc[k] << " " << kd[l];
				cout << endl; system("pause");
				goto kakuhens;
			}
		}
	}

Kr://�m�ώ��̃��[�`����@�^�񒆁i�܂ځj�̃X���b�g��////////////////////////////////////////////////////////////////////////
	while (true)
	{
		for (m = 0; m < 10; m++)
		{
			Sleep(25);
			system("cls");
			cout << "�m�ϒ��I                                    ���Ȃ��̏����R�C���� " << coin << "��" << endl;
			cout << ka[i] << " " << kb[j] << "\n " << ke[m] << "\n" << kc[k] << " " << kd[l];
			cout << "\n���[�`�I�I" << endl;
			Sleep(600);
			if (GetAsyncKeyState('B'))
			{
				Sleep(100);
				system("cls");
				cout << "�m�ϒ��I                                    ���Ȃ��̏����R�C���� " << coin << "��" << endl;
				cout << ka[i] << " " << kb[j] << "\n " << ke[m] << "\n" << kc[k] << " " << kd[l];
				if (ka[i] == ke[m] || kb[j] == ke[m])
				{
					printf("\a\a\a");
					cout << endl;
					if (ke[m] == 1)
					{
						coin += p * 30;

						cout << "���߂łƂ��������܂��B " << p * 30 << "���̃R�C����������܂����I" << endl;
						cout << "�m�όp���I�I" << endl;
						system("pause");
						goto kakuhens;
					}

					if (ke[m] == 0)
					{
						coin += p * 1;
						cout << "���߂łƂ��������܂��B " << p * 1 << "���̃R�C����������܂����I" << endl;
						system("pause");
						system("cls");
						cout << "�m�ϏI��" << endl;
						Sleep(2000);
						return main();
					}

					else if (ke[m] == 2)
					{
						coin += p * 2;
						cout << "���߂łƂ��������܂��B " << p * 2 << "���̃R�C����������܂����I" << endl;
						system("pause");
						system("cls");
						cout << "�m�ϏI��" << endl;
						Sleep(2000);
						return main();

					}

					else if (ke[m] == 3)
					{
						coin += p * 3;
						cout << "���߂łƂ��������܂��B " << p * 3 << "���̃R�C����������܂����I" << endl;
						cout << "�m�όp���I�I" << endl;
						system("pause");
						goto kakuhens;
					}

					else if (ke[m] == 4)
					{
						coin += p * 5;
						cout << "���߂łƂ��������܂��B " << p * 5 << "���̃R�C����������܂����I" << endl;
						system("pause");
						system("cls");
						cout << "�m�ϏI��" << endl;
						Sleep(2000);
						return main();
					}

					else if (ke[m] == 5)
					{
						coin += p * 8;
						cout << "���߂łƂ��������܂��B " << p * 8 << "���̃R�C����������܂����I" << endl;
						cout << "�m�όp���I�I" << endl;
						system("pause");
						goto kakuhens;
					}

					else if (ke[m] == 6)
					{
						coin += p * 10;
						cout << "���߂łƂ��������܂��B " << p * 10 << "���̃R�C����������܂����I" << endl;
						system("pause");
						system("cls");
						cout << "�m�ϏI��" << endl;
						Sleep(2000);
						return main();
					}

					else if (ke[m] == 7)
					{
						coin += p * 100;
						cout << "���߂łƂ��������܂��B " << p * 100 << "���̃R�C����������܂����I" << endl;
						cout << "�m�όp���I�I" << endl;
						system("pause");
						goto kakuhens;
					}

					else if (ke[m] == 8)
					{
						coin += p * 20;
						cout << "���߂łƂ��������܂��B " << p * 20 << "���̃R�C����������܂����I" << endl;
						system("pause");
						system("cls");
						cout << "�m�ϏI��" << endl;
						Sleep(2000);
						return main();
					}

					else if (ke[m] == 9)
					{
						coin += p * 50;
						cout << "���߂łƂ��������܂��B " << p * 50 << "���̃R�C����������܂����I" << endl;
						cout << "�m�όp���I�I" << endl;
						system("pause");
						goto kakuhens;
					}
				}

				else
				{
					cout << "\n�c�O�ł���" << endl;
					system("pause");
					goto kakuhens;
				}
			}
		}
	}

}
