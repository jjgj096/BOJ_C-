#include <stdio.h>
#include <string.h>

int main(void){
    int i, cnt =0;
    int len;
    char name[1000000];
    scanf("%[^\n]", name); // \n전까지 입력받기 []안에!
    //왜 &name안해도 돌아가는지?
    len = strlen(name); //문자열 길이

    if(len == 1){       //공백 하나만 입력한 경우
        if(name[0]==' '){
            printf("0\n");
            return 0;
        }
    }
    //처음이 이미 공백이 아닌 경우임.
    for(int i=1; i<len-1; i++){
        if(name[i]== ' ') cnt++;
    }

    printf("%d\n", cnt+1); //공백 개수 +1
    return 0;
}