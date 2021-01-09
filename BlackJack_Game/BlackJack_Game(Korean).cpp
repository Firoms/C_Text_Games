#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <windows.h> 




void gotoxy(int x, int y)
{
 COORD CursorPosition = { x, y };
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}



int main(void){
	int i; //반 복 
	int helpsco=0;
	int level = 1;   //레벨 
	int levelscore=0;    //목표 점수 
	int card=0;       //뽑은 카드 
	int cardplus=0;  //예비점수 
	int scoreplus=0;  //점수 
	int plascore=0;  //플레이어 총 점수 
	int choice=0;  //플레이어 선택 1또는 2
	int bonusscore=0; //21 보너스 점수 
	 
	srand((unsigned int) time(NULL));

	printf("      ▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n"); 
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧                                                                  ▧\n");
	printf("      ▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧\n");

	
	gotoxy(28,2);
	printf("*서바이벌 블랙잭 게임*");
	Sleep(3000);
	gotoxy(10,5);
	printf("서버이벌 블랙잭 게임을 시작합니다.");
	Sleep(2000);
	gotoxy(10,7);
	printf("얼마나 버틸 수 있는지 도전해보세요!");
	gotoxy(10,9);
	Sleep(2000);
	printf("1은 카드뽑기, 2는 그만 뽑기입니다.");
	Sleep(2000);
	gotoxy(10,12);
	printf("숫자로만 답해주세요! 오류납니다."); 
	Sleep (5000);
	gotoxy(0,5);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,6);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,7);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,8);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,9);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,12);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,15);
	printf("      ▧                                                                  ▧\n");
	Sleep(500);
	
	gotoxy(10,5);
	printf("게임 룰 설명.");
	Sleep(2000);
	gotoxy(10,7);
	printf("라운드마다 목표 점수가 있습니다.");
	gotoxy(10,9);
	Sleep(2000);
	printf("블랙잭 게임의 숫자 합이 목표점수를 넘어야 통과입니다.");
	gotoxy(10,12);
	Sleep(2000);
	printf("블랙잭일 경우 숫자 25~50까지의 점수를 랜덤으로 받습니다.");
	Sleep(2000);
	gotoxy(10,15);
	printf("블랙잭 숫자가 21을 넘을 시 bust, 0점이니 신중히 생각하세요.");
	Sleep (5000);
	gotoxy(0,5);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,6);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,7);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,8);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,9);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,12);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,15);
	printf("      ▧                                                                  ▧\n");
	Sleep(500);
	
	
	while(plascore>=levelscore){
	Sleep(500);
	helpsco=helpsco+2;
	levelscore=level*helpsco;
	gotoxy(10,5);
	printf("%d라운드 목표 점수는 %d점입니다.",level,levelscore);
	Sleep(2000);
	gotoxy(10,7);
	printf("카드를 랜덤으로 뽑겠습니다.(1~11)");
	Sleep(3000);
	for(i=1;i<=5;i++){
	srand((unsigned int) time(NULL));
	card=rand()%10+1;
	gotoxy(10,9+i);
	printf("%d            ",card);
	Sleep(500);
	cardplus=cardplus+card; 
	printf("1(go),2(stop)   ");
	scanf("%d",&choice);
	Sleep(500);
	if(choice==1){
	if(cardplus>21){
			gotoxy(10,16);
			printf("bust이므로 0점입니다.");
			Sleep(2000);
			cardplus=0;
			break;
	}
	else if(cardplus==21){
			srand((unsigned int) time(NULL));
			bonusscore=rand()%25+25;
			gotoxy(10,16);
			printf("블랙잭이므로 %d(25~50)점을 획득합니다.",bonusscore);
			plascore=plascore+bonusscore;
			Sleep(2000);
			break;
}
}
	else if(choice==2){
		if(cardplus>21){
			gotoxy(10,16);
			printf("bust이므로 0점입니다.");
			Sleep(2000);
			cardplus=0;
			break;
		} 
		else if(cardplus==21){
			srand((unsigned int) time(NULL));
			bonusscore=rand()%25+25;
			gotoxy(10,16);
			printf("블랙잭이므로 %d(25~50)점을 획득합니다.",bonusscore);
			plascore=plascore+bonusscore;
			Sleep(2000);
			break;	
		}
		else{
			break;
		}
	}
	else{
		gotoxy(10,16);
		printf("제대로 입력받지 못해 stop합니다.");
		Sleep(2000);
		gotoxy(0,16);
		printf("      ▧                                                                  ▧\n");
		break;
	}	
	
}
	gotoxy(10,17);
	printf("%d점을 획득하셨습니다.",cardplus);
	Sleep(4000);
	plascore=plascore+cardplus;
	level=level+1;
	cardplus=0;
	gotoxy(0,5);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,7);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,10);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,11);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,12);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,13);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,14);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,16);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,17);
	printf("      ▧                                                                  ▧\n");
	Sleep(1000);
	gotoxy(30,9);
	printf("%d 라운드",level);
	gotoxy(30,11);
	printf("플레이어 점수 : %d점",plascore);
	Sleep(5000);
	gotoxy(0,9);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,11);
	printf("      ▧                                                                  ▧\n");
	
}
		gotoxy(10,8);
		printf("목표점수를 넘지 못해 게임이 끝납니다.");
		gotoxy(10,10);
		printf("당신의 점수는 %d점, %d라운드에서 탈락하셨습니다.",plascore,level-1);
		
	
	Sleep(10000000);


}

