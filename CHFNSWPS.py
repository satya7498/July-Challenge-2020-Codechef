for t in range(int(input())):
	n = int(input())
	arr1 = list(map(int, input().strip().split()))
	arr2 = list(map(int, input().strip().split()))

	gm = 2*min(min(arr1), min(arr2))


	dicti1 = {i:0 for i in arr1}
	dicti2 = {i:0 for i in arr2}

	for i in arr1: dicti1[i] += 1
	for i in arr2: dicti2[i] += 1

	# Check if possible

	dicti = {}
	for i in arr1:
		if i not in dicti: 
			dicti[i] = 1 
		else: 
			dicti[i] += 1
	for i in arr2:
		if i not in dicti: 
			dicti[i] = 1
		else: 
			dicti[i] += 1

	for i in dicti:
		if dicti[i]%2 != 0:
			print(-1)
			break
	else:

		des1 = []
		des2 = []
		for i in dicti1:

                 	if dicti2[i] > dicti[i]//2:
				for j in range(dicti2[i]-(dicti[i]//2)):
					des2.append(i)


		des1.sort()
		des2.sort(key=lambda x:-x)

		solution = 0
		for i in range(len(des1)):
			mini = min(des1[i], des2[i])
			if mini > gm:
				solution += gm
			else:
				solution += mini

		print(solution)