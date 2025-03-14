# include <stdio.h>
int main(){
    float temperatura; 
    int resultado;
    

    printf("Digite a temperatura: \n");
    scanf("%f", &temperatura);

    resultado = temperatura > 32.0 ? 1 : 0;

    if(resultado == 1){
        printf("%.1f °C Temperatura Elevada\n", temperatura);
    } else {
        printf("%.1f °C Temperatura aceitavel\n", temperatura);
    }
    return 0;
}
