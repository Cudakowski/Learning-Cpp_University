// To jest przyk³ad instrukcji do æwiczeñ - kompletna instrukcja 
// zawsze bêdzie zawarta w tym miejscu, tj. w pliku Main
//  
// Prosze uzupelnic niniejsze kody tak, aby program kompilowal i wykonywal siê a wynik jego dzialania byl taki sam jak podany na koñcu tego pliku.
//
// Pliku Main oraz funkcji zadeklarowanych i zdefiniowanych juz w zalaczonych plikach h i c/cpp nie wolno modyfikowac i przenosic do innych plikow.
// Mozna dodawac nowe pliki h i c/cpp ale w taki sposob, by nie spowodowalo to koniecznosci modyfikacji pliku main. 
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod)
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani ¿adnych innych materialow (w tym w³asnych wczesniej
// przygotowanych plikow oprócz makefile, chyba ¿e polecenie stanowi inaczej)
//
//
// Kody Ÿród³owe musz¹ znajdowaæ siê w katalogu do którego nikt oprócz
// w³aœciciela nie ma praw dostêpu.
// Rozwiazanie (czyli dodane pliki i Main.cpp nale¿y wgraæ do UPEL 
// jako archiwum tar.gz o strukturze takiej jak w zadaniu na UPeL.
// UWAGA:
// * archiwum powinno zawieraæ katalog z zadaniem labNN/ (gdzie NN to nr laboratorium np. lab01)
// * katalog z zadaniem powinien zawieraæ podkatalog include/
//   w którym musz¹ znajdowaæ siê wszystkie niezbêdne pliki nag³ówkowe
// * katalog z zadaniem powinien zawieraæ podkatalog src/
//   w którym musz¹ znajdowaæ siê wszystkie niezbêdne pliki z kodem Ÿród³owym
// * katalog z zadaniem powinien zawieraæ podkatalog build/ 
//   w którym powinien znajdowaæ siê tylko i wy³¹cznie plik Makefile
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf lab01.tar.gz lab01/
// * rozpakowanie archiwum: tar -xvf nazwa.tar.gz
// * do szybkiej weryfikacji poprawnosci wyjscia mozna uzyc diff-a (np.: diff -B plik_z_outputem_z_main plik_z_outputem_z_programu > wyniki_porownania.out)


#include <stdio.h>
#include <stdlib.h>

#include "include/struct_a.h"
#include "include/struct_b.h"
#include "include/struct_c.h"
#include "include/struct_d.h"
#include "include/struct_e.h"
#include "include/struct_f.h"
#include "include/struct_g.h"
#include "include/struct_h.h"
#include "include/struct_i.h"
#include "include/struct_j.h"
#include "include/struct_k.h"
#include "include/struct_l.h"
#include "include/struct_m.h"
#include "include/struct_n.h"
#include "include/struct_o.h"

int main() {

    StructA sA = { 575, NULL, NULL };
    StructB sB = { 66, NULL };
    StructC sC = { 862, NULL };
    StructD sD = { 577, NULL };
    StructE sE = { 795, NULL };
    StructF sF = { 405, NULL };
    StructG sG = { 815, NULL };
    StructH sH = { 632, NULL };
    StructI sI = { 10, NULL, NULL };
    StructJ sJ = { 762, NULL };
    StructK sK = { 749, NULL };
    StructL sL = { 482, NULL, NULL };
    StructM sM = { 754, NULL, NULL };
    StructN sN = { 443, NULL };
    StructO sO = { 365, NULL };


    sM.ptr_to_J = &sJ;
    sJ.ptr_to_M = &sM;
    sM.ptr_to_M = &sM;

    sL.ptr_to_E = &sE;
    sE.ptr_to_K = &sK;
    sK.ptr_to_O = &sO;
    sO.ptr_to_L = &sL;
    sL.ptr_to_L = &sL;

    sA.ptr_to_G = &sG;
    sG.ptr_to_N = &sN;
    sN.ptr_to_A = &sA;
    sA.ptr_to_A = &sA;

    sI.ptr_to_C = &sC;
    sC.ptr_to_F = &sF;
    sF.ptr_to_B = &sB;
    sB.ptr_to_H = &sH;
    sH.ptr_to_D = &sD;
    sD.ptr_to_I = &sI;
    sI.ptr_to_I = &sI;


    printf("=== Printing all structures ===\n");
    printf("\n");
    print_structA(&sA);
    print_structB(&sB);
    print_structC(&sC);
    print_structD(&sD);
    print_structE(&sE);
    print_structF(&sF);
    print_structG(&sG);
    print_structH(&sH);
    print_structI(&sI);
    print_structJ(&sJ);
    print_structK(&sK);
    print_structL(&sL);
    print_structM(&sM);
    print_structN(&sN);
    print_structO(&sO);
    
    return 0;
}

/** Wynik dzialania programu:
=== Printing all structures ===

StructA: value=575
StructB: value=66
StructC: value=862
StructD: value=577
StructE: value=795
StructF: value=405
StructG: value=815
StructH: value=632
StructI: value=10
StructJ: value=762
StructK: value=749
StructL: value=482
StructM: value=754
StructN: value=443
StructO: value=365
*/
