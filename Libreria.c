#include <stdio.h>
#include <stdlib.h>
#include "Libreria.h"

Nodo* insertarAlPrincipio(Nodo* lista, int dato) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = lista;
    return nuevoNodo;
}

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

void recorrerLista(Nodo* lista) {
    Nodo* actual = lista;

    while (actual != NULL) {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }

    printf("NULL\n");
}

void liberarLista(Nodo* lista) {
    Nodo* actual = lista;
    Nodo* siguiente = NULL;

    while (actual != NULL) {
        siguiente = actual->siguiente;
        free(actual);
        actual = siguiente;
    }
}
