#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    // Verificamos que solo tengamos 2 argumentos de entrada
    if (argc == 2)
    {
       // Verificamos que el string sea de los caracteres adecuados para 4x4
       int i = 0; // Inicializamos la variable i a modo de contador
       while (argv[1][i] != '\0') // Condicionamos el contador hasta el último valor del string ('\0'), al llegar al último valor, salimos del bucle
       {
           i++;
       }
       // Interpretamos el resultado y verificamos que la cadena es adecuada en cuanto a longitud, si i = 31, seguimos
       if (i == 31)
       {
            i = 0;
            // Verificamos caracter por caracter
            while (i <= 30)
            {
                // Si está en posición par, deberá ser un número entre 1 y 4, si está en posición impar, deberá ser un espacio, el resto devolverá error
                if (i % 2 == 0 && (argv[1][i] >= '1' && argv[1][i] <= '4'))
                {
                    write(1, &argv[1][i], 1);
                }
                else if (i % 2 == 1 && (argv[1][i] == 32))
                {
                    write(1, " ", 1);
                }
                else
                {
                    write(1, "Error de caracter\n", 18);
                }
                i++;
            }
       }
       else
       {
           write(1, "Error de longitud\n", 18);
           return (0);
       }
    }
    else
    {
        write(1, "Error de argumentos\n", 20);
        return (0);
    }
}
