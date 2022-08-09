#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 10
//
// int main(void) {
//   char buffer[MAXLINE];
//   while (fgets(buffer, MAXLINE, stdin) != NULL);
//     printf("%s", buffer);
  // return 0;
// }
int main(void) {
  int opcion =  0;
  char c;
  while (1) {
    system("clear");
    printf("1) Opcion 1\n");
    printf("2) Opcion 2\n");
    printf("3) Opcion 3\n");
    printf("4) Salir\n");
    scanf("%d", &opcion);
    getchar();
    switch (opcion) {
      case 1:
        system("clear");
        printf("Elegiste la opcion 1\n");
        printf("Presiones cualquier tecla para continuar\n");
        scanf("%c\n", &c);
        break;
      case 2:
        system("clear");
        printf("Elegiste la opcion 2\n");
        printf("Presiones cualquier tecla para continuar\n");
        scanf("%c\n", &c);
        break;
      case 3:
        system("clear");
        printf("Elegiste la opcion 3\n");
        printf("Presiones cualquier tecla para continuar\n");
        scanf("%c\n", &c);
        break;
      case 4:
        exit(0);
        break;
      default:
        printf("Error\n");
        exit(1);
        break;
    }
  }
}

//
// int main(void) {
//   FILE *fp;
//   fp = fopen("a.txt", "w");
//   fprintf(fp, "lo que se te cante\n");
//   fclose(fp);
//   return 0;
// }
