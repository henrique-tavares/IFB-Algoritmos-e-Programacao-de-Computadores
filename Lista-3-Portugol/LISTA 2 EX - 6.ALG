Algoritmo "Lista 2 Ex - 6"
// Disciplina  :  [APC]
// Professor   : Jo�o Victor
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/04/2019
Var
   n,i :inteiro
   num0,num,s :real

Inicio
   escreval("Digite quantos n�meros ir�o compor a soma S")
   escreval("S = (X1^2)+(X2^2)+...+(Xn^2)")
   leia(n)
   escreval("")
   escreval("Digite o primeiro n�mrero")
   leia(num0)
   s := (num0^2)
   para i de 2 ate n faca
      se i <> n entao
         escreval("")
         escreval("Digite o pr�ximo n�mero")
      senao
         escreval("")
         escreval("Digite o �ltimo n�mero")
      fimse
      leia(num)
      s  := s+(num^2)
   fimpara
   escreval("")
   escreval("O resultado da soma � ",s)
Fimalgoritmo