Algoritmo "Lista 2 Ex - 5"
// Disciplina  :  [APC]
// Professor   : João Victor
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/04/2019
Var
num,x :inteiro

Inicio
   escreval("Digite um número inteiro")
   leia(num)
   x := 2
   se ((num=0) ou (num=1)) entao
      escreval(num," não é primo")
   senao
      enquanto num mod x <> 0 faca
         x := x+1
      fimenquanto
      se x <> num entao
         escreval("")
         escreval(num," não é primo")
      senao
         escreval("")
         escreval(num," é primo")
      fimse
   fimse


Fimalgoritmo