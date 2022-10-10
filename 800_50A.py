#A. Domino piling
import math

MandN = input()
MN_list = MandN.split()

intMN = [int(i) for i in MN_list]

Msq = intMN[0]
Nsq = intMN[1]

maxDom = math.floor((Msq * Nsq)/2)
print(maxDom)
