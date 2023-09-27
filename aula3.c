int main(int argc, char const *argv[])
{
    float raio, perimentro;
    double Pi=3.14,  area;
    printf("Introduza o Raio da circufrencia: ");
    scanf("%f", &raio);
    area =Pi* raio*raio;
    perimentro-2* Pi*raio;
    printf("Area-%f\nPerimentro = %f\n",area,perimentro);    
}
