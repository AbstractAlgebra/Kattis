answers = []


def isVowel(char):
	return char.lower() in 'aeiouy'

while True:
	words = int(input())
	if words == 0:
		break
	maxDoubleVowels = 0
	answer = ""
	for j in range(0,words):
		word = str(input())

		#handle case with no doubles
		if (j == 0):
			answer = word
		#inputWords.append(word)
		doubleVowelCount = 0
		for k in range(0,len(word)-1):
			#print(k+1)
			if word[k] == word[k+1] and isVowel(word[k]):
				doubleVowelCount += 1

		if doubleVowelCount > maxDoubleVowels:
			answer = word
			maxDoubleVowels = doubleVowelCount
	answers.append(str(answer))

for i in range(0,len(answers)):
	print(answers[i])
