#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
int coin = 100;
int main()
{
	int p = 0;
	system("cls");
	SetConsoleTitle(TEXT("スロットゲーム"));
	cout << "コインを何枚賭けますか？" << "    現在の枚数 " << coin << "枚" << endl;
	cin >> p;
	if (p > coin)
	{
			cout << "コインの所持枚数を超えています。" << endl;
			Sleep(1000);
			return main();
	}
		else {}
	for (int i = 0; i < p; i++)
	{
		coin--;
	}

	int a[10] = { 1,2,3,4,5,6,7,8,9,0 }, b[10] = { 2,4,6,8,0,1,3,5,7,9 }, c[10] = { 4,2,1,5,7,8,0,3,6,9 }, i, j, k, l, m;

	// 通常モード////////////////////////////////////////////////////////////////////////////////////////////////////
	while (true)
	{
		for (i = 0; i < 10; i++) //１スロット目
		{
			cout << a[i] << " ";
			Sleep(25);
			system("cls");
			cout << "スロット目                                    あなたの所持コイン数 " << coin << "枚" << endl;
			if (GetAsyncKeyState('V'))
			{
				Sleep(100);
				cout << a[i];
				goto b;
			}
		}

	}

b://2スロット目////////////////////////////////////////////////////////////////////////////////
	while (true)
	{
		for (j = 0; j < 10; j++)
		{
			cout << " " << b[j];
			Sleep(25);
			system("cls");
			cout << "スロット目                                    あなたの所持コイン数 " << coin << "枚" << endl;
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

c://通常３スロット目///////////////////////////////////////////////////////////////////////////////
	while (true)
	{
		for (k = 0; k < 10; k++)
		{
			cout << " " << c[k] << endl;
			Sleep(25);
			system("cls");
			cout << "スロット目                                    あなたの所持コイン数 " << coin << "枚" << endl;
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

ra://リーチの時の処理/////////3スロット目////////////////////////////////////////////////////////////////
	printf("\a\a");
	while (true)
	{
		for (k = 0; k < 10; k++)
		{
			cout << "\nリーチ！！" << endl;
			Sleep(120);
			system("cls");
			cout << "スロット目                                    あなたの所持コイン数 " << coin << "枚" << endl;
			cout << a[i] << " " << b[j];
			cout << " " << c[k];
			if (GetAsyncKeyState('N'))
			{
				Sleep(80);

				cout << endl;
				if (a[i] == c[k])//あたり判定
				{
					printf("\a\a\a");
					cout << endl;
					if (a[i] == 1)
					{
						coin += p * 30;

						cout << "おめでとうございます。 " << p * 30 << "枚のコインが当たりました！" << endl;
						system("pause");
						goto kakuhen;
					}

					if (a[i] == 0)
					{
						coin += p * 1;
						cout << "おめでとうございます。 " << p * 1 << "枚のコインが当たりました！" << endl;
						system("pause");
						return main();
					}

					else if (a[i] == 2)
					{
						coin += p * 2;
						cout << "おめでとうございます。 " << p * 2 << "枚のコインが当たりました！" << endl;
						system("pause");
						return main();

					}

					else if (a[i] == 3)
					{
						coin += p * 3;
						cout << "おめでとうございます。 " << p * 3 << "枚のコインが当たりました！" << endl;
						system("pause");
						return main();
					}

					else if (a[i] == 4)
					{
						coin += p * 5;
						cout << "おめでとうございます。 " << p * 5 << "枚のコインが当たりました！" << endl;
						system("pause");
						return main();
					}

					else if (a[i] == 5)
					{
						coin += p * 8;
						cout << "おめでとうございます。 " << p * 8 << "枚のコインが当たりました！" << endl;
						system("pause");
						return main();
					}

					else if (a[i] == 6)
					{
						coin += p * 10;
						cout << "おめでとうございます。 " << p * 10 << "枚のコインが当たりました！" << endl;
						system("pause");
						return main();
					}

					else if (a[i] == 7)
					{
						coin += p * 100;
						cout << "おめでとうございます。 " << p * 100 << "枚のコインが当たりました！" << endl;
						system("pause");
						return main();
					}

					else if (a[i] == 8)
					{
						coin += p * 20;
						cout << "おめでとうございます。 " << p * 20 << "枚のコインが当たりました！" << endl;
						system("pause");
						return main();
					}

					else if (a[i] == 9)
					{
						coin += p * 50;
						cout << "おめでとうございます。 " << p * 50 << "枚のコインが当たりました！" << endl;
						system("pause");
						return main();
					}

				}
				else //あたりでなかった場合/////////////////////////////////////////
				{
					system("pause");
					cout << "残念でした。" << endl;
					return main();
				}
			}
		}
	}

kakuhen://確変モード/////////////////////////////////////////////////////////////////////////

	system("cls");
	cout << "確変モード！！" << endl;
	Sleep(2000);
	int ka[10] = { 2,4,6,1,3,5,7,8,9,0 };
	int kb[10] = { 1,3,2,4,5,7,6,8,9,0 };
	int kc[10] = { 9,0,8,7,5,6,3,4,2,1 };
	int kd[10] = { 5,4,6,3,7,2,8,1,9,0 };
	int ke[10] = { 3,5,4,2,1,6,0,7,8,9 };
kakuhens:
	system("cls");
	cout << "コインを何枚賭けますか？" << "    現在の枚数 " << coin << "枚" << endl;
	cin >> p;
	if (p > coin)
	{
		cout << "コインの所持枚数を超えています。" << endl;
		Sleep(1000);
		return main();
	}
	else {}
	for (int i = 0; i < p; i++)
	{
		coin--;
	}
	while (true)//左上（一つ目）のスロット目//////////////////////////////////////////////////////////
	{
		for (i = 0; i < 10; i++)
		{
			cout << ka[i];
			Sleep(25);
			system("cls");
			cout << "確変中！                                    あなたの所持コイン数 " << coin << "枚" << endl;;
			if (GetAsyncKeyState('C'))
			{
				Sleep(100);
				cout << ka[i];
				goto kB;
			}
		}

	}
kB://右上（二つ目）のスロット目//////////////////////////////////////////////////////////////////
	while (true)
	{
		for (j = 0; j < 10; j++)
		{
			cout << " " << kb[j];
			Sleep(25);
			system("cls");
			cout << "確変中！                                    あなたの所持コイン数 " << coin << "枚" << endl;
			cout << ka[i];
			if (GetAsyncKeyState('V'))
			{
				Sleep(100);
				cout << " " << kb[j];
				goto kC;
			}
		}
	}
kC://左下（三つ目）のスロット目////////////////////////////////////////////////////////////////
	while (true)
	{
		for (k = 0; k < 10; k++)
		{
			cout << "\n\n" << kc[k];
			Sleep(25);
			system("cls");
			cout << "確変中！                                    あなたの所持コイン数 " << coin << "枚" << endl;
			cout << ka[i] << " " << kb[j];
			if (GetAsyncKeyState('N'))
			{
				Sleep(00);
				cout << "\n\n" << kc[k];
				goto kD;
			}
		}
	}
kD://右下（四つ目）のスロット目//////////////////////////////////////////////////////////////////////
	while (true)
	{
		for (l = 0; l < 10; l++)
		{
			cout << " " << kd[l];
			Sleep(25);
			system("cls");
			cout << "確変中！                                    あなたの所持コイン数 " << coin << "枚" << endl;
			cout << ka[i] << " " << kb[j] << "\n\n" << kc[k];
			if (GetAsyncKeyState('M'))
			{
				Sleep(100);
				cout << " " << kd[l];

				if (ka[i] == kd[l] || kb[j] == kc[k])//確変時のリーチ判定////////////////////////////////////////////////////
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




kE://真ん中（五つ目）のスロット目/////////////////////////////////////////////////////////////
	while (true)
	{
		for (m = 0; m < 10; m++)
		{
			Sleep(25);
			system("cls");
			cout << "確変中！                                    あなたの所持コイン数 " << coin << "枚" << endl;
			cout << ka[i] << " " << kb[j] << "\n " << ke[m] << "\n" << kc[k] << " " << kd[l];
			if (GetAsyncKeyState('B'))
			{
				Sleep(100);
				system("cls");
				cout << "確変中！                                    あなたの所持コイン数 " << coin << "枚" << endl;
				cout << ka[i] << " " << kb[j] << "\n " << ke[m] << "\n" << kc[k] << " " << kd[l];
				cout << endl; system("pause");
				goto kakuhens;
			}
		}
	}

Kr://確変時のリーチ判定　真ん中（五つ目）のスロット目////////////////////////////////////////////////////////////////////////
	while (true)
	{
		for (m = 0; m < 10; m++)
		{
			Sleep(25);
			system("cls");
			cout << "確変中！                                    あなたの所持コイン数 " << coin << "枚" << endl;
			cout << ka[i] << " " << kb[j] << "\n " << ke[m] << "\n" << kc[k] << " " << kd[l];
			cout << "\nリーチ！！" << endl;
			Sleep(600);
			if (GetAsyncKeyState('B'))
			{
				Sleep(100);
				system("cls");
				cout << "確変中！                                    あなたの所持コイン数 " << coin << "枚" << endl;
				cout << ka[i] << " " << kb[j] << "\n " << ke[m] << "\n" << kc[k] << " " << kd[l];
				if (ka[i] == ke[m] || kb[j] == ke[m])
				{
					printf("\a\a\a");
					cout << endl;
					if (ke[m] == 1)
					{
						coin += p * 30;

						cout << "おめでとうございます。 " << p * 30 << "枚のコインが当たりました！" << endl;
						cout << "確変継続！！" << endl;
						system("pause");
						goto kakuhens;
					}

					if (ke[m] == 0)
					{
						coin += p * 1;
						cout << "おめでとうございます。 " << p * 1 << "枚のコインが当たりました！" << endl;
						system("pause");
						system("cls");
						cout << "確変終了" << endl;
						Sleep(2000);
						return main();
					}

					else if (ke[m] == 2)
					{
						coin += p * 2;
						cout << "おめでとうございます。 " << p * 2 << "枚のコインが当たりました！" << endl;
						system("pause");
						system("cls");
						cout << "確変終了" << endl;
						Sleep(2000);
						return main();

					}

					else if (ke[m] == 3)
					{
						coin += p * 3;
						cout << "おめでとうございます。 " << p * 3 << "枚のコインが当たりました！" << endl;
						cout << "確変継続！！" << endl;
						system("pause");
						goto kakuhens;
					}

					else if (ke[m] == 4)
					{
						coin += p * 5;
						cout << "おめでとうございます。 " << p * 5 << "枚のコインが当たりました！" << endl;
						system("pause");
						system("cls");
						cout << "確変終了" << endl;
						Sleep(2000);
						return main();
					}

					else if (ke[m] == 5)
					{
						coin += p * 8;
						cout << "おめでとうございます。 " << p * 8 << "枚のコインが当たりました！" << endl;
						cout << "確変継続！！" << endl;
						system("pause");
						goto kakuhens;
					}

					else if (ke[m] == 6)
					{
						coin += p * 10;
						cout << "おめでとうございます。 " << p * 10 << "枚のコインが当たりました！" << endl;
						system("pause");
						system("cls");
						cout << "確変終了" << endl;
						Sleep(2000);
						return main();
					}

					else if (ke[m] == 7)
					{
						coin += p * 100;
						cout << "おめでとうございます。 " << p * 100 << "枚のコインが当たりました！" << endl;
						cout << "確変継続！！" << endl;
						system("pause");
						goto kakuhens;
					}

					else if (ke[m] == 8)
					{
						coin += p * 20;
						cout << "おめでとうございます。 " << p * 20 << "枚のコインが当たりました！" << endl;
						system("pause");
						system("cls");
						cout << "確変終了" << endl;
						Sleep(2000);
						return main();
					}

					else if (ke[m] == 9)
					{
						coin += p * 50;
						cout << "おめでとうございます。 " << p * 50 << "枚のコインが当たりました！" << endl;
						cout << "確変継続！！" << endl;
						system("pause");
						goto kakuhens;
					}
				}

				else
				{
					cout << "\n残念でした" << endl;
					system("pause");
					goto kakuhens;
				}
			}
		}
	}

}
