Algoritmo "semnome"
// Disciplina  :  [APC]
// Professor   : Jo�o Victor
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/04/2019
Var
   a,v0,xmax,ymax:real


Inicio

   escreval("Digite a velocidade inicial do lan�ameto")
   leia(v0)
   escreval("")
   enquanto v0<0 faca
      escreval("ERRO! Favor digitar uma velocidade v�lida")
      leia(v0)
      escreval("")
   fimenquanto
   escreval("Digite o �ngulo do lan�amento")
   leia(a)
   escreval("")
   enquanto (a<0) ou (a>90) faca
      escreval("ERRO! Favor digitar um angulo v�lido")
      leia(a)
      escreval("")
   fimenquanto

   //g = 10m/s�
   xmax := (v0^2*sen(2*((a*2*pi)/360))/10
   ymax := ((v0*sen((a*2*pi)/360))^2)/20
   escreval("O alcance m�ximo �",xmax,"m e a altura m�xima �",ymax)

Fimalgoritmo