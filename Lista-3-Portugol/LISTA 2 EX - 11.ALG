Algoritmo "semnome"
// Disciplina  :  [APC]
// Professor   : João Victor
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/04/2019
Var
v0,a,t,t_final,xt,yt:real


Inicio

   escreval("Digite a velocidade inicial do lançameto em m/s")
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
   t_final:=(2*(v0*sen(a*2*pi/360))/10
   
   para t de 1 ate t_final faca
   xt := v0*cos(a*pi/180)*t
   yt := (v0*sen(a*pi/180)*t)-(5*t^2)
   escreval("O alcance em",t,"s é",xt,"m e a altura em",t,"s é",yt,"m")
   fimpara


Fimalgoritmo