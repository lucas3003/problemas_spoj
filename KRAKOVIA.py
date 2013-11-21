instance = 1

while True:
	itens, amigos = raw_input().split()
	itens = int(itens)
	amigos = int(amigos)

	if itens == 0 and amigos == 0:
		break

	total = 0

	for i in range(0, itens):
		total = total + int(raw_input())

	print "Bill #" + str(instance) + " costs " + str(total) + ": each friend should pay " + str(int(total/amigos)) + "\n"

	instance = instance + 1

