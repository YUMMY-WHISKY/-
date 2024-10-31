#include <stdio.h>
int main() {
    int days; 
    printf("请输入天数：");
    scanf_s("%d", &days);  
    int redEyedCount = 0; 
    int hangCount = 0;     
    while (hangCount < redEyedCount) {
        days++; 
        hangCount = days; 
    }
  #include <stdio.h>
    int main();
    {
        int redEyedCount = 0;
        int days = 5; 
        redEyedCount = days;      
        printf("小镇上有 %d 个红眼睛的人，他们在第 %d 天一起吊死。\n", redEyedCount, days);
        return 0;
    }
    printf("在第 %d 天，所有 %d 个红眼睛的人会吊死。\n", days, redEyedCount);
    return 0;
}
