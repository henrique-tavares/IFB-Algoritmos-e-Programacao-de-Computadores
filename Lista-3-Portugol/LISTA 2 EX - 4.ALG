Algoritmo "Lista 2 Ex - 4"
// Disciplina  :  [APC]
// Professor   : João Victor
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/04/2019
Var
   // Seção de Declarações das variáveis
   p1,p2,p3,p4,t1,t2,t3,t4,mf :real

Inicio
   escreval("Digite as notas das quatro provas")
   //Digite a primeira nota, pressione enter, repita até terminar de digitar as notas.
   leia(p1,p2,p3,p4)
   escreval("")
   escreval("Digite as notas dos quatro trabalhos")
   //Digite a primeira nota, pressione enter, repita até terminar de digitar as notas.
   leia(t1,t2,t3,t4)
   escreval("")
   mf := ((p1+p2+p3+p4)/4)+(t1+t2+t3+t4)/4)
   se mf>=9 entao
      escreval("SS")
   fimse
   se (mf>=7) e (mf<9) entao
      escreval("MS")
   fimse
   se (mf>=5) e (mf<7) entao
      escreval("MM")
   fimse
   se (mf>=3) e (mf<5) entao
      escreval("MI")
   fimse
   se mf<3 entao
      escreval("II")
   fimse

Fimalgoritmo