Algoritmo "p1_conta_de_luz"

Var
   nome, pessoa, bandeira, geracao, endereco, endereco2: caracter
   UC, consumo, valor, dia, dia1, gerado, fevdia, mes, ano, mes1, ano1, mes2: real

Inicio
   escreval ("Digite seu nome: ")
   leia (nome)
   escreval ("Digite o número da unidade consumidora (UC): ")
   leia (UC)
   escreva ("É pessoa fisica ou juridica? ")
   leia (pessoa)
   escreval ("Tem geração própria (sim ou nao)? ")
   leia (geracao)
   escreva ("Digite o endereco: ")
   leia (endereco)
   escreval ("Digite o dia da leitura: ")
   leia (dia)
   escreval ("Digite o mês da leitura: ")
   leia (mes)
   escreval ("Digite o ano da leitura: ")
   leia (ano)
   escreval ("Digite o consumo: ")
   leia (consumo)
   escreval ("Digite a bandeira (verde/amarela/vermelha1/vermelha2): ")
   leia (bandeira)

   Se (pessoa = "fisica") e (geracao = "sim") entao
      escreval ("Digite o segundo endereço: ")
      leia (endereco2)
      escreval ("Digite o valor de kilowatt gerado: ")
      leia (gerado)
   FimSe

   // Aplica a taxa de acordo com a bandeira
   se (bandeira = "verde") entao
      valor <- (consumo*0.45)
   fimse
   Se (bandeira = "amarela") entao
      valor <- (consumo*0.45) + (consumo/100) * 1.50
   fimse
   Se (bandeira = "vermelha1") entao
      valor <- (consumo*0.45) + (consumo/100) * 3.00
   fimse
   Se (bandeira = "vermelha2") entao
      valor <- (consumo*0.45) + (consumo/100) * 4.50
   fimse

   // saídas
   escreval ("*******************************************************")
   escreval ("Nome: ", nome)
   escreval ("UC: ", UC)
   escreval ("Pessoa: ", pessoa)
   escreval ("Endereço: ", endereco)

   se (geracao = "nao") entao
      escreval ("Valor da conta de luz: R$", valor)
   fimse
   
   escreval ("Bandeira: ", bandeira)
   
   //geração própria
   Se (geracao = "sim") entao
      escreval ("Geração própria: ", geracao)
      escreval ("Valor: R$0,00 ")
   fimse
   Se (gerado > consumo) e (geracao = "sim") entao
      escreval ("Saldo de energia transferido para o ", endereco2)
   fimse
   se (gerado < consumo) e (geracao = "sim") entao
      escreval ("Não há saldo de energia")
   fimse

   //data
   Se (mes = 1) entao
      fevdia <- dia - 1
      dia1 <-  dia + 1
      mes1 <- mes + 1
      escreval ("Vencimento: ", fevdia, "/", mes1, "/", ano)
   senao
      Se (mes = 12) entao
         mes2 <- mes - 11
         ano1 <- ano + 1
         escreval ("Vencimento: ", dia, "/", mes2, "/", ano1)
      senao
         mes1 <- mes + 1
         escreval ("Vencimento: ", dia, "/", mes1, "/", ano)
      FimSe
   FimSe
   escreval ("*******************************************************")

FimAlgoritmo

