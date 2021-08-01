#include <stdio.h>

#define URL "https://github.cuicuiio.com"
#define NAME "张天亮"
#define BOSS "翠翠"
#define DAY 22
#define YEAR 2000
#define MONTH 12

int main()
{
  printf("%s生于%d年%d月%d日\n",NAME,YEAR, MONTH, DAY);
  printf("%s喜欢%s\n", NAME,BOSS);
  printf("%s的网站是%s\n",NAME,URL);

  return 0;
}
