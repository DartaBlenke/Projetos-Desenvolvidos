# Calculo de pagamento

# variaveis
nome = ""
valHora = 0
qtdSem1 = 0
qtdSem2 = 0
qtdSem3 = 0
qtdSem4 = 0
salBruto = 0
valINSS = 0
valIRRF = 0
salLiquid = 0

# entrada de dados

nome    = input("Nome              :")
valHora = input("Valor da hora     :")
qtdSem1 = input("Horas da semanda 1:")
qtdSem2 = input("Horas da semanda 2:")
qtdSem3 = input("Horas da semanda 3:")
qtdSem4 = input("Horas da semanda 4:")

# processamento dos dados

valHora = float(valHora)
qtdSem1 = float(qtdSem1)
qtdSem2 = float(qtdSem2)
qtdSem3 = float(qtdSem3)
qtdSem4 = float(qtdSem4)

salBruto = (qtdSem1 + qtdSem2 + qtdSem3 + qtdSem4 ) * valHora

valINSS  = salBruto * 0.08

if salBruto <= 1500 :
    valIRRF = 0;
elif salBruto > 1500 and salBruto <= 3000 :
    valIRRF = salBruto * 0.07;
elif salBruto > 3000 and salBruto <= 8000 :
    valIRRF = salBruto * 0.10;
elif salBruto > 8000 and salBruto <= 1200 :
    valIRRF = salBruto * 0.15
else:
    valIRRF = salBruto * 0.20

salLiqui = salBruto - valINSS - valIRRF

# saida de dados

print("O salário líquito de ",nome,"é de R$",salLiqui)
