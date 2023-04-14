#include <stdio.h>
#include <string.h>

int main(void){
    int len = 0;
    char name[15];
    scanf("%s", name);
    len = strlen(name);

    int time = 0;
    //for(int i=0; str[i] != '\0'; i++) -> string 처음부터 끝까지
    for(int i=0; i<len; i++){
        switch (name[i])
        {
            //ABC
        case 65: 
        case 66:
        case 67:
            time += 3;
            break;
            //DEF
        case 68:
        case 69:
        case 70:
            time += 4;
            break;        
            //GHI
        case 71:
        case 72:
        case 73:
            time += 5;
            break;
            //JKL
        case 74:
        case 75:
        case 76:
            time += 6;
            break;
            //MNO
        case 77:
        case 78:
        case 79:
            time += 7;
            break;
            //PQRS
        case 80:
        case 81:
        case 82:
        case 83:
            time += 8;
            break;
            //TUV
        case 84:
        case 85:
        case 86:
            time += 9;
            break;
            //WXYZ
        case 87:
        case 88:
        case 89:
        case 90:
            time += 10;
            break;
        default:
            break;
        }

    }

    printf("%d\n", time);
    return 0;
}
