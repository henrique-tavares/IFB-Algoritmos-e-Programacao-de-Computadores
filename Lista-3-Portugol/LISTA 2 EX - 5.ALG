Algoritmo "Lista 2 Ex - 5"
// Disciplina  :  [APC]
// Professor   : Jo�o Victor
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/04/2019
Var
num,x :inteiro

Inicio
   escreval("Digite um n�mero inteiro")
   leia(num)
   x := 2
   se ((num=0) ou (num=1)) entao
      escreval(num," n�o � primo")
   senao
      enquanto num mod x <> 0 faca
         x := x+1
      fimenquanto
      se x <> num entao
         escreval("")
         escreval(num," n�o � primo")
      senao
         escreval("")
         escreval(num," � primo")
      fimse
   fimse


Fimalgoritmo