Algoritmo "semnome"
// Disciplina  :  [APC]
// Professor   : Jo�o Victor
// Descri��o   : Calcula o valor de uma s�rie S
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/04/2019
Var
   x, n, i :inteiro
   s, ln_x : real

Inicio
   //ln x = (log x)/(log e)
   //log e = 0.434
   
   escreval("Digite os valores de x e n, respectivamente para calcular a s�rie")
   escreval("S = ln x + x + (x^2)/2 + (x^3)/3 + ... + (x^n)/n.")
   escreval("")
   escreval("Digite o valor de x")
   leia(x)
   
   escreval("")
   escreval("Digite o valor de n")
   leia(n)
   
   ln_x := (log(x))/(0.434)
   s := ln_x + x
   
   para i de 2 ate n faca
      s := (s)+(((x)^(i))/(i))
   fimpara
   
   escreval("")
   escreval("O valor da s�rie S �",s)
Fimalgoritmo