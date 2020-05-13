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
	int money = 1000;
	int probability = 0;
	int success = 0;
	int level = 0;
	int sellingprice = 0;
	int buyingprice = 0; 
	int choice = 0; 
	int random = rand()%100;
	int choose = 0;
	int buypick = 100; 
	int ranpro;
	int plus; 
	int lottomoney;
	int lottoper;
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

	
	gotoxy(32,2);
	printf("*프로그램 강화게임*");
	Sleep(3000);
	gotoxy(10,5);
	printf("프로그램 강화게임을 시작합니다.");
	Sleep(2000);
	gotoxy(10,7);
	printf("몇 강 까지 만들 수 있나 도전해보세요!");
	gotoxy(10,9);
	Sleep(2000);
	printf("기본금 1000원이 주어집니다.");
	Sleep(2000);
	gotoxy(10,12);
	printf(" ※선택은 한글,영어없이 숫자로만 선택해야 합니다.※"); 
	gotoxy(10,15);
	printf(" ※프로그램 구매시 소지한 프로그램은 사라집니다.※"); 
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
	
	
	while(money!=1000000000000000){
	
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
		gotoxy(0,4);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,10);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,11);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,13);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,14);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,15);
	printf("      ▧                                                                  ▧\n");
	Sleep(500);
	gotoxy(10,6);
	printf("현재 돈 : %d원      현재 프로그램: %d 강",money,level);
	gotoxy(10,9);
	printf("1. 강화하기(%d%%)   2. 프로그램 사기   3.아이템 상점  4.로또",probability);
	gotoxy(10,12);
	printf("무엇을 하실건가요 (1,2,3으로 선택해주세요)      ");
	scanf("%d", &choice);
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
		gotoxy(0,4);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,10);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,11);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,13);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,14);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,15);
	printf("      ▧                                                                  ▧\n");
	Sleep(500);
	
	if(choice==1 && level==0){
		gotoxy (10,7);
		printf("프로그램이 없습니다. 프로그램을 먼저 구입해주세요!");
		Sleep(3000);
	}
	else if(choice==4){
		gotoxy(10,7);
		printf("얼마를 사용하시겠습니까? (숫자로 입력)    ");
		scanf("%d",&lottomoney);
		if(lottomoney<=money){
			
			srand((unsigned int) time(NULL));
			lottoper=rand()%9;
			srand((unsigned int) time(NULL));
			gotoxy(30,10); 
			printf("~~에 당첨되셨습니다.");
			Sleep(3000);
			gotoxy(10,10);
			if(lottoper==6){
				money=money-lottomoney;
				printf("5배!!!!!");
				money=money+lottomoney*5;
				Sleep(3000);
			}
			else if(lottoper==9){
				money=money-lottomoney;
				printf("10배...");
				money=money+lottomoney*10;
				Sleep(3000);
			}
			else if(lottoper==8){
				money=money-lottomoney;
				printf("2배!");
				money=money+lottomoney*2;
				Sleep(3000);
			}
			else if(lottoper==7){
				money=money-lottomoney;
				printf("3배~~");
				money=money+lottomoney*3;
				Sleep(3000);
			}
			else{
				printf("0배..ㅠㅠ");
				money=money-lottomoney;
				money=money+lottomoney*0;
				Sleep(3000);
			}
			}
		else{
			gotoxy(10,9);
			printf("돈이 부족합니다.");
			Sleep(2000); 
		}
	}
	else if(choice==2017){
	gotoxy(10,8);
	printf("치트 발동!  돈 30000원 추가 !!");
	Sleep(2000);
	money=money+30000;
	}
	else if(choice==3){
		gotoxy(10,6);
			printf("0.나가기");
			gotoxy(10,7);
			printf("1. 2%% 확률 높이기  사기(1000원)");
			gotoxy(10,8);
			printf("2. 5%% 확률 높이기  사기(2000원)");
			gotoxy(10,9);
			printf("3. 10%% 확률 높이기 사기(3500원)");
			gotoxy(10,10);
			printf("4. 강화 성공시 +3강(중복 불가)(5000원)");
			gotoxy(10,11);
			printf("5. 강화 성공시 +5강(중복 불가)(10000원)");
			gotoxy(10,12); 
			printf("무엇을 구매할까요?    ");
			scanf("%d",&buypick);
			Sleep(500);
				gotoxy(0,6);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,7);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,8);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,9);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,10);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,11);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,12);
	printf("      ▧                                                                  ▧\n");
				if(buypick==1&&money>=1000){	
				gotoxy(10,9);
					printf("확률 + 2%%");
					Sleep(2000);
					money=money-1000;
					probability = probability+2;
				}
				else if(buypick==0){
				}
				else if(buypick==2&&money>=2000){
					gotoxy(10,9);
					printf("확률 + 5%%");
					Sleep(2000);
					money=money-2000;
					probability = probability+5;
				}
				else if(buypick==3&&money>=3500){
					gotoxy(10,9);
					printf("확률 + 10%%");
					Sleep(2000);
					money=money-3500;
					probability = probability + 10;
				}
					else if(buypick==4&&money>=5000){
					gotoxy(10,9);
					printf("강화 성공시 +3강");
					Sleep(2000);
					money=money-5000;
					plus=1;
				}
				else if(buypick==5&&money>=10000){
					gotoxy(10,9);
					printf("강화 성공시 +5강");
					Sleep(2000);
					money=money-10000;
					plus=2;
				}
				else{
					gotoxy(10,9);
					printf("다시 선택해 주세요\n\n");
						Sleep(2000);
				}
		}
	else if(choice==1 && level!=0){
		if(random<=probability){
			gotoxy(10,5);
			printf("강");
			Sleep(500);
			gotoxy(10,6);
			printf("화");
			Sleep(500);
			gotoxy(10,7);
			printf("중");
			Sleep(500);
			gotoxy(10,8);
			printf("강화중");
			Sleep(1000);
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
			srand((unsigned int) time(NULL));
			random = rand()%100;
			gotoxy(10,8);
			printf("강화에");
			Sleep(500);
			gotoxy(50,8);
			printf("하셨습니다");
			Sleep(1000);
			gotoxy(30,8);
			printf("성공!!!");
			Sleep(3000);
			if(plus==1){
				level= level+3;
			probability = 100 - level;
	gotoxy(10,12);
	printf("강화 등급이 3단계 올라갑니다");
	plus=0;
			} 
			else if(plus==2){
				level= level+5;
			probability = 100 - level;
	gotoxy(10,12);
	printf("강화 등급이 5단계 올라갑니다");
			plus=0;
			} 
			else{
			level= level+1;
			probability = 100 - level;
	gotoxy(10,12);
	printf("강화 등급이 1단계 올라갑니다");
	}
	Sleep(2000);
	sellingprice=level*10;
	money=money+sellingprice;
	gotoxy(10,14);
	printf("%d원을 획득하셨습니다.",sellingprice); 
	Sleep(2000);
		}
		else{
			gotoxy(10,5);
			printf("강");
			Sleep(500);
			gotoxy(10,6);
			printf("화");
			Sleep(500);
			gotoxy(10,7);
			printf("중");
			Sleep(500);
			gotoxy(10,8);
			printf("강화중");
			Sleep(1000);
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
			srand((unsigned int) time(NULL));
			random = rand()%100;
			gotoxy(10,8);
			printf("강화에");
			Sleep(500);
			gotoxy(50,8);
			printf("하셨습니다");
			Sleep(1000);
			gotoxy(30,8);
			printf("실패....");
			Sleep(3000); 
			level= level-5; 
			probability = 100 - level;
	gotoxy(10,12);
	printf("강화 등급이 5단계 내려갑니다...");
		}
	}

	else if(choice==2){
			gotoxy(10,6);
			printf("0.나가기");
			gotoxy(10,7);
			printf("1. 1강 프로그램 사기(100원)");
			gotoxy(10,8);
			printf("2. 10강프로그램 사기(300원)");
			gotoxy(10,9);
			printf("3. 20강 프로그램 사기(1000원)");
			gotoxy(10,10);
			printf("4. 30강 프로그램 사기(3000원)");
			gotoxy(10,11);
			printf("5. 30~60강 프로그램 사기(10000원)");
			gotoxy(10,12); 
			printf("무엇을 구매할까요?    ");
			scanf("%d",&buypick);
			Sleep(500);
				gotoxy(0,6);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,7);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,8);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,9);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,10);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,11);
	printf("      ▧                                                                  ▧\n");
	gotoxy(0,12);
	printf("      ▧                                                                  ▧\n");
	if(buypick==1&&money>=100){	
				gotoxy(10,9);
					printf("1강 프로그램을 구매하였습니다.");
					Sleep(2000);
					money=money-100;
					level=1;
					probability = 100 - level;
				}
				else if(buypick==0){
				}
				else if(buypick==2&&money>=300){
					gotoxy(10,9);
					printf("10강 프로그램을 구매하였습니다.");
					Sleep(2000);
					money=money-300;
					level=10;
					probability = 100 - level;
				}
				else if(buypick==4&&money>=3000){
					gotoxy(10,9);
					printf("30강 프로그램을 구매하였습니다.");
					Sleep(2000);
					money=money-3000;
					level=30;
					probability = 100 - level;
					}
					else if(buypick==5&&money>=10000){
					gotoxy(10,9);
					srand((unsigned int) time(NULL));
					ranpro=rand()%30+30;
					printf("%d강 프로그램을 구매하였습니다.",ranpro);
					Sleep(2000);
					money=money-10000;
					level=ranpro;
					probability = 100 - level;
				}
				else if(buypick==3&&money>=1000){
					gotoxy(10,9);
					printf("20강 프로그램을 구매하였습니다.");
					Sleep(2000);
					money=money-1000;
					level=20;
					probability = 100 - level;
				}
				else{
					gotoxy(10,9);
					printf("다시 선택해 주세요\n\n");
						Sleep(2000);
				}
		}
	else{
		gotoxy (10,7);
		printf("다시 선택해 주세요! 선택 할 수 없습니다!");
		Sleep(3000);
	}		
		
}
printf("승리하셨습니다."); 
return 0;
}
