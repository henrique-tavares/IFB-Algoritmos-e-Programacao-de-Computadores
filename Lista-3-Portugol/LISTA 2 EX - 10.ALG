Algoritmo "semnome"
// Disciplina  :  [APC]
// Professor   : João Victor
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/04/2019
Var
   a,v0,xmax,ymax:real


Inicio

   escreval("Digite a velocidade inicial do lançameto")
   leia(v0)
   escreval("")
   enquanto v0<0 faca
      escreval("ERRO! Favor digitar uma velocidade válida")
      leia(v0)
      escreval("")
   fimenquanto
   escreval("Digite o ângulo do lançamento")
   leia(a)
   escreval("")
   enquanto (a<0) ou (a>90) faca
      escreval("ERRO! Favor digitar um angulo válido")
      leia(a)
      escreval("")
   fimenquanto

   //g = 10m/s²
   xmax := (v0^2*sen(2*((a*2*pi)/360))/10
   ymax := ((v0*sen((a*2*pi)/360))^2)/20
   escreval("O alcance máximo é",xmax,"m e a altura máxima é",ymax)

Fimalgoritmo