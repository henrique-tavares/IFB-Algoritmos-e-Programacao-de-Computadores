Algoritmo "Lista 2 Ex - 8"
// Disciplina  :  [APC]
// Professor   : Jo�o Victor
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/04/2019
Var
   pie,pie0:real
   n:inteiro

Inicio

   n:=-3
   pie := 4+(4/n)

   enquanto abs(pie-pie0) > 5^(-10) faca
      n:=(-1)*(n-2)
      pie0 := pie+(4/n)
      n:=(-1)*(n+2)
      pie := pie0+(4/n)
   fimenquanto
   
   escreval("Pi � aproximadamente igual �",pie)

Fimalgoritmo