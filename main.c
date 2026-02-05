#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strrev(char* str){
    int len= strlen(str);
    for (int i=0; i<len/2; i++){
        char temp= str[i];
        str[i]= str[len-1-i];
        str[len-1-i]= temp;
    }
}

char *decimaltobinary(int decimal){
    char *binary= (char*)malloc(33);
    int i=0;
    while (decimal){
        binary[i++]= '0'+ (decimal & 1);
        decimal>>=1;
    }
    binary[i]='\0';
    strrev(binary);
    return binary;
}

int main(){
    int ch;
    while (1){
        printf("1. Decimal to Binary\n");
        printf("2. Binary to Decimal\n");
        printf("3. Decimal to Octal\n");
        printf("4. Octal to Decimal\n");
        printf("5. Hexadecimal to binary\n");
        printf("6. Binary to Hexadecimal\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        if (ch==7){
            printf("Goodbye!\n");
            break;
        }
        char input[100];
        switch(ch){
            case 1:
                printf("Enter a decimal number: ");
                scanf("%s", &ch);
                char *result= decimaltobinary(ch);
                printf("Decimal to Binary: %s\n", result);
                free(result);
                break;
        }
    }
}