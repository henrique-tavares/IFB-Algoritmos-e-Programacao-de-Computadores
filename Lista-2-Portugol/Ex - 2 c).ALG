Algoritmo "Ex - 2 c)"
// Disciplina  :  [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/04/2019
Var
   N,qtd,i:inteiro
   num,num0:real

Inicio
   escreval("Defina a quantidade de n�meros")
   leia(N)
   escreval("")
   qtd := 0
   
   enquanto N<=0 faca
      escreval("ERRO! Favor digitar um n�mero v�lido")
      leia(N)
      escreval("")
   fimenquanto

   escreval("Digite o primeiro n�mero")
   leia(num0)
   se num0<0 entao
      qtd:=1
   fimse

   //PARA-DE-ATE-FACA
   para i de 2 ate N faca
      se i<>n entao
         escreval("Digite o pr�ximo n�mero")
         leia(num)
      senao
         escreval("Digite o �ltimo n�mero")
         leia(num)
      fimse
      se(num<0)entao
         qtd := (qtd)+(1)
      fimse
   fimpara

   escreval("")
   escreval("A quantidade de n�meros negativos �", qtd)
   escreval("")
Fimalgoritmo