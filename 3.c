#include <stdio.h>
#include <stdlib.h>

struct rect{
    int x;
    int y;
};

int main()
{
    struct rect list[100];
    int array[100][100]={0};
    int count=0;
    int result=0;
    scanf("%d", &count);
    for(int i=0;i<count;i++){
        scanf("%d %d", &list[i].x, &list[i].y);
    }
    for(int i=0;i<count;i++){
        for(int j=list[i].x; j<list[i].x+10; j++){
            for(int k=list[i].y; k<list[i].y+10; k++){
                array[j][k]++;
            }
        }
    }
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            if(array[i][j]!=0)
                result++;
        }
    }
    printf("%d", result);
    
    return 0;
}