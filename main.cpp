#include <iostream>
#include<graphics.h>//EasyX的头文件
//EasyX是C++编写的函数库，用于实现图片显示、声音读取 
//run this program using the console pauser or add your own getch, system("pause") or input loop
int menuSelect;

int main(int argc, char** argv) 
{
	//初始化函数，创建窗口
	initgraph(800,600); 
	char *str="开始游戏";
	char *str_game_opt="游戏设置";
	char *str_game_help="帮助";
	char *str_game_exit="退出游戏" ;
	RECT rect_value={200,120,450,170};
	RECT rect_game_opt={200,170,450,220};
	RECT rect_game_help={200,220,450,270};
	RECT rect_game_exit={200,270,450,320};
	
	setfillcolor(BLUE);
	
	//创建菜单：绘制矩形（用函数rectangle）
	rectangle(200,120,450,170); 
	fillrectangle(200,120,450,170);
	drawtext(str,&rect_value,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
	
	rectangle(200,170,450,220);
	fillrectangle(200,170,450,220);
	drawtext(str_game_opt,&rect_game_opt,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
	
	rectangle(200,220,450,270);
	fillrectangle(200,220,450,270);
	drawtext(str_game_help,&rect_game_help,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
	
	rectangle(200,270,450,320);
	fillrectangle(200,270,450,320);
	drawtext(str_game_exit,&rect_game_exit,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
	
	while(1);
	
	return 0;
}
	
	
	

