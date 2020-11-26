Algoritmo "Lista 2 Ex - 9"
// Disciplina  :  [APC]
// Professor   : João Victor
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/04/2019
Var
   n,s,f1,f2,fn,i:inteiro


Inicio
   escreval("Digite um valor n para descobrir o n-ésimo elemento da série de")
   escreval("fibonacci(fn)")
   leia(n)
   enquanto n<0 faca
      escreval("ERRO! Favar digitar um valor n válido.")
      leia(n)
   fimenquanto
   se n=0 entao
      escreval("f 0 = 0")
   fimse
   se n=1 entao
      escreval("f 1 = 1")
   fimse
   se n=2 entao
   escreval("f 2 = 1")
   fimse
   se n>2 entao
      f2:=1
      f1:=1
      para i de 3 ate n faca
         fn:=f2+f1
         f1:=f2
         f2:=fn
         escreva(fn)
      fimpara
      escreval("")
      escreval("")
      escreval("f",n," =",fn)
   fimse
Fimalgoritmo