/*****************************************************************************************************************
                            ROAD RUSH PROGRAMING FUNDAMENTAL LAB PROJECT
							TO : SIR UMAIR BABER
							BY:

							WALEED ASHRAF : BSEF12M515
							HASSAN TARIQ  : BSEF12M548
							HAIDER ALI    : BSEF12M524

 WE RESERVE ALL COPY RIGHTS OF THIS PROJECT,ANY ONE FOUND USING IT IN A ILLEGAL WAY OR IN ANY EDITING WOULD
 BE RESPONSIBLE OF HIS ACTIONS.

*****************************************************************************************************************/



//*****************************************************************************************************************

//                                      INCLUDES ALL THE NECESSARY HEADER FILES

//*****************************************************************************************************************


#include <iostream>
#include <cctype>
#include <cmath>
#include <conio.h>
#include <Windows.h>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <MMSystem.h>
#include<fstream>


#pragma comment(lib, "winmm.lib")
#define KB_LEFT 75
#define KB_RIGHT 77
#define KB_ESCAPE 27
#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGREY 7
#define DARKGREY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15
#define BLINK 128

using namespace std;

void gotoxy(int , int);
void loading();
void gameend();
void name();
void level();
void menubar();
void start1(int & );
void life(int &health );


int score=0;
int wait=0;
int x=45014;
char player[15];
int colour=16;
int highest=0;
	


//*****************************************************************************************************************

//           MAIN FUNCTOIN WHICH CALLS OTHER FUNCTIONS IN IT i.e GAME STARTING & GAME ENDING

//*****************************************************************************************************************

int main()										// start the main function
{
	//system("color 5b");
	loading();
	name();
	menubar();

	
	
	//gotoxy(0,0);
	return 0;
}

//*****************************************************************************************************************

//                      THIS FUNCTIONS CREAT 2-D ARRAY TO SHOW GAME NAME

//*****************************************************************************************************************

void loading()
{
	

	for(colour=0;colour<16;colour++)
	{
		if(colour==15)
		{
			PlaySound(TEXT("loading2.WAV"), NULL, SND_FILENAME);
			system("cls");
		}
	

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colour);
		

	for(int i=0;i<7;i++)
		cout<<"************************************************************"<<endl;
	    cout<<endl;
		cout<<"       |||///////         "<<endl;
		cout<<"       |||       //        "<<endl;
		cout<<"       |||       ///    ooooo      aa       DDD         "<<endl;
		cout<<"       |||       ////  o     o    a  a      D  D         "<<endl;
		cout<<"       |||       ///   o     o   aaaaaa     D   D         "<<endl;
		cout<<"       |||       //    o     o  a      a    D  D         "<<endl;
		cout<<"       |||//////        ooooo  a        a   DDD         "<<endl;
		cout<<"       ||| \\\\         "<<endl;
		cout<<"       |||  \\\\       U    U   sssssss   H     H         "<<endl;
		cout<<"       |||   \\\\      U    U   ss        H     H         "<<endl;
		cout<<"       |||    \\\\     U    U   sssssss   HHHHHHH         "<<endl;
		cout<<"       |||     \\\\    UuuuuU        ss   H     H         "<<endl;
	    cout<<"       |||      \\\\   UUUUUU   sssssss   H     H         "<<endl<<endl;
		cout<<"                                                  LOADING..."<<endl<<endl;

		for(int i=0;i<7;i++)
		cout<<"***********************************************************"<<endl;
		cout<<endl;

		Sleep(50);

		if(colour!=14)
		{
		system("cls");
		}
	}
    


	system("cls");

}

//*****************************************************************************************************************

//                  THIS FUNCTION CREAT 2-D ARRAY AND ASKS FOR PLAYER NAME

//*****************************************************************************************************************

void name()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 20);
	

	for(int n=12,i=0,j=59,k=29,l=0,c=0;n>0;i++,j--,k--,l++,n--,c++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
		
			for(int p=0;p<60;p++)
			{
				gotoxy(p,i);
				cout<<"*";
			    
				
			}
	
			for(int q=0;q<30;q++)
			{
				gotoxy(j,q);
				cout<<"*";
				
				
			}

			for(int r=58;r>0;r--)
			{
				gotoxy(r,k);
				cout<<"*";
				
			}

			for(int s=29;s>0;s--)
			{
				gotoxy(l,s);
				cout<<"*";
				
			}
	}


	gotoxy(20,14);
	cout<<"ENTER YOUR NAME";
	gotoxy(25,15);
	cin.getline(player,20);
	

}

//*****************************************************************************************************************

//           THIS FUNCTION CREAT THE MAIN MENU IN 2-D AND LET USER TO CHOSE DESIRED OPTION

//*****************************************************************************************************************


void menubar()
{

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1000);
	
	const int sizerow=30;
	const int sizecol=60;
	
	char box[sizerow][sizecol];

	system("cls");
	for(int i=0;i<30;i++)
	{
		for(int j=0;j<60;j++)
		{
			box[i][j]=' ';
		}
	}

	for(int j=0;j<60;j++)
	{
		for(int i=0;i<30;i++)
		{
			box[i][j]='*';
		}
		j+=58;
	}

	for(int i=0;i<30;i++)
	{
		for(int j=0;j<60;j++)
		{
			box[i][j]='*';
		}
		i+=28;
	}
	char a[38]={"----------------MENU-----------------"};
	char b[23]={"1#: START THE GAME"};
	char c[17]={"2#: INSTRUCTION"};
	char d[11]={"3#: EXIT "};

	for(int i=13;i<14;i++)
	{
		for(int j=12,k=0;j<50;j++,k++)
		{
		   box[i][j]=a[k];
		}
		cout<<endl;
	}
	for(int i=14;i<15;i++)
	{
		for(int j=20,k=0;j<43;j++,k++)
		{
		   box[i][j]=b[k];
		}
		cout<<endl;
	}
	for(int i=15;i<16;i++)
	{
		for(int j=20,k=0;j<37;j++,k++)
		{
		   box[i][j]=c[k];
		}
		cout<<endl;
	}
	for(int i=16;i<17;i++)
	{
		for(int j=20,k=0;j<31;j++,k++)
		{
		   box[i][j]=d[k];
		}
		cout<<endl;
	}

	for(int i=0;i<30;i++)
	{
		for(int j=0;j<60;j++)
		{
			cout<<box[i][j];
		}
		cout<<endl;
	}


	int pressB=0;
	pressB=_getch();
	while(pressB)
	{
			if(pressB==49)
		 {	 

			 system("cls");
			 level();
			 
		 }
		 else if(pressB==50	)
		 {
			 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);

			 system("cls");
			 cout<<"***********************************************************"<<endl;
			 cout<<endl<<endl<<endl;
			 cout<<"-----------------------------------------------------------"<<endl;
			 cout<<"                    INSTRUCTIONS                          "<<endl;
			 cout<<"-----------------------------------------------------------"<<endl;
			 cout<<" 1 :- USE ARROW LEFT AND ARROW RIGHT TO MOVE YOUR CAR LEFT"<<endl;
			 cout<<"      AND RIGHT RESPECTIVELY."<<endl<<endl;
			 cout<<" 2 :- YOU HAVE TO SAVE YOUR CAR FROM DIFFERENT OBJECTCS AND"<<endl;
			 cout<<"      HURDLES COMING ON THE ROAD"<<endl<<endl;
			 cout<<" 3 :- YOUR LIFE AT THE START OF GAME IS 3 "<<endl<<endl;
			 cout<<" 4 :- WITH EACH COLLISION LIFE WOULD BE DECREASED BY 1 "<<endl<<endl;
			 cout<<" 5 :- GAME ENDS WHEN LIFE IS 0 "<<endl<<endl;
			 cout<<" 6 :- YOUR SCORE INCREASE WITH TIME"<<endl<<endl;
			 cout<<" 7 :- REMEMBER! WHEN YOU RACE IN REAL LIFE,GO TO YOUR  "<<endl;
			 cout<<"      LOCAL TRACK AND ALWAY WEAR YOUR SEAT BELT!"<<endl<<endl;
			 cout<<endl<<endl<<endl;
			 cout<<"-------------PRESS 1 TO START THE GAME----------------------"<<endl;
			 cout<<"-------------OR ANY OTHER KEY TO EXIT-----------------------"<<endl;
			 cout<<endl<<endl;
			 cout<<"***********************************************************"<<endl;

			  PlaySound(TEXT("instructions.WAV"), NULL, SND_FILENAME);

			 pressB=_getch();
			 if(pressB==49)
			 {	 system("cls");
			 level();
			 }
			 else
			 {
				 system("cls");
			 for(int i=0;i<11;i++)
				 cout<<"************************************************************"<<endl;
			 cout<<endl;
			 cout<<"             YOU PRESSED THE WRONG KEY!                   "<<endl<<endl;
			 cout<<"                     GAME END                            "<<endl<<endl;

			 for(int i=0;i<11;i++)
				 cout<<"************************************************************"<<endl;
			 exit(0);
			 }
		 }
		 else if(pressB==KB_ESCAPE || pressB==51)
		 {
			 system("cls");
			 for(int i=0;i<11;i++)
				 cout<<"************************************************************"<<endl;
			 cout<<endl;

			 cout<<"                      GAME END                             "<<endl<<endl;

			 for(int i=0;i<11;i++)
				 cout<<"************************************************************"<<endl;

			 exit(0);
		 }
		 else
		 {
			 system("cls");
			 for(int i=0;i<11;i++)
				 cout<<"************************************************************"<<endl;
			 cout<<endl;

			 cout<<"            YOU PRESSED THE WRONG KEY!                    "<<endl<<endl;
			 cout<<"                    GAME END                             "<<endl<<endl;

			 for(int i=0;i<11;i++)
				 cout<<"************************************************************"<<endl;
			 exit(0);
		
		 }
		break;
	}
}

//*****************************************************************************************************************

//            THIS FUNCTION ASKS USER TO CHOSE THE DESIRED DIFFICULTY LEVEL OF THE GAME

//*****************************************************************************************************************

void level()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1000);
	int health = 3;

	const int sizerow=30;
	const int sizecol=60;
	
	char box1[sizerow][sizecol];

	system("cls");
	for(int i=0;i<30;i++)
	{
		for(int j=0;j<60;j++)
		{
			box1[i][j]=' ';
		}
	}

	for(int j=0;j<60;j++)
	{
		for(int i=0;i<30;i++)
		{
			box1[i][j]='*';
		}
		j+=58;
	}

	for(int i=0;i<30;i++)
	{
		for(int j=0;j<60;j++)
		{
			box1[i][j]='*';
		}
		i+=28;
	}
	char o[38]={"SELECT THE LEVEL YOU WANT TO PLAY"};
	char p[18]={"         1# :EASY"};
	char q[20]={"         2# :MEDIUM"};
	char r[19]={"         3# :HARD"};

	for(int i=13;i<14;i++)
	{
		for(int j=12,k=0;j<50;j++,k++)
		{
		   box1[i][j]=o[k];
		}
		cout<<endl;
	}
	for(int i=14;i<15;i++)
	{
		for(int j=12,k=0;j<30;j++,k++)
		{
		   box1[i][j]=p[k];
		}
		cout<<endl;
	}
	for(int i=15;i<16;i++)
	{
		for(int j=12,k=0;j<32;j++,k++)
		{
		   box1[i][j]=q[k];
		}
		cout<<endl;
	}
	for(int i=16;i<17;i++)
	{
		for(int j=12,k=0;j<31;j++,k++)
		{
		   box1[i][j]=r[k];
		}
		cout<<endl;
	}

	for(int i=0;i<30;i++)
	{
		for(int j=0;j<60;j++)
		{
			cout<<box1[i][j];
		}
		cout<<endl;
	}
	Sleep(1000);

	int presskey=0;
	presskey=_getch();
	while(presskey)
	{
			if(presskey==49)
		 {	 
			 system("cls");
			 wait=100;
			 start1(health);
			 
		 }
			else if(presskey==50)
			{
				system("cls");
				wait=50;
				start1(health);
			}

			else if(presskey==51)
			{
				system("cls");
				wait=10;
				start1(health);
			}

			else
			{
				 {
				 system("cls");
			 for(int i=0;i<11;i++)
				 cout<<"************************************************************"<<endl;
			 cout<<endl;
			 cout<<"             YOU PRESSED THE WRONG KEY!                   "<<endl<<endl;
			 cout<<"                     GAME END                            "<<endl<<endl;

			 for(int i=0;i<11;i++)
			 {
				 cout<<"************************************************************"<<endl;
			 exit(0);
				 }
			}
			}
	}
	}

//*****************************************************************************************************************

//           THIS FUNCTION CREAT THE HEALT LEVEL OF USER AND CALL THE START FUNCTION

//*****************************************************************************************************************

void life(int &health)
{ 	health--;
	start1(health);

}

//*****************************************************************************************************************

//      THIS FUNCTION CONTROLS ALL THE WORKING DURING PLAY TIME AND RUN UNTIL HEALTH IS ZERO

//*****************************************************************************************************************

void start1(int &health)

{ 

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1000);

	int posx=20;
	int kb_code=0;
	
	if(health<=0)
	{
		gameend();
	}


	for(int i=0;i<30;i++)
	{
	  gotoxy(0,i);
	  cout<<"*";
	 gotoxy(39,i);
	  cout<<"*";

	}
	for(int i=0;i<29;i++)
	{
		gotoxy(1,i);
		cout<<")";
		gotoxy(38,i);
		cout<<"(";
	   i++;
	}



	for(int i=0;i<40;i++)
	{
		gotoxy(i,29);
		cout<<"*";
		gotoxy(i,0);
		cout<<"*";

	}


	gotoxy(20,26);
	cout<<"0";
	gotoxy(19,27);
	cout<<"|";
	gotoxy(21,27);
	cout<<"|";
	gotoxy(20,28);
	cout<<"0";
	int random=0;
	random=1+rand()%31;
	random=2+random;
	int random1=0; 
    random1= 1+rand()%31;
	random1= 2+random1;
	int random2=0;
	random2= 1+rand()%31;
	random2=random2+2;

	int j=0;
	int j1=0;
	int j2=0;
	int hurdle=0;
	int hurdle1=0;
	unsigned seed=time_t(0);
	srand(seed);

	gotoxy(42,2);
	cout<<"Player : ";
	gotoxy(51,2);
	cout<<player;
	gotoxy(42,3);
	cout<<"Score : ";
	
	
	 
	
	
	for(int i=1; i<29;i++)
	{
	hurdle++,hurdle1++;


	 score++;
	 gotoxy(50,3);
	 cout<<score;
	
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
	  gotoxy(random,i);
	  cout<<"===";
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1002);


	  if(hurdle>0)
	  {
		  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
	  gotoxy(random1,hurdle);
	  cout<<"===";
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1000);
	  }
	  if(hurdle1>0)
	  {
		 gotoxy(random2,hurdle1);
		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 170);
	  cout<<"===";
	  }
	  Sleep(wait);
	  gotoxy(random,i);
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1000);
	  cout<<"   ";

	  if(hurdle>0)
	  {
	  gotoxy(random1,hurdle);
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1000);
	  cout<<"   ";
	  }
	  if(hurdle1>0)
	  {
	  gotoxy(random2,hurdle1);
	  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1000);
	  cout<<"   ";
	  }



	  if(i==28)
	  {
		  random=1+rand()%32;
		  random=2+random;
		  i=0;
	  }
	  if((hurdle)==28)
	  {
		  hurdle=0;
		  random1=1+rand()%32;
		  random1=2+random1;
		
		  
	  }

	  if((hurdle1)==28)
	  {
		  hurdle1=0;
		  random2=1+rand()%32;
		  random2=2+random;
	    
		  
	  }
		   if (_kbhit())
      {
            kb_code = _getch();

            switch (kb_code)
            {
				
                case KB_RIGHT:
				
				
					
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1000);
			  gotoxy(posx,26);
	          cout<<" ";

	          gotoxy(posx-1,27);
	          cout<<" ";
			  
	          gotoxy((posx+1),27);
	          cout<<" ";
	          gotoxy(posx,28);
	          cout<<" ";
			  posx+=3;

			 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1000);
			  gotoxy(posx,26);
	          cout<<"0";

	          gotoxy((posx-1),27);
	          cout<<"|";
			  
	          gotoxy((posx+1),27);
	          cout<<"|";
	          gotoxy(posx,28);
	          cout<<"0";
				break;
		
			 case KB_LEFT:
					
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1000);
			  gotoxy(posx,26);
	          cout<<" ";
	          gotoxy(posx-1,27);
	          cout<<" ";
	          gotoxy(posx+1,27);
	          cout<<" ";
	          gotoxy(posx,28);
	          cout<<" ";
			  posx-=3;

			  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1000);
			  gotoxy(posx,26);
	          cout<<"0";

	          gotoxy(posx-1,27);
	          cout<<"|";
			  
	          gotoxy(posx+1,27);
	          cout<<"|";
	          gotoxy(posx,28);
	          cout<<"0";
				break;

			}
		   }

	 
		   if(posx<=2|| posx>=36)
		   { 
		// PlaySound(TEXT("C:\\ringout.WAV"), NULL, SND_FILENAME);
		 system("cls");

		 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1000);

		 for(int m=0;m<13;m++)
			 {
				 for(int n=0;n<40;n++)
				 {
					 gotoxy(n,m);
					 cout<<"*";
				 }
			 }

		  gotoxy(10,15);
		 cout<<" YOUR HEALT IS : "<<health-1<<endl;	

			  for(int m=17;m<30;m++)
			 {
				 for(int n=0;n<40;n++)
				 {
					 gotoxy(n,m);
					 cout<<"*";
				 }
			 }
				 
		  Sleep(1000);
		    system("cls");

		life(health);
		 }

	 	     
			 for(int j=0; j<3;j++)
			 
			 { 
				 if((random+j==posx && i==26) || (random+j==(posx-1) && i==27) || (random+j==(posx+1) && i==27) ||(random+j==posx && (hurdle)==26) || (random+j==(posx-1) && hurdle==27) || (random+j ==(posx+1) && (hurdle)==27)||(random+j==posx && (hurdle1)==26) || (random +j==(posx-1) && (hurdle1)==27) || (random +j==(posx+1) && (hurdle1)==27))
	           { 
		    PlaySound(TEXT("ringout.WAV"), NULL, SND_FILENAME);
				   
		     system("cls");
			 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1000);

			 for(int m=0;m<13;m++)
			 {
				 for(int n=0;n<40;n++)
				 {
					 gotoxy(n,m);
					 cout<<"*";
				 }
			 }

			 gotoxy(10,15);
		  cout<<" YOUR HEALT IS : "<<health-1<<endl;

			  for(int m=17;m<30;m++)
			 {
				 for(int n=0;n<40;n++)
				 {
					 gotoxy(n,m);
					 cout<<"*";
				 }
			 }

		  
		 
		  Sleep(1000);
         system("cls");
          life(health);
		
				 }
			 }
		
	
	  	
		 for(int j=0;j<3;j++)
		 {

		 if((random1+j==posx && i==26) || (random1+j==(posx-1) && i==27) || (random1+j==(posx+1) && i==27) || (random1+j==posx && (hurdle)==26) || (random1+j==(posx-1) && (hurdle)==27) || (random1+j==(posx+1) && (hurdle)==27) || (random1+j==posx && (hurdle1)==26) || (random1 +j==(posx-1) && (hurdle1)==27) || (random1 +j==(posx+1) && (hurdle1)==27))
	 { 
		 PlaySound(TEXT("ringout.WAV"), NULL, SND_FILENAME);
		  system("cls");
		  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1000);

		   for(int m=0;m<13;m++)
			 {
				 for(int n=0;n<40;n++)
				 {
					 gotoxy(n,m);
					 cout<<"*";
				 }
			 }

		   gotoxy(10,15);
		  cout<<" YOUR HEALT IS : "<<health-1<<endl;

			  for(int m=17;m<30;m++)
			 {
				 for(int n=0;n<40;n++)
				 {
					 gotoxy(n,m);
					 cout<<"*";
				 }
			 
			  }
		   Sleep(1000);
		  system("cls");
		   
		
		life(health);
		 
		 }
	 }
	
		 for(int j=0; j<3; j++)
		 {
		 if((random2+j==posx && i==26) || (random2+j==(posx-1) && i==27) || (random2+j==(posx+1) && i==27) || (random2+j==posx && (hurdle)==26) || ( random2 +j==(posx-1) && (hurdle)==27)|| (random2+j==(posx+1) && (hurdle)==27) || (random2 +j==posx && (hurdle1)==26) || (random2+j==(posx-1) && (hurdle1)==27) || (random2+j==(posx+1) && (hurdle1)==27))
	 { 	
		PlaySound(TEXT("ringout.WAV"), NULL, SND_FILENAME);
		  system("cls");
		  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1000);

		   for(int m=0;m<13;m++)
			 {
				 for(int n=0;n<40;n++)
				 {
					 gotoxy(n,m);
					 cout<<"*";
				 }
			 }

		   gotoxy(10,15);
		  cout<<" YOUR HEALT IS : "<<health-1<<endl;

			  for(int m=17;m<30;m++)
			 {
				 for(int n=0;n<40;n++)
				 {
					 gotoxy(n,m);
					 cout<<"*";
				 }
			 }

		  
		  Sleep(1000);
	      system("cls");
		 
		life(health);

		 }
		 }
	 }



}

//*****************************************************************************************************************

//     THIS FUNCTION IS USED ALLOVER, TO GOTO FROM ONE POINT TO ANOTHER,TO SET CURSER POSITION

//*****************************************************************************************************************

void gotoxy(int x,int y)
{
  HANDLE hConsole;
  COORD cursorLoc;
  std::cout.flush();
  cursorLoc.X = x;
  cursorLoc.Y = y;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleCursorPosition(hConsole, cursorLoc);
}

//*****************************************************************************************************************

//                 THIS FUNCTION ENDS THE GAME WHEN HEALTH REACH ZERO VALUE

//*****************************************************************************************************************

void gameend()
{

	    PlaySound(TEXT("gameover.WAV"), NULL, SND_FILENAME);



	for(int n=13,i=0,j=59,k=29,l=0;n>0;i++,j--,k--,l++,n--)
	{
		
			for(int p=0;p<60;p++)
			{
				gotoxy(p,i);
				cout<<"*";
			    
				
			}
	
			for(int q=0;q<30;q++)
			{
				gotoxy(j,q);
				cout<<"*";
				
				
			}

			for(int r=58;r>0;r--)
			{
				gotoxy(r,k);
				cout<<"*";
				
			}

			for(int s=29;s>0;s--)
			{
				gotoxy(l,s);
				cout<<"*";
				
			}
	}



	gotoxy(23,13);
	cout<<"GAME END!";
	gotoxy(23,14);
	cout<<"YOUR SCORE IS:"<<score;
	gotoxy(23,15);
	cout<<"HIGHEST SCORE IS:";
	ofstream file("data.txt",ios::app)	;
	if(!file)
	{
		cerr<<"not"<<endl;
		exit(0);
	}

	file << score;
	file<<endl;
	file.close();
    int a=0;
	ifstream hassan("data.txt");
	if(!hassan)
	{
		cerr<<"not"<<endl;
		exit(0);
	}

	while(!hassan.eof())
	{	 hassan>>a;
		if(a > score)
		{
		  highest = a;
		}
		else
		{
			highest = score;
		}
	}
	cout <<x;
	hassan.close();
	

	Sleep(1000);
	score=0;
	menubar();

	

}