#include "Libreria.h"
#include <stdio.h>
#include <stdlib.h>


// Función para insertar al principio de la lista
Nodo* insertarAlPrincipio(Nodo* lista, int dato) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = lista;
    return nuevoNodo;
}

// Función para insertar al final de la lista
Nodo* insertarAlFinal(Nodo* lista, int dato) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;

    if (lista == NULL) {
        return nuevoNodo;
    }

    Nodo* actual = lista;
    while (actual->siguiente != NULL) {
        actual = actual->siguiente;
    }

    actual->siguiente = nuevoNodo;
    return lista;
}

// Función para eliminar un elemento de la lista
Nodo* eliminarElemento(Nodo* lista, int dato) {
    Nodo* actual = lista;
    Nodo* anterior = NULL;

    while (actual != NULL && actual->dato != dato) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual == NULL) {
        // El elemento no está en la lista
        return lista;
    }

    if (anterior == NULL) {
        // El elemento a eliminar está al principio de la lista
        lista = actual->siguiente;
    } else {
        // El elemento a eliminar está en medio o al final de la lista
        anterior->siguiente = actual->siguiente;
    }

    free(actual);
    return lista;
}

// Función para buscar un elemento en la lista
int buscarElemento(Nodo* lista, int dato) {
    Nodo* actual = lista;

    while (actual != NULL) {
        if (actual->dato == dato) {
            return 1; // El elemento se encuentra en la lista
        }
        actual = actual->siguiente;
    }

    return 0; // El elemento no se encuentra en la lista
}

// Función para recorrer e imprimir la lista
void recorrerLista(Nodo* lista) {
    Nodo* actual = lista;

    while (actual != NULL) {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }

    printf("NULL\n");
}

// Función para liberar la memoria de la lista
void liberarLista(Nodo* lista) {
    Nodo* actual = lista;
    Nodo* siguiente = NULL;

    while (actual != NULL) {
        siguiente = actual->siguiente;
        free(actual);
        actual = siguiente;
    }
}

// Declaración de la función mostrarEjemplosOperaciones
void mostrarEjemplosOperaciones();

// Función para mostrar Listas
void Listas() {
    int opcion_Listas;

    do {
        printf("\nListas: son una coleccion ordenada de elementos donde cada elemento puede tener una posicion unica.\nLas listas son fundamentales en programacion y se utilizan para almacenar y manipular datos de manera eficiente. Es una estructura de datos lineal que organiza elementos en secuencia, donde cada elemento se conoce como un nodo. Cada nodo contiene un dato y una referencia (o enlace) al siguiente nodo en la secuencia. \n\nExisten:");
        printf("\nA) LISTAS SIMPLEMENTE ENLAZADAS: Cada nodo tiene un enlace al siguiente nodo.\nB) LISTAS DOBLEMENTE ENLAZADAS: Cada nodo tiene enlaces tanto al siguiente como al anterior.\nC) LISTAS CIRCULARES: El ultimo nodo de la lista enlaza con el primero, formando un ciclo.\n");

        printf("\nTIPOS DE OPERACIONES");
        printf("\nINSERTAR, ELIMINAR, BUSQUEDA, RECORRIDO\n");
        printf("\n1. Si desea ver ejemplos de los tipos de operaciones");
        printf("\n2. Volver al menu principal\n");
        printf("\nIngrese el numero de la opcion deseada: ");
        scanf("%d", &opcion_Listas);

        switch (opcion_Listas) {
            case 1:
                // Llamar a la función que contiene ejemplos de operaciones
                mostrarEjemplosOperaciones();
                break;
            case 2:
                printf("\nVolviendo al Menu Principal...\n");
                break;
            default:
                printf("\nOpcion no valida. Por favor, ingrese un numero válido.\n");
        }
    } while (opcion_Listas != 2);
}

// Función que contiene ejemplos de operaciones en listas y pilas
void mostrarEjemplosOperaciones() {
    // Ejemplos de operaciones en listas
    Nodo* lista = NULL;

    // Ejemplo de inserción al principio
    printf("\nEjemplo de insercion al principio:\n");
    lista = insertarAlPrincipio(lista, 10);
    lista = insertarAlPrincipio(lista, 20);
    recorrerLista(lista);

    // Ejemplo de inserción al final
    printf("\nEjemplo de insercion al final:\n");
    lista = insertarAlFinal(lista, 30);
    lista = insertarAlFinal(lista, 40);
    recorrerLista(lista);

    // Ejemplo de eliminación de un elemento
    printf("\nEjemplo de eliminacion de un elemento:\n");
    lista = eliminarElemento(lista, 20);
    recorrerLista(lista);

    // Ejemplo de búsqueda de un elemento
    printf("\nEjemplo de busqueda de un elemento:\n");
    int elementoABuscar = 30;
    if (buscarElemento(lista, elementoABuscar)) {
        printf("El elemento %d se encuentra en la lista.\n", elementoABuscar);
    } else {
        printf("El elemento %d no se encuentra en la lista.\n", elementoABuscar);
    }

    // Liberar la memoria de la lista al finalizar
    liberarLista(lista);
    
}

// Función para mostrar Pilas
void Pilas() {
    int opcion_Pilas;
	
	
    do {
        printf("\nPilas: coleccion de elementos con dos operaciones principales: apilar (push) y desapilar (pop). La pila sigue el principio de Last In, First Out (LIFO), lo que significa que el ultimo elemento que se añade a la pila es el primero en ser retirado lo que significa que permite agregar nodos a la pila y eliminarlos de esta solo desde su parte superior, se define formalmente como una coleccion de datos a los cuales se puede acceder mediante un extremo, que se conoce generalmente como tope.\n");
        printf("Son estructuras de datos lineales, como los arreglos, ya que los componentes ocupan lugares sucesivos en la estructura y cada uno de ellos tiene un unico sucesor y un unico predecesor, con excepción del ultimo y del primero, respectivamente.\n");
	
		printf("\nTIPOS DE OPERACIONES");
		printf("\nPUSH (APILAR), POP (DESAPILAR)\n");
        printf("\n1. Si desea ver ejemplos de los tipos de operaciones");
		printf("\n2. Volver al Menu Principal\n");

        printf("\nIngrese el numero de la opcion deseada: ");
        scanf("%d", &opcion_Pilas);

        switch (opcion_Pilas) {
            case 1:
				printf("\nOPERACIONES\n\nPUSH (Apilar): \n[A][B][C][ ]  <----- D        [A][B][C][D]\n\nPOP (Desapilar) \n[A][B][C][D]  ------->        [A][B][C][ ]  ------>D\n\nVACIO: \n[ ][ ][ ][ ]        Indica si la pila contiene o no elementos\n\nLLENA: \n[A][B][C][D]        Indica si es posible o no agregar nuevos elementos a la pila\n");
            case 2:
                printf("\nVolviendo al Menu Principal...\n");
                break;
            default:
                printf("Opcion no valida. Por favor, ingrese un numero valido.\n");
        }
    } while (opcion_Pilas != 2);
}

// Función para mostrar Colas
void Colas() {
    int opcion_Colas;

    do {
        printf("\nColas: es una coleccion lineal de elementos que sigue el principio de First In, First Out (FIFO), almacena elementos en una lista y permite acceder a los datos por uno de los dos extremos de la lista. Un elemento se inserta en la cola (parte final) de la lista y se suprime o elimina por la frente (parte inicial, cabeza) de la lista.\n");
		printf("Los datos se almacenan de un modo lineal y el acceso a los datos solo esta permitido en los extremos de la cola, los nodos de una cola se eliminan solo desde el principio (cabeza) de la misma y se insertan solo al final (cola) de esta.\n");
		       
	    printf("\nTIPOS DE OPERACIONES");
		printf("\nENCOLAR, DESENCOLAR\n");
		printf("\n1. Si desea ver ejemplos de los tipos de operaciones");
        printf("\n2. Volver al Menu Principal\n");
        printf("\nIngrese el numero de la opcion deseada: ");
        scanf("%d", &opcion_Colas);

        switch (opcion_Colas) {
            case 1:
                printf("\nOPERACIONES\n\nENCOLAR: \nEncolar ------->  [A][Final][ ][Principio]\n\nDESENCOLAR: \n[Final][ ][Principio][A]  ------>  Desencolar\n\nFRENTE: \n[Final][ ][ ][Principio]  <-------------  primer elemento que se agrego a la cola y que aun no ha sido eliminado mediante la operacion de desencolar. El frente de la cola es el elemento que se procesara a continuacion cuando se realice una operacion de desencolar.\n\nVERIFICAR SI ESTA VACIA: \n[A][B][ ][ ]       Verificar si la cola esta vacia o contiene elementos. \n");               
				 break;
            case 2:
                printf("Volviendo al Menu Principal...\n");
                break;
            default:
                printf("Opcion no valida. Por favor, ingrese un numero valido.\n");
        }
    } while (opcion_Colas != 2);
}

// Función para mostrar Arboles
void Arboles() {
    int opcion_Arboles;

    do {
        printf("\nArboles: son una estructura jerarquica y en forma no lineal, aplicada sobre una coleccion de elementos u objetos llamados nodos. (Cairo & Guardati,2006).\n");
        printf("son considerados las estructuras de datos no lineales y dinamicas de datos muy importantes del area de computacion, utilizados en informatica como un metodo eficiente para busquedas grandes y complejas, se les llama estructuras dinamicas, porque las mismas pueden cambiar tanto de forma como de dimensiones durante la ejecucion del programa.\n");
		printf("\nEN RELACION CON LOS NODOS:\nA) Nodos: Se le llama nodo a cada elemento que contiene el arbol.\n\nB) Nodo padre: Se utiliza este termino para llamar a todos aquellos nodos que tienen al menos un hijo.\n\nC) Nodo hijo: Los hijos son todos aquellos nodos que tienen un padre.\n\nD) Nodo hermano: Los nodos hermanos son aquellos nodos que comparten un mismo padre en comun dentro de la estructura.\n\n");
		printf("\nEN RELACION A LA POSICION DENTRO DEL ARBOL:\nA) Nodo raiz: Se refiere al primer nodo de un arbol, Solo un nodo del arbol puede ser la raiz.\n\nB) Nodo hoja: Son todos aquellos nodos que no tienen hijos, los cuales siempre se encuentran en los extremos de la estructura.\n\nC) Nodo interior o rama: Estos son todos aquellos nodos que no son la raiz y que ademas tiene al menos un hijo.\n\n");
		printf("\nEN RELACION A LAS DIMENSIONES DEL ARBOL:\nA) Nivel: El nivel de un nodo es su distancia a la raiz. Por lo tanto: Un arbol vacio tiene 0 niveles, el nivel de la raiz es 1, el nivel de cada nodo se calculado contando cuantos nodos existen sobre el, hasta llegar a la raiz + 1, y de forma inversa tambien se podria, contar cuantos nodos existen desde la raiz hasta el nodo buscado + 1.\n\nB) Altura: Se le llama altura al numero maximo de niveles de un arbol.\n\nC) Peso: Es el numero de nodos que tiene un arbol.\n\nD) Orden: Es el numero maximo de hijos que puede tener un Nodo. Es una constante que se define antes de crear el arbol. Este valor no se calcula, si no que ya se conoce cuando se ve la estructura.\n\nE) Grado: Numero de hijos de un nodo y esta limitado por el Orden, ya que este indica el numero maximo de hijos que puede tener un nodo. El grado de un arbol se define como el maximo grado de todos sus nodos\n\nF) Camino: Secuencia de nodos conectados dentro de un arbol.\n\nG) Longitud del camino: Cantidad de nodos que se deben recorrer para llegar desde la raiz a un nodo determinado.\n\nH) Sub-arbol: Todo arbol generado a partir de una seccion determinada del arbol, Por lo que podemos decir que un arbol es un nodo Raiz con N Sub-Arboles.\n\n");
		
		printf("\nTIPOS DE OPERACIONES");
		printf("\nINSERCION, ELIMINACION, BUSQUEDA, RECORRIDO\n");
        printf("\n1. Si desea ver ejemplos de los tipos de operaciones");
		printf("\n2. Volver al Menu Principal\n");
        
        printf("\nIngrese el numero de la opcion deseada: ");
        scanf("%d", &opcion_Arboles);

        switch (opcion_Arboles) {
            case 1:
                printf("\nOPERACIONES\n\nINSERCION: \nTeniendo en cuenta un arbol binario, si el valor es mayor, se va hacia la derecha, si es menor hacia la izquierda, hasta colocarse en su lugar. Se tomara de ejemplo el numero 6\n\n");
                printf("         4                  4     \n      |     |   ----->   |     |  \n      2     8            2     8\n     | |   | |          | |   | | \n     1 3     9          1 3   6 9\n");
                printf("\n\nELIMINACION: \nSe ve si el elemento no tiene hijos, si no tiene simplemente se elimina y si tiene se crea un puente, el padre del nodo a borrar pasa a apuntar al hijo del nodo borrado\n\n");
				printf("         4                  4     \n      |     |   ----->   |     |  \n      2     8            2     8\n     | |   | |          | |   | | \n     1 3   6 9          1 3   6  \n");
				printf("\n\nBUSQUEDA: \nSe lleva a cabo siguiendo un camino desde la raiz del arbol hasta encontrar el nodo deseado, si la clave buscada es menor que la clave del nodo actual, te desplazas hacia el subarbol izquierdo (si existe). Si la clave buscada es mayor que la clave del nodo actual, te desplazas hacia el subarbol derecho (si existe).\n\n");
				printf("         4                       \n      |     |     \n      2     8        \n     | |   | |       \n     1 3   6 9  <--------- Si se desea buscar el 9, al comparar con el 4 al ser mayor ira a la derecha, 8 a la derecha y se encuentra.     \n");
				printf("\n\nRECORRIDO: \nSon metodos sistematicos para visitar todos los nodos de un arbol, y cada uno tiene un orden especifico:\n ");
				printf("\n         1                       \n      |     |     \n      2     3        \n     | |   | |       \n     4 5    \n");
				printf("\n1. Inorden(In-order): Recorre el arbol de izquierda a derecha, visitando primero el subarbol izquierdo, luego el nodo actual y finalmente el subarbol derecho. En el ejemplo: 4, 2, 5, 1, 3.\n\n2. Preorden (Pre-order): Visita el nodo actual antes de recorrer sus subarboles. El orden es raiz, izquierda, derecha. En el ejemplo: 1, 2, 4, 5, 3.\n\n3. Postorden (Post-order): Recorre el arbol de izquierda a derecha, visitando primero los subarboles izquierdos y derechos, y finalmente la raiz. En el ejemplo: 4, 5, 2, 3, 1.\n");
				break;
            case 2:
                printf("Volviendo al Menu Principal...\n");
                break;
            default:
                printf("Opcion no valida. Por favor, ingrese un numero valido.\n");
        }
    } while (opcion_Arboles != 2);
}

// Función para mostrar Grafos
void Grafos() {
    int opcion_Grafos;

    do {
        printf("\nGrafos: Estructura de datos que consta de nodos (vertices) conectados por aristas. Pueden ser dirigidos o no dirigidos, ponderados o no ponderados\n");
        printf("\nTERMINOLOGIA");
        printf("\nA) Nodos(Vertices): Representan entidades individuales en el grafo.\nB) Aristas: Conexiones entre nodos que pueden ser dirigidas (con orientacion) o no dirigidas, y pueden tener pesos asociados en grafos ponderados. \nC) Grafo Dirigido: Las aristas tienen dirección, lo que significa que hay un nodo de origen y un nodo de destino. \nD) Grafo No Dirigido: Las aristas no tienen direccion, y la conexion es bidireccional. \nE) Grafo Ponderado: Las aristas tienen un peso asociado, que puede representar distancias, costos, tiempos, etc. \nF) Grafo No Ponderado: Las aristas no tienen pesos asociados. \nG) Ciclo: Una secuencia de nodos y aristas que forma un circuito cerrado, donde el nodo final es igual al nodo inicial. \nH) Grafo Conexo: Todos los nodos estan conectados, no hay nodos aislados. \nI) Grafo Disconexo: El grafo tiene nodos aislados o grupos de nodos no conectados. \nJ) Arbol: Un grafo no dirigido, conectado y aciclico. Cada par de nodos esta conectado por exactamente un camino.\n");
        
		printf("\nTIPOS DE OPERACIONES\n");
		printf("INSERCION, ELIMINACION, RECORRIDO\n");
       	printf("\n1. Si desea ver ejemplos de los tipos de operaciones");

        printf("\n2. Volver al Menu Principal\n");

        printf("\nIngrese el numero de la opcion deseada: ");
        scanf("%d", &opcion_Grafos);

        switch (opcion_Grafos) {
            case 1:
                printf("\nINSERCION DE VERTICES Y ARISTAS: \nAñadir una nueva entrada en la tabla de vertices (estructura de datos que almacena los vertices) para el nuevo nodo. A partir de ese momento el grafo tendra un vertice mas, inicialmente aislado, ya que ninguna arista llegara a el.\n\n");
                printf("  O-----O   ------> La insercion de vertices en un grafo consiste en agregar nodos al conjunto de elementos del grafo.\n  |     |\n  |     |\n  |     |   ------> La insercion de aristas en un grafo no dirigido significa establecer conexiones entre dos vertices (las lineas).\n  O-----O\n");
				printf("\nELIMINACION DE VERTICES Y ARISTAS: \n\n");
				printf("  O-----   <------ La eliminacion de vertices en un grafo implica quitar un nodo especifico junto con todas las aristas que estan conectadas a el.\n  |     |\n  |     |\n  |        <------ La eliminacion de aristas implica cortar la conexion entre dos vertices especificos.\n  O-----O\n");
				printf("\nRECORRIDO: \nDe profundidad: Comienza en un vertice inicial y explora tan profundamente como sea posible antes de retroceder. \nMarca el vértice actual como visitado. Explora un vecino no visitado.Si todos los vecinos han sido visitados, retrocede al vertice anterior.\n\nDe anchura: Explora todos los vecinos de un vertice antes de pasar al siguiente nivel de vecinos. Marca el vértice actual como visitado y encola. Mientras la cola no este vacia, desencola un vertice y explora sus vecinos no visitados, encolandolos.Repite hasta que la cola este vacia.\n\n");
				break;
            case 2:
                printf("Volviendo al Menu Principal...\n");
                break;
            default:
                printf("Opcion no valida. Por favor, ingrese un numero valido.\n");
        }
    } while (opcion_Grafos != 2);
}


int main() {
    int opcion_principal;

    do {
        printf("\nBIENVENIDOS AL PROGRAMA\nA continuacion veremos los aspectos basicos con ejemplos de las estructuras de datos fundamentales\n\nMenu Principal:\n");
        printf("1. Listas\n");
        printf("2. Pilas\n");
        printf("3. Colas\n");
        printf("4. Arboles\n");
        printf("5. Grafos\n");
        printf("6. Salir\n");

        printf("Ingrese el numero de la opcion deseada: ");
        scanf("%d", &opcion_principal);

        switch (opcion_principal) {
            case 1:
                Listas();
                break;
            case 2:
                Pilas();
                break;
            case 3:
            	Colas();
            	break;
            case 4:
            	Arboles();
            	break;
            case 5:
            	Grafos();
            	break;
            case 6:
                printf("\nGRACIAS POR USAR EL PROGRAMA\nSaliendo del programa...");
                break;
            default:
                printf("Opcion no valida. Por favor, ingrese un numero valido.\n");
        }
    } while (opcion_principal != 6);

    return 0;
}
	
