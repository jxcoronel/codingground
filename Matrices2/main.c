#include "Matrices.h"

/* EJERCICIOS:
a) Sumar diagonal principal.
b) Sumar diagonal secundaria.
c) Sumar triangular superior.
d) Sumar triangular inferior.
e) Sumar triangular superior respecto a la diagonal secundaria.
f) Sumar triangular inferior respecto a la diagonal secundaria.
g) Transponer matriz in situ.
h) Transponer matriz en otra matriz.
i) Es simétrica?
j) Es identidad?
k) Es diagonal?
l) Es escalar?
m) Mostrar los triangulos definidos entre las dos diagonales.
n) Producto entre dos matrices.
ñ) Suma entre dos matrices.
o) Dado un elemento [i;j] retornar la suma de todos los vecinos.
p) Dado un elemento [i;j] mostrar la matriz mas grande que tenga como vertice.
q) Idem p) con la menor matriz cuadrada que llegue a un borde.
r) Dado un elemento [i;j] transponer la matriz que la tenga como vertice superior izquierdo.
s) Transponer una matriz respecto al centro.
t) Mostrar matriz en espiral.
*/

int main(void) {
	int mat1[FIL][COL];
//    int mat2[FIL][COL];
    generarMatricesAuto(mat1);
//    generarMatricesAuto(mat2);
	int seleccion=1;
	while (seleccion!='x') {
        printf ("\na) Sumar diagonal principal.\nb) Sumar diagonal secundaria.\nc) Sumar triangular superior.\nd) Sumar triangular inferior.\ne) Sumar triangular superior respecto a la diagonal secundaria.\nf) Sumar triangular inferior respecto a la diagonal secundaria.\ng) Transponer matriz in situ.\nh) Transponer matriz en otra matriz.\ni) Es simetrica?\nj) Es identidad?\nk) Es diagonal?\nl) Es escalar?\nm) Mostrar los triangulos definidos entre las dos diagonales.\nn) Producto entre dos matrices.\no) Suma entre dos matrices.\n");
        printf("p) Dado un elemento [i;j] retornar la suma de todos los vecinos.\nq) Dado un elemento [i;j] mostrar la matriz mas grande que tenga como vertice.\nr) Idem q) con la menor matriz cuadrada que llegue a un borde.\ns) Dado un elemento [i;j] transponer la matriz que la tenga como vertice superior izquierdo.\nt) Transponer una matriz respecto al centro.\nu) Mostrar matriz en espiral.\nx) Salir.\nSeleccione una letra: ");
        seleccion=LeeYvalida('a','u','x');
        switch (seleccion){
            case 'a':
                mostrarMatrices(mat1);
                sumarDiagonalPrincipal(mat1);
                break;
            case 'b':
                mostrarMatrices(mat1);
                sumarDiagonalSecundaria(mat1);
                break;
            case 'c':
                mostrarMatrices(mat1);
                sumarTriangularSuperior(mat1);
                break;
            case 'd':
                mostrarMatrices(mat1);
                sumarTriangularInferior(mat1);
                break;
            case 'e':
                    mostrarMatrices(mat1);
                    sumarTrianguarSuperiorSecundaria(mat1);
                break;
        }
    }
	return 0;
}
