#include <stdio.h>

int main()
{
    //二维数组：  五行、三列
	//行代表人：  老大到老五
	//列代表科目：语、数、外

    float a[5][3] =  { { 80, 75, 56 }, { 59, 65, 71 }, { 59, 63, 70 }, { 85, 45, 90 }, { 76, 77, 45 } };
   	
    int i,j,person_low[3] = {0};
    float s=0,lesson_aver[3] = {0};
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0;j < 5; j++)
        {
            s = s + a[i][j];
            if(a[i][j] < 60)
            {
                person_low[i]++;
            }
        }
        lesson_aver[i] = s/5;
        s = 0;
    }
    printf("各科的平均成绩:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%.2f\n", lesson_aver[i]);
	}
		
	printf("各科不及格的人数:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", person_low[i]);
	}
		
	return 0;
}
