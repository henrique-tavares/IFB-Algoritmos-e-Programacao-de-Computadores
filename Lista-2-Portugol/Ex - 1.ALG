Algoritmo "Palestra"
// Disciplina  :  [APC]
// Professor   : João Victor
// Descrição   : Calcula a duração de uma palestra
// Autor(a)    : Henrique Tavares
// Data atual  : 10/04/2019
Var
   hora_inicial, min_inicial, seg_inicial, hora_final, min_final, seg_final :inteiro
   total_seg_inicial, total_seg_final :inteiro
   res_hora, res_min, res_seg :inteiro

Inicio
   //Entrada dos horários de início  término
   //Digite primeiro as horas, pressione enter, digite os minutos, pressione enter,
   //digite os segundos e repita, agora para o horário de término.
   escreval("Escreva o horário de início")
   leia(hora_inicial, min_inicial, seg_inicial)
   escreval("")
   escreval("Escreva o horário de término")
   leia(hora_final, min_final, seg_final)

   //Caso o usuário digite um horário impossível
   enquanto (hora_inicial>23) ou (hora_final>23) ou (min_inicial>59) ou (min_final>59) ou (seg_inicial>59) ou (seg_final>59) faca
      escreval("")
      escreval("ERRO! Informe a hora corretamente.")
      escreval("")
      escreval("Escreva o horário de início")
      leia(hora_inicial, min_inicial, seg_inicial)
      escreval("")
      escreval("Escreva o horário de término")
      leia(hora_final, min_final, seg_final)
   fimenquanto

   //Cálculo da duração, transformando as horas e minutos em segundos
   total_seg_inicial := ((hora_inicial)*(3600))+((min_inicial)*(60))+(seg_inicial)
   total_seg_final := ((hora_final)*(3600))+((min_final)*(60))+(seg_final)
   res_seg := (total_seg_final)-(total_seg_inicial)

   //Caso a palestra ocorra de um dia para o outro,ou seja, passe da meia-noite
   //1 dia tem 86400s
   se(res_seg<0)entao
      total_seg_inicial := (86400)-(total_seg_inicial)
      res_seg := (total_seg_final)+(total_seg_inicial)
   fimse

   //Transformação dos segundos para o formato de horas, minutos e segundos
   res_min := (res_seg)div(60)
   res_seg := (res_seg)mod(60)
   res_hora := (res_min)div(60)
   res_min := (res_min)mod(60)

   escreval("")
   escreval("A palestra durou", res_hora, "h", res_min, "m", res_seg, "s")
   escreval("")
Fimalgoritmo