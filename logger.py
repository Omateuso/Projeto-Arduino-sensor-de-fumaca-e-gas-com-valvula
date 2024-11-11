import serial

#port = "/something/somethingsomething"
baud = 9600
arquivo ="log.csv"


ser = serial.Serial(port,baud)
ser.flushInput()
print("Abrindo")

quantia = 10
linha = 0
while linha <= quantia:
    dados = str(ser.readline().decode("utf-8"))
    print(dados)
    file = open(arquivo,"a")
    file.write(dados)
    linha = linha+1

print("Leitura terminada")
file.close()
ser.close()
