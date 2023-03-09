#include <stdio.h>  /*Diretiva de pre-processamento inclui arquivo cabecalho*/

/*
main()  {  
    printf("Meu primeiro programa"); // Barra dupla insere comentario em uma linha
} // Os blocos de instrucoes sao delimitados por chaves

*/

/*
main() {
	printf("Agora vou iniciar...\n"); // Usando caractere de escape
	printf("produzindo um novo codigo");
}
*/

#include <stdio.h>

main() {
	printf("%i\n",3+4*5-(2*(4+6))); 
    printf(" O Resultado 1 foi %i\n O Resultado 2 foi %i\n",7*8+3,9+11);// Formato printf(<cadeia de caracteres de controle>,<lista de argumentos>);
}