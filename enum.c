#include <stdio.h>
#include <string.h>

/* 定义枚举类型 */

enum DAY { MON=0, TUE, WED };

char *dirs[] = { "MON", "TUE", "WED" };//作为映射数组


char mon[] = "MON";//作为输入字符串

enum DAY s2e(char* str)
{
    if(strcmp(str, "MON")==0) return MON;
    if(strcmp(str, "TUE")==0) return TUE;
    if(strcmp(str, "WED")==0) return WED;
    /*...*/
	return 8;
}

void main()

{

    /* 使用基本数据类型声明变量同时对变量赋初值 */

    int x=10, y=20, z=30;



    /* 使用枚举类型声明变量同时对枚举型变量赋初值 */

    enum DAY yesterday = s2e(mon), //可以用于switch-case语句

                        today = TUE,

                   tomorrow = WED;



    printf("%s %s %s \n", dirs[yesterday], dirs[today], dirs[tomorrow]);

}
