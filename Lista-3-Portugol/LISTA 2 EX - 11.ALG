Algoritmo "semnome"
// Disciplina  :  [APC]
// Professor   : Jo�o Victor
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/04/2019
Var
v0,a,t,t_final,xt,yt:real


Inicio

   escreval("Digite a velocidade inicial do lan�ameto em m/s")
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
   t_final:=(2*(v0*sen(a*2*pi/360))/10
   
   para t de 1 ate t_final faca
   xt := v0*cos(a*pi/180)*t
   yt := (v0*sen(a*pi/180)*t)-(5*t^2)
   escreval("O alcance em",t,"s �",xt,"m e a altura em",t,"s �",yt,"m")
   fimpara


Fimalgoritmo