#include <stdio.h>
#include <stdlib.h>

void guardar(int paso, int n, int d, int divisores, int veces, int producto, int sn, int sd)
{
    FILE* fichero;
    fichero = fopen("Prueba.txt", "a+");
    switch(paso)
    {
        case (1): ;
            char cadena1 [] = "===SIMPLIFICACIÓN DE FRACCIONES===\n\n";
            char cadena2 [] = "Fracción:";
            char cadena3 [] = "/";
            char cadena4 [] = "\n";
            //archivo.writelines("===SIMPLIFICACIÓN DE FRACCIONES===\n\n");
            //archivo.writelines("Fracción:"+ str(n)+ "/"+ str(d)+ "\n");

            fprintf (fichero, "%s%s%d%s%d%s", cadena1, cadena2, n, cadena3, d, cadena4);
            fclose(fichero);

            break;
        case (2): ;
            char cadenaA [] = "╔═════════╦══════════════════╦══════════╗\n";
            char cadenaB [] = "║ Divisor ║ Veces que se usó ║ Producto ║\n";
            char cadenaC [] = "╠═════════╬══════════════════╬══════════╣\n";

            //archivo.writelines("╔═════════╦══════════════════╦══════════╗\n");
            //archivo.writelines("║ Divisor ║ Veces que se usó ║ Producto ║\n");
            //archivo.writelines("╠═════════╬══════════════════╬══════════╣\n");
            ////archivo.writelines("╠123456789╬123456789012345678╬1234567890╣");

            fprintf (fichero, "%s%s%s", cadenaA, cadenaB, cadenaC);
            fclose(fichero);

            break;
        case (3): ;
            int divisoresA;
            int vecesA;
            int productoA;
            char linea [] = "║";
            char espacio [] = " ";
            char linea_final [] = "\n";

            char cadenaA1 [10];// = divisores + '0';//str(divisores)
            sprintf(cadenaA1, "%d", divisores);
            char cadenaA2 [10]; //= veces + '0';    //str(veces)
            sprintf(cadenaA2, "%d", veces);
            char cadenaA3 [10]; //= producto +'0';  //str(producto)
            sprintf(cadenaA3, "%d", producto);

            int A1 = strlen(cadenaA1);      //len(str(divisores))
            int A2 = strlen(cadenaA2);      //len(str(veces))
            int A3 = strlen(cadenaA3);      //len(str(producto))

            if (A1 < 9)
            {
                divisoresA = 9 - (A1);
            }
            else
            {
                divisoresA = 0;
            }
            if ((A2) < 18)
            {
                vecesA = 18 - (A2);
            }
            else
            {
                vecesA = 0;
            }
            if (A3 < 10)
            {
                productoA = 10 - (A3);
            }
            else
            {
                productoA = 0;
            }
            fprintf(fichero, "%s%s", linea, cadenaA1);
            //archivo.writelines("║"+str(divisores));
            for (int A=0; A < divisoresA; A++)
            {
                fprintf(fichero, "%s", espacio);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s", linea, cadenaA2);
            //archivo.writelines("║"+ str(veces));
            for (int B=0; B < vecesA; B++)
            {
                fprintf(fichero, "%s", espacio);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s", linea, cadenaA3);
            //archivo.writelines("║"+ str(producto));
            for (int C=0; C < productoA; C++)
            {
                fprintf(fichero, "%s", espacio);
                //archivo.writelines(" ");
            }
            fprintf(fichero, "%s%s", linea, linea_final);
            //archivo.writelines("║\n");
            fclose(fichero);

            break;
        case (4): ;
            char cadenaB1 [10]; // = sn + '0';//str(sn)
            sprintf(cadenaB1, "%d", sn);
            char cadenaB2 [10]; //= sd + '0';//str(sd)
            sprintf(cadenaB2, "%d", sd);

            char inicio [] = "╚═════════╩══════════════════╩══════════╝\n\n";
            char fracc [] = "Fraccion resultante:";
            char diagonal [] = "/";
            char lineas_finales [] = "\n\n";

            fprintf(fichero, "%s%s%s%s%s%s", inicio, fracc, cadenaB1, diagonal, cadenaB2, lineas_finales);
            //archivo.writelines("╚═════════╩══════════════════╩══════════╝\n\n");
            //archivo.writelines("Fracción resultante:"+ str(sn)+ "/"+ str(sd)+ "\n\n");
            fclose(fichero);

            break;
    }
}
int main()
{
    int cero = 0;
    int uno = 1;
    int dos = 2;
    int tres = 3;
    int cuatro = 4;

    int n = 5;
    int d = 10;

    guardar(uno,n,d,cero,cero,cero,cero,cero);//guarda la primera parte
    system("pause");//correcto

    guardar(dos,cero,cero,cero,cero,cero,cero,cero);//guarda la cabecera de la tabla
    system("pause");//correcto

    int divisoresA = 5;
    int vecesA = 1;
    int productoA = 5;

    guardar(tres,cero,cero,divisoresA,vecesA,productoA,cero,cero);//guarda el contenido de la tabla
    system("pause");//error

    int sn = 1;
    int sd = 2;

    guardar(cuatro,cero,cero,cero,cero,cero,sn,sd);
    system("pause");
}
