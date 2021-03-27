#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void flames();
void hud();
void text_color(int color);
void gotoxy(int x, int y);
void ShowConsoleCursor(bool showFlag);


int main() {
	
	system("MODE 45, 16");	
	
	hud();
	
	flames();
	
		
	return 0;
}

void flames(){
	
	char firstName[32], secondName[32];
	int firstNamei = 0, secondNamei = 0;
	int flameCount = 0;
	
	text_color(15);
	ShowConsoleCursor(true);
	
	char c;
	int x = 7;
		
	gotoxy(17, 5);
	
	cout<<"First name: ";
	
	gotoxy(17, 8);
	
	cout<<"Second name: ";
	
	gotoxy(7, 6);
	
	while(1){
		
		c = getch();
		
		if(c == 8 && x != 7){
			x--;
			gotoxy(x, 6);
			cout<<" ";
			gotoxy(x, 6);
			firstNamei--;
			ShowConsoleCursor(true);
			
		}else
		if(c == 32){
		}else
		if(c == 8){
		}else
		if((c >= 65 && c <= 90) && (c >= 97 && c <= 122) || c != 13 && c != 32 && x != 39){
			cout<<c;
			firstName[firstNamei] = c;
			firstNamei++;
			x++;
			if(x == 39){
				ShowConsoleCursor(false);
			}
					
		}else
		if(firstNamei == 0){
			ShowConsoleCursor(false);
			gotoxy(13, 6);
			text_color(12);
			cout<<"Name can't be empty!";
			Sleep(1000);
			gotoxy(13, 6);
			cout<<"                    ";
			Sleep(250);
			gotoxy(13, 6);
			text_color(12);
			cout<<"Name can't be empty!";
			Sleep(1000);
			gotoxy(13, 6);
			cout<<"                    ";
			text_color(15);
			gotoxy(7, 6);
			ShowConsoleCursor(true);
		}else
		if(c == 13){
			ShowConsoleCursor(true);
			cout<<endl;
			break;
		}	
	}
	
	x = 7;
	
	gotoxy(7, 9);
	
	while(1){
		
		c = getch();
		
		if(c == 8 && x != 7){
			x--;
			gotoxy(x, 9);
			cout<<" ";
			gotoxy(x, 9);
			secondNamei--;
			ShowConsoleCursor(true);
		}else
		if(c == 32){
		}else
		if(c == 8){
		}else
		if(c == 9){
		}else
		if((c >= 65 && c <= 90) && (c >= 97 && c <= 122)|| c != 13 && c != 32 && x != 39){
			cout<<c;
			secondName[secondNamei] = c;
			secondNamei++;
			x++;
			if(x == 39){
				ShowConsoleCursor(false);
			}
		}else
		if(secondNamei == 0){
			ShowConsoleCursor(false);
			gotoxy(13, 9);
			text_color(12);
			cout<<"Name can't be empty!";
			Sleep(1000);
			gotoxy(13, 9);
			cout<<"                    ";
			Sleep(250);
			gotoxy(13, 9);
			text_color(12);
			cout<<"Name can't be empty!";
			Sleep(1000);
			gotoxy(13, 9);
			cout<<"                    ";
			text_color(15);
			gotoxy(7, 9);
			ShowConsoleCursor(true);
		}else
		if(c == 13){
			ShowConsoleCursor(true);
			cout<<endl;
			break;
		}
	}

	flameCount = 0;
	
	for(int i = 0; i < firstNamei; i++){
		
		if(firstName[i] == 'F' || firstName[i] == 'f' ||
			firstName[i] == 'L' || firstName[i] == 'l' ||
			firstName[i] == 'A' || firstName[i] == 'a' ||
			firstName[i] == 'M' || firstName[i] == 'm' ||
			firstName[i] == 'E' || firstName[i] == 'e' ||
			firstName[i] == 'S' || firstName[i] == 's' ){
			flameCount++;
		}
			
	}

	for(int i = 0; i < secondNamei; i++){
		
		if(secondName[i] == 'F' || secondName[i] == 'f' ||
			secondName[i] == 'L' || secondName[i] == 'l' ||
			secondName[i] == 'A' || secondName[i] == 'a' ||
			secondName[i] == 'M' || secondName[i] == 'm' ||
			secondName[i] == 'E' || secondName[i] == 'e' ||
			secondName[i] == 'S' || secondName[i] == 's' ){
			flameCount++;
		}
			
	}
	
	ShowConsoleCursor(false);
	
	int rpt = 0, charTotal;
	
	charTotal = firstNamei + secondNamei;
	
	if(charTotal > 56){
		rpt = 4;
	}else
	if(charTotal > 40){
		rpt = 3;
	}else
	if(charTotal > 24){
		rpt = 2;
	}
	
	text_color(14);	
	for(int i = 0; i < rpt; i++){
	gotoxy(14, 11);
	cout<<"Processing results";
	gotoxy(14, 11);
	Sleep(200);
	cout<<"                        ";
	gotoxy(14, 11);
	cout<<"Processing results.";
	gotoxy(14, 11);
	Sleep(200);
	cout<<"                        ";
	gotoxy(13, 11);
	cout<<"Processing results..";
	gotoxy(13, 11);
	Sleep(200);
	cout<<"                        ";
	gotoxy(13, 11);
	cout<<"Processing results...";
	gotoxy(13, 11);
	Sleep(200);
	cout<<"                        ";
	}
	
	flameCount = flameCount % 6;
	
	gotoxy(16, 11);
	
	if(flameCount == 0){
		text_color(12);
		cout<<" Sweetheart";
	}else
	if(flameCount == 1){
		text_color(11);
		cout<<"   Friends";
	}else
	if(flameCount == 2){
		text_color(12);	
		cout<<"   Lovers";
	}else
	if(flameCount == 3){
		text_color(10);
		cout<<"Acquaintance";
	}else
	if(flameCount == 4){
		text_color(13);
		cout<<"   Married";
	}else
	if(flameCount == 5){
		text_color(15);
		cout<<"   Enemies";
	}
	
	ShowConsoleCursor(false);
	gotoxy(7, 13);
	text_color(14);
	cout<<" Do you want to try again? ";
	text_color(10);
	cout<<"Y";
	text_color(15);
	cout<<"/";
	text_color(12);
	cout<<"N";
	switch(getch()){
		case 'Y':
		case 'y':
			gotoxy(7, 6);
			cout<<"                                ";
			gotoxy(7, 9);
			cout<<"                                ";
			gotoxy(7, 11);
			cout<<"                                ";
			gotoxy(7, 13);
			cout<<"                                ";
			flames();
			break;
		case 'N':
		case 'n':
			break;	
}
	
}

void hud(){
	
	text_color(15);
	gotoxy(10, 1);	
	cout<<"==========================";
	gotoxy(10, 2);
	cout<<"||      ";
	text_color(12);
	cout<<"F L A M E S";
	text_color(15);
	cout<<"     ||";
	gotoxy(10, 3);
	cout<<"==========================";
	gotoxy(6, 4);
	cout<<"O================================O";
	gotoxy(6, 5);
	cout<<"|";
	gotoxy(6, 6);
	cout<<"|";
	gotoxy(6, 7);
	cout<<"|";
	gotoxy(6, 8);
	cout<<"|";
	gotoxy(6, 9);
	cout<<"|";
	gotoxy(6, 10);
	cout<<"|";
	gotoxy(6, 11);
	cout<<"|";
	gotoxy(6, 12);
	cout<<"|";
	gotoxy(6, 13);
	cout<<"|";
	gotoxy(6, 14);
	cout<<"O================================O";
	gotoxy(39, 5);
	cout<<"|";
	gotoxy(39, 6);
	cout<<"|";
	gotoxy(39, 7);
	cout<<"|";
	gotoxy(39, 8);
	cout<<"|";
	gotoxy(39, 9);
	cout<<"|";
	gotoxy(39, 10);
	cout<<"|";
	gotoxy(39, 11);
	cout<<"|";
	gotoxy(39, 12);
	cout<<"|";
	gotoxy(39, 13);
	cout<<"|";
	gotoxy(39, 14);
	
}

void text_color(int color){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    }

void gotoxy(int x, int y){
	
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	
}

void ShowConsoleCursor(bool showFlag){
	
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO     cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
    
}	
