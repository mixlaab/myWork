#include<stdio.h>
#include<cs50.h>
#include<string.h>

bool esMayuscula(int letra);

int main(void){
    string name = get_string("Nombre completo: ");
    printf("Hello %s\n", name);
    //bool val = esMayuscula('h');
    //printf("%d\n", val);
    char iniciales[4];
    int j = 0;
    for (int i = 0; i < strlen(name); i++){
        if(esMayuscula(name[i])){
            iniciales[j] = name[i];
            j++;
        }
    }
    iniciales[j] = '\0';
    for (int i = 0; i < 4; i++){
        printf("%c\n",iniciales[i]);
    }
}

bool esMayuscula(int letra){
    bool res;
    if(65 <= letra && letra <= 90){
        res = true;
    }
    else{
        res = false;
    }
    return res;
}
