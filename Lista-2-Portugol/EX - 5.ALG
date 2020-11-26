Algoritmo "Ex - 5"
// Disciplina  :  [APC]
// Professor   : João Victor
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/04/2019
Var
   n :inteiro
   saldo, x, y :real

Inicio

   saldo := 1000
   escreval("###########################")
   escreval("# 1 - Saque               #")
   escreval("# 2 - Depósito            #")
   escreval("# 3 - Sair do programa    #")
   escreval("###########################")
   escreval("Saldo: R$ 1000")
   escreval("")
   escreval("Faça sua escolha")
   leia(n)

   enquanto (n<>1) e (n<>2) e (n<>3) faca
      escreval("")
      escreval("ERRO! Favor fornecer um dígito válido")
      escreval("")
      escreval("Faça sua escolha")
      leia(n)
   fimenquanto

   enquanto n<>3 faca
      se(n=1)entao
         escreval("")
         escreval("Digite quantos reais deseja sacar")
         leia(x)

         enquanto saldo<x faca
            escreval("")
            escreval("ERRO! Seu saldo não permite tal saque")
            escreval("")
            escreval("Digite quantos reais deseja sacar")
            leia(x)
         fimenquanto
         enquanto x<0 faca
            escreval("")
            escreval("ERRO! Não é possível sacar uma quantia negativa")
            escreval("")
            escreval("Digite quantos reais deseja sacar")
            leia(x)
         fimenquanto

         saldo := (saldo)-(x)
         escreval("")
         escreval("O seu saldo atual é de R$", saldo)
      fimse

      se(n=2)entao
         escreval("")
         escreval("Digite quantos reais deseja depositar")
         leia(y)

         enquanto y<0 faca
            escreval("")
            escreval("ERRO! Não é possível depositar uma quantia negativa")
            escreval("")
            escreval("Digite quantos reais deseja depositar")
            leia(y)
         fimenquanto

         saldo := (saldo)+(y)
         escreval("")
         escreval("O seu saldo atual é de R$", saldo)
      fimse

      escreval("")
      escreval("Faça sua escolha novamente")
      leia(n)
   fimenquanto

   escreval("")
   escreval("O seu saldo atual é de R$", saldo)

Fimalgoritmo