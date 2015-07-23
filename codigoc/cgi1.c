//////////
// Ejemplo CGI 
//
// Compilar
//    gcc cgi.c -o ejemplo
// Abrir navegador y ejecutar cgi
// http://localhost/cgi-bin/ejemplo
//////////

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main(){

	printf("Content-type: text/html\n\n");
	printf("hola mundo!!!\n");

}


