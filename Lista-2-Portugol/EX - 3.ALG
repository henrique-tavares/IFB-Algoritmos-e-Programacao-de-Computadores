Algoritmo "Ex - 3"
// Disciplina: [Linguagem e L�gica de programa�ao]
// Fun��o : Decomp�e um n�mero em seus fatores primos
// Autor : Cl�udio Morgado de Souza
// Data : 31/10/2002
// Se��o de Declara��es
var
   num, qtd_primo, primo, i : inteiro

inicio
   //Depemdendo do n�mero escolhido,
   //o algor�timo pode demorar bastante at� encontar todos os fatores primos
   escreval("Digite o n�mero a ser decomposto em seus fatores primos.")
   leia(num)
   escreval("")
   escreva(num," =")

   primo := 2
   qtd_primo := 0

   enquanto num<>1 faca

      enquanto num mod primo =0 faca
         num := num\primo
         qtd_primo := (qtd_primo)+(1)
      fimenquanto
      se qtd_primo<>0 entao
         escreva(primo,"(",qtd_primo,") ")
      fimse

      qtd_primo := 0
      primo := primo+1
      i := 2

      repita
         enquanto primo mod i <> 0 faca
            i:=i+1
         fimenquanto
         se i <> primo entao
            primo := primo+1
            i:=2
         fimse
      ate i=primo
      
   fimenquanto
   escreval("")


fimalgoritmo
