#include <stdio.h>

typedef struct
{
    char model[25];
    int year;
    int price;
} cars;

int main()
{

    // array of structs = Array where each element contains a struct {}
    //                    Help organize and groups together realted data

    cars car[] = {{"Mustang", 2025, 32000},
                  {"BMW", 2026, 42000},
                  {"Ferrari", 2026, 50000}};

    // printf("%s %d %d\n",car1.model,car1.year,car1.price);
    // printf("%s %d %d\n",car2.model,car1.year,car1.price);
    // printf("%s %d %d\n",car3.model,car1.year,car1.price);

    int number = sizeof(car) / sizeof(car[0]);

    for (int i = 0; i < number; i++)
    {
        printf("%s %d $%d\n", car[i].model, car[i].year, car[i].price);
    }
    return 0;
}