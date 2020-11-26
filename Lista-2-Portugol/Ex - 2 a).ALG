Algoritmo "Ex - 2 a)"
// Disciplina  :  [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/04/2019
Var
   N,qtd,i:inteiro
   num,num0:real

Inicio
   escreval("Defina a quantidade de números")
   leia(N)
   escreval("")
   qtd := 0
   i:=2
   
   enquanto N<=0 faca
      escreval("ERRO! Favor digitar um número válido")
      leia(N)
      escreval("")
   fimenquanto

   escreval("Digite o primeiro número")
   leia(num0)
   se num0<0 entao
      qtd:=1
   fimse
   
   //ENQUANTO-FACA
   enquanto i<>(n+1) faca
      se i<>n entao
         escreval("Digite o próximo número")
         leia(num)
      senao
         escreval("Digite o último número")
         leia(num)
      fimse
      se(num<0)entao
         qtd := (qtd)+(1)
      fimse
      i:=i+1
   fimenquanto

   escreval("")
   escreval("A quantidade de números negativos é", qtd)
   escreval("")
Fimalgoritmo