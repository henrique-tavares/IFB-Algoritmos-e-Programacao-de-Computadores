Algoritmo "Lista 2 Ex - 7"
// Disciplina  :  [APC]
// Professor   : Jo�o Victor
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/04/2019
Var
   n,i :inteiro
   num,maior :real

Inicio
   escreval("Digite a quanrtidade de n�meros que ir� comparar para decidir o")
   escreval("maior dentre eles")
   leia(n)
   enquanto n<1 faca
      escreval("")
      escreval("ERRO! Favor digitar um n�mero v�lido.")
      leia(n)
   fimenquanto
   escreval("")
   escreval("Digite o primeiro n�mero")
   leia(maior)
   para i de 2 ate n faca
      se i<>n entao
         escreval("")
         escreval("Digite o pr�ximo n�mero")
         leia(num)
      senao
         escreval("")
         escreval("Digite o �ltimo n�mero")
         leia(num)
      fimse
      se num>maior entao
         maior := num
      fimse
   fimpara
   escreval("")
   escreval("O maior n�mero � ",maior)

Fimalgoritmo