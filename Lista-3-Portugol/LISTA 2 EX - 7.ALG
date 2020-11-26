Algoritmo "Lista 2 Ex - 7"
// Disciplina  :  [APC]
// Professor   : João Victor
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/04/2019
Var
   n,i :inteiro
   num,maior :real

Inicio
   escreval("Digite a quanrtidade de números que irá comparar para decidir o")
   escreval("maior dentre eles")
   leia(n)
   enquanto n<1 faca
      escreval("")
      escreval("ERRO! Favor digitar um número válido.")
      leia(n)
   fimenquanto
   escreval("")
   escreval("Digite o primeiro número")
   leia(maior)
   para i de 2 ate n faca
      se i<>n entao
         escreval("")
         escreval("Digite o próximo número")
         leia(num)
      senao
         escreval("")
         escreval("Digite o último número")
         leia(num)
      fimse
      se num>maior entao
         maior := num
      fimse
   fimpara
   escreval("")
   escreval("O maior número é ",maior)

Fimalgoritmo