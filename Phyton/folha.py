# vetores para guardar os dados
folhaPgto = []

while True:
    print("")
    print("")
    print("")
    print("-------------------------")
    print("Folha de Pagamento - Menu")
    print("-------------------------")
    print("1 - Cadastro")
    print("2 - Consulta")
    print("3 - Listagem")
    print("0 - Sair")
    op = input("Opcao : ")

    if op =="0":
        break

    ###
    #   Se o usuário escolheu a opção 1 - Cadastro
    ###
    if op == "1":
        print("")
        print("")
        print("")
        print("-----------------------------")
        print("Cadastro - Folha de Pagamento")
        print("-----------------------------")
        nome  = input("Nome do funcionãrio  : ")
        valor = input("Valor da hora        : ")
        horas = input("Qtd de horas mensais : ")
        valor = float(valor)
        horas = float(horas)

        salBruto = horas * valor
        valINSS  = salBruto * 0.08
        if salBruto <= 1500 :
            valIRRF = 0
        elif 1500 > salBruto <= 3000 :
            valIRRF = salBruto * 0.07
        elif 3001 < salBruto <= 8000 :
            valIRRF = salBruto * 0.1
        elif 8000 < salBruto <= 12000 :
            valIRRF = salBruto * 0.15
        else:
            valIRRF = salBruto * 0.2
        salLiq = salBruto - valINSS - valIRRF

        registro = [nome, valor, horas, salBruto, valINSS, valIRRF, salLiq]
        folhaPgto.append(registro)
        # fim do if op == "1"

        
    ###
    #   Se o usuário escolheu a opção 2 - Consulta
    ###
    if op == "2":
        print("")
        print("")
        print("")
        print("-----------------------------")
        print("Consulta - Folha de Pagamento")
        print("-----------------------------")
        print("Existem ", len(folhaPgto), "registro na taberla")
        reg = input("Qual registro deseja consultar : ")
        reg = int(reg)

        if reg < 1 or reg > len(folhaPgto) :
            print("Número de registro inváldo")
        else:
            reg = reg - 1
            print("Nome             : ", folhaPgto[reg] [0])
            print("Valor da hora    : ", folhaPgto[reg] [1])
            print("Qtd de horas     : ", folhaPgto[reg] [2])
            print("Salário Bruto    : ", folhaPgto[reg] [3])
            print("Desconto de INSS : ", folhaPgto[reg] [4])
            print("Desconto de IRRF : ", folhaPgto[reg] [5])
            print("Salário Líquido  : ", folhaPgto[reg] [6])

        # fim do if op == "2"

        
    ###
    #   Se o usuário escolheu a opção 3 - Listagem
    ###
    if op == "3":
        print("")
        print("")
        print("")
        print("-----------------------------")
        print("Listagem - Folha de Pagamento")
        print("-----------------------------")
        
        print ("{:<15} {:<6} {:<10} {:<7} {:<7} {:<10}".format('Nome','Horas','Sal bruto','INSS','IRRF','Sal liquido'))
        for registro in folhaPgto:
            nome  = registro[0]
            horas = registro[2]
            bruto = registro[3]
            inss  = registro[4]
            irrf  = registro[5]
            liqu  = registro[6]

            print ("{:<15} {:<6} {:<10} {:<7} {:<7} {:<10}".format(nome,horas,bruto,inss,irrf,liqu))

        # fim do if op == "3"
